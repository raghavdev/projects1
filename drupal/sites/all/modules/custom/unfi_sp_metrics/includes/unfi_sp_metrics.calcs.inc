<?php

function unfi_sp_metrics_nir_simple_total_query(&$context) {
  $closed_sids = array(7,33); // Magic numbers: Archived, Declined

  $query = db_select('node', 'n');
  $query->condition('n.type', 'request_form');

  // Return a query of the latest the request_forms' current state (last history record)
  $subquery = db_select('workflow_node_history', 'swnh');
  $subquery->addExpression('MAX(swnh.hid)');
  if (!empty($context['timerange']['end'])) {
    //Ignore state changes after the time range
    $subquery->condition('swnh.stamp', $context['timerange']['end'], '<=');
  }
  $subquery->groupBy('entity_type');
  $subquery->groupBy('nid');
  $query->join('workflow_node_history', 'wnh', 'n.nid=wnh.nid AND n.vid=wnh.revision_id AND wnh.entity_type=\'node\'');
 // $query->condition('wnh.hid', $subquery, 'IN');

  // Ignore requests created after the time range
  if (!empty($context['timerange']['end'])) {
    $query->condition('n.created', $context['timerange']['end'], '<=');
  }

  // Ignore requests "closed" before the time range
  if (!empty($context['timerange']['start'])) {
    $db_or = db_or()
      ->condition('wnh.sid', $closed_sids, 'NOT IN')
      ->condition('wnh.stamp', $context['timerange']['start'], '>=');
    $query->condition($db_or);
  }
  // Add condition for channel report.
  if($context['type'] == 'new_item_requests_channel'){
		$query->leftJoin('field_data_field_channel', 'ntr', 'ntr.entity_id = n.nid');
		$query->condition('ntr.field_channel_tid', $context['timerange']['channel'], '=');
	}
  // Add condition for key customer report.
	if($context['type'] == 'new_item_requests_customer'){
		$query->leftJoin('field_data_field_key_client', 'ntr', 'ntr.entity_id = n.nid');
		$query->condition('ntr.field_key_client_tid', $context['timerange']['key_customer'], '=');
	}
  $query->orderBy('n.nid');

  return $query;
}

function unfi_sp_metrics_nir_simple_total_query_total(&$context, $chunk_context, $chunk_type) {
  return unfi_sp_metrics_nir_simple_total_query($context)
    ->countQuery()->execute()->fetchField();
}

function unfi_sp_metrics_nir_simple_total_query_worker(&$results, $info, &$context, &$chunk_context, $chunk_type) {
  if (!isset($results['results']['total'])) {
    $results['results'] = unfi_sp_metrics_nir_simple_total_default_results();
  }

  $query = unfi_sp_metrics_nir_simple_total_query($context);
  $query->fields('n', array('nid', 'created'));
  $query->fields('wnh', array('sid'));
  $query->range($chunk_context['sandbox']['progress'], $chunk_context['sandbox']['limit']);

  $data = $query->execute()->fetchAllAssoc('nid');

  $child_counts = array();

  if (!empty($data)) {
    $query = db_select('field_data_field_request_form', 'eref');
    $query->fields('eref', array('field_request_form_target_id'));
    $query->addExpression('count(*)');
    $query->condition('eref.field_request_form_target_id', array_keys($data));
    $query->condition('eref.entity_type', 'node');
    $query->condition('eref.bundle', 'product');
    $query->groupBy('eref.field_request_form_target_id');

    $child_counts = $query->execute()->fetchAllKeyed();
  }

  foreach ($data as $id => $entry) {
    $state_id    = $entry->sid;
    $child_count = $child_counts[$id];
    $results['results']['total'] += $child_count;
    if (
      !empty($context['timerange']['start'])
      && $entry->created >= $context['timerange']['start']
    ) {
      $results['results']['new'] += $child_count;
    }
    $results['results']['states'][$state_id] += $child_count;
    $chunk_context['sandbox']['progress']++;
  }
}

function unfi_sp_metrics_nir_simple_total_default_results() {
  $results = array(
    'total'  => 0,
    'new'    => 0,
    'states' => array(),
  );

  $workflow = workflow_load_by_name('request_workflow');
  foreach (array_keys($workflow->getStates()) as $state_id) {
    $results['states'][$state_id] = 0;
  }

  return $results;
}

/*
 * ====
 */

function unfi_sp_metrics_nir_transition_avg_query_worker(&$results, $info, &$context, &$chunk_context, $chunk_type) {
  if (!isset($results['results']['states'])) {
    $results['results'] = unfi_sp_metrics_nir_transition_avg_default_results();
  }

  $query = unfi_sp_metrics_nir_simple_total_query($context);
  $query->fields('n', array('nid'));
  $query->fields('wnh', array('sid'));
  $query->range($chunk_context['sandbox']['progress'], $chunk_context['sandbox']['limit']);

  $data = $query->execute()->fetchAllKeyed();

  $child_counts = array();

  if (!empty($data)) {
    $query = db_select('field_data_field_request_form', 'eref');
    $query->fields('eref', array('field_request_form_target_id'));
    $query->addExpression('count(*)');
    $query->condition('eref.field_request_form_target_id', array_keys($data));
    $query->condition('eref.entity_type', 'node');
    $query->condition('eref.bundle', 'product');
    $query->groupBy('eref.field_request_form_target_id');

    $child_counts = $query->execute()->fetchAllKeyed();
  }

  foreach ($data as $id => $ending_state_id) {
    $chunk_context['sandbox']['progress']++;

    if (
      !empty($context['ending_state_ids'])
      && !in_array($ending_state_id, $context['ending_state_ids'])
    ) {
      continue;
    }

    $query = db_select('workflow_node_history', 'wnh');
    $query->fields('wnh', array('old_sid', 'sid', 'stamp'));
    $query->condition('wnh.entity_type', 'node');
    $query->condition('wnh.nid', $id);
    if (!empty($context['timerange']['end'])) {
      $query->condition('wnh.stamp', $context['timerange']['end'], '<=');
    }
    $query->orderBy('wnh.hid');

    $history = $query->execute();

    // A request might flip-flop between the same states, so the request should
    // only be counted once
    $processed  = array();
    $last_state = 0;
    $last_stamp = 0;

    // Note: this assumes that there are a reasonable (i.e.: < BIG) amount of
    // transitions per request, otherwise this could time/memory out.
    while (($row = $history->fetchAssoc())) {
      if ($last_stamp && $row['old_sid'] == $last_state) {
        if (!empty($context['timerange']['strict'])) {
          // Magic numbers:
          // 1 = super strict, only duration w/i time range
          // 2 = lax, includes duration leading into time range
          $temp_timestamp = $context['timerange']['strict'] == 2 ? $row['stamp'] : $last_stamp;
          if ($temp_timestamp < $context['timerange']['start']) {
            $last_state = $row['sid'];
            $last_stamp = $row['stamp'];
            continue;
          }
        }

        $duration      = $row['stamp'] - $last_stamp;
        $adjusted      = $duration;
        $alter_context = array(
          'start'      => $last_stamp,
          'end'        => $row['stamp'],
          'last_state' => $last_state,
          'new_state'  => $row['sid'],
          'node_id'    => $id,
        );

        drupal_alter('unfi_sp_metrics_nir_transition_avg_duration', $adjusted, $alter_context, $info);

        $results['results']['states'][$last_state]['duration'] += $duration;
        $results['results']['states'][$last_state]['adjusted'] += $adjusted;

        $results['results']['states'][$last_state]['requests_trans']++;
        $results['results']['states'][$last_state]['items_trans'] += $child_counts[$id];

        $processed[$last_state] = $last_state;
      }

      $last_state = $row['sid'];
      $last_stamp = $row['stamp'];
    }

    foreach ($processed as $state_id) {
      $results['results']['states'][$state_id]['requests']++;
      $results['results']['states'][$state_id]['items'] += $child_counts[$id];
    }
  }
}

function unfi_sp_metrics_nir_transition_avg_default_results() {
  $results = array(
    'states' => array(),
  );

  $workflow = workflow_load_by_name('request_workflow');
  foreach (array_keys($workflow->getStates()) as $state_id) {
    $results['states'][$state_id] = array(
      'duration'       => 0,
      'adjusted'       => 0,
      'requests'       => 0,
      'items'          => 0,
      'requests_trans' => 0,
      'items_trans'    => 0,
    );
  }

  return $results;
}

function unfi_sp_metrics_unfi_sp_metrics_nir_transition_avg_duration_alter(&$duration, $context, $info) {
  $start = new DateTime();
  $end   = new DateTime();

  $start->setTimestamp($context['start']);
  $end->setTimestamp($context['end']);

  $worker = clone $start;
  $worker->modify('midnight');

  $holiday_calc = new UNFIholiday();

  $non_work_secs = 0;
  $last_dst      = $worker->format('I');
  while ($worker->getTimestamp() < $context['end']) {
    $weekday = $worker->format('w');
    if (in_array($weekday, array(0, 6))) {
      $non_work_secs += 86400;

      // Daylight Saving Time adjustment,
      // if last_dst != new_dst, spring forward or fall back
      // if last_dst == 1, fall back and gain an hour
      // if last_dst == 0, spring forward and lose an hour
      if ($weekday == 0 && $last_dst != $worker->format('I')) {
        $non_work_secs += $last_dst == 1 ? 3600 : -3600;
      }
    }
    elseif (($holiday = $holiday_calc->isHoliday($worker))) {
      $non_work_secs += 86400;
    }
    $last_dst = $worker->format('I');
    $worker->modify('+1 days');
  }

  if ($non_work_secs) {
    if ($non_work_secs < $duration) {
      $duration -= $non_work_secs;
    } else {
      watchdog('unfi_sp_metrics', 'More weekend/holiday time (@non sec) was calculated than the total duration (@dur sec), so 0 sec was used. Between @start and @end. Node @id, old state @osid, new state @nsid, metrics aggregation @agg, aggregation job @job.', array(
        '@non'   => $non_work_secs,
        '@dur'   => $duration,
        '@start' => format_date($context['start'], 'custom', 'l, F j, Y - H:i:s T P'),
        '@end'   => format_date($context['end'], 'custom', 'l, F j, Y - H:i:s T P'),
        '@id'    => $context['node_id'],
        '@osid'  => $context['last_state'],
        '@nsid'  => $context['new_state'],
        '@agg'   => $info['metrics_agg'],
        '@job'   => $info['job'],
      ), WATCHDOG_WARNING);
      $duration = 0;
    }
  }
}

/*
 * ----
 */

function unfi_sp_metrics_nir_rejection_rate_query_worker(&$results, $info, &$context, &$chunk_context, $chunk_type) {
  if (!isset($results['results']['states'])) {
    $results['results'] = unfi_sp_metrics_nir_rejection_rate_default_results();
  }

  $query = unfi_sp_metrics_nir_simple_total_query($context);
  $query->fields('n', array('nid'));
  $query->fields('wnh', array('sid', 'old_sid'));
  $query->range($chunk_context['sandbox']['progress'], $chunk_context['sandbox']['limit']);

  $data = $query->execute()->fetchAllAssoc('nid');

  $child_counts = array();

  if (!empty($data)) {
    $query = db_select('field_data_field_request_form', 'eref');
    $query->fields('eref', array('field_request_form_target_id'));
    $query->addExpression('count(*)');
    $query->condition('eref.field_request_form_target_id', array_keys($data));
    $query->condition('eref.entity_type', 'node');
    $query->condition('eref.bundle', 'product');
    $query->groupBy('eref.field_request_form_target_id');

    $child_counts = $query->execute()->fetchAllKeyed();
  }

  foreach ($data as $id => $entry) {
    $results['results']['total'] += $child_counts[$id];

    if ($entry->sid == 33) {
      $results['results']['rejected'] += $child_counts[$id];
      $results['results']['states'][$entry->old_sid] += $child_counts[$id];
    }

    $chunk_context['sandbox']['progress']++;
  }
}

function unfi_sp_metrics_nir_rejection_rate_default_results() {
  $results = array(
    'total'    => 0,
    'rejected' => 0,
    'states'   => array(),
  );

  $workflow = workflow_load_by_name('request_workflow');
  foreach (array_keys($workflow->getStates()) as $state_id) {
    $results['states'][$state_id] = 0;
  }

  return $results;
}
