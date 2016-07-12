<?php

/*
 * ==== NEW ITEM REQUESTS CHANNEL ====
 */

function unfi_sp_metrics__new_item_requests_channel__process_page_data(&$agg, &$page_state) {
  $workflow  = workflow_load_by_name('request_workflow');
  $states    = $workflow->getStates();
  $processed = &$agg['processed'];
  $current   = array();
  $previous  = array();

  if (isset($agg['results']['unfi_sp_metrics_nir_simple_total_current'])) {
    $current = &$agg['results']['unfi_sp_metrics_nir_simple_total_current'];
  }
  if (isset($agg['results']['unfi_sp_metrics_nir_simple_total_previous'])) {
    $previous = &$agg['results']['unfi_sp_metrics_nir_simple_total_previous'];
  }
  
  if (!isset($current['results'])) {
    $current['results'] = unfi_sp_metrics_nir_simple_total_default_results();
  }
  if (!isset($previous['results'])) {
    $previous['results'] = unfi_sp_metrics_nir_simple_total_default_results();
  }

  $processed['new']['current']  = $current['results']['new'];
  $processed['new']['previous'] = $previous['results']['new'];

  $new_diff = $processed['new']['current'] - $processed['new']['previous'];
  $percent = 0;
  if ($processed['new']['previous'] > 0) {
    $percent = $new_diff / $processed['new']['previous'];
  }
  $processed['new']['delta']   = $new_diff;
  $processed['new']['percent'] = $percent;

  // ----

  $processed['total']['current']  = $current['results']['total'];
  $processed['total']['previous'] = $previous['results']['total'];

  $total_diff = $processed['total']['current'] - $processed['total']['previous'];
  $percent = 0;
  if ($processed['total']['previous'] > 0) {
    $percent = $total_diff / $processed['total']['previous'];
  }
  $processed['total']['delta']   = $total_diff;
  $processed['total']['percent'] = $percent;

  // ----

  $state_id = 7; // Magic number: Archived

  if (!isset($current['results']['states'][$state_id])) {
    $current['results']['states'][$state_id] = 0;
  }

  if (!isset($previous['results']['states'][$state_id])) {
    $previous['results']['states'][$state_id] = 0;
  }

  $processed['archived']['current']  = $current['results']['states'][$state_id];
  $processed['archived']['previous'] = $previous['results']['states'][$state_id];

  $total_diff = $processed['archived']['current'] - $processed['archived']['previous'];
  $percent = 0;
  if ($processed['archived']['previous'] > 0) {
    $percent = $total_diff / $processed['archived']['previous'];
  }
  $processed['archived']['delta']   = $total_diff;
  $processed['archived']['percent'] = $percent;

  $rate = 0;
  if ($processed['total']['current'] > 0) {
    $rate = $processed['archived']['current'] / $processed['total']['current'];
  }
  $processed['archived']['rate'] = $rate;

  $rate = 0;
  if ($processed['total']['previous'] > 0) {
    $rate = $processed['archived']['previous'] / $processed['total']['previous'];
  }
  $processed['archived']['rate_previous'] = $rate;

  $rate_diff = $processed['archived']['rate'] - $processed['archived']['rate_previous'];
  $percent = 0;
  if ($processed['archived']['rate_previous'] > 0) {
    $percent = $rate_diff / $processed['archived']['rate_previous'];
  }
  $processed['archived']['rate_delta']   = $rate_diff;
  $processed['archived']['rate_percent'] = $percent;

  // ----

  $processed['state_totals'] = array();
  foreach ($states as $state_id => $state) {
    $processed['state_totals'][$state_id] = array(
      'label'    => $state->state,
      'current'  => 0,
      'previous' => 0,
      'percent'  => 0,
      'delta'    => 0,
      'change'   => 0,
    );

    $state_data = &$processed['state_totals'][$state_id];

    if (isset($current['results']['states'][$state_id])) {
      $state_data['current'] = $current['results']['states'][$state_id];
    }

    if (isset($previous['results']['states'][$state_id])) {
      $state_data['previous'] = $previous['results']['states'][$state_id];
    }

    if ($processed['total']['current'] > 0) {
      $state_data['percent'] = $state_data['current'] / $processed['total']['current'];
    }

    $state_data['delta'] = $state_data['current'] - $state_data['previous'];

    if ($state_data['previous'] > 0) {
      $state_data['change'] = $state_data['delta'] / $state_data['previous'];
    }
    elseif ($state_data['delta'] > 0) {
      $state_data['change'] = FALSE;
    }
  }

  // ----

  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current', 'state_avgs');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_archived', 'state_avgs_archived');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_rejected', 'state_avgs_rejected');

  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_lax', 'state_avgs_lax');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_archived_lax', 'state_avgs_archived_lax');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_rejected_lax', 'state_avgs_rejected_lax');

  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_strict', 'state_avgs_strict');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_archived_strict', 'state_avgs_archived_strict');
  _unfi_sp_metrics_process_transition_avg_job_results($processed, $agg, 'unfi_sp_metrics_nir_transition_avg_current_rejected_strict', 'state_avgs_rejected_strict');

  // ----

  if (isset($agg['results']['unfi_sp_metrics_nir_rejection_rate_current'])) {
    $current = &$agg['results']['unfi_sp_metrics_nir_rejection_rate_current'];
    $current['results'] += unfi_sp_metrics_nir_rejection_rate_default_results();

    $processed['rejection_rate'] = array(
      'rejected' => $current['results']['rejected'],
      'avg_rate' => 0,
      'states'   => array(),
    );

    $total_rate  = 0;
    $state_count = 0;

    foreach ($states as $state_id => $state) {
      $processed['rejection_rate']['states'][$state_id] = array(
        'label'         => $state->state,
        'items'         => $current['results']['states'][$state_id],
        'percent'       => 0,
        'percent_total' => 0,
      );

      $state_data = &$processed['rejection_rate']['states'][$state_id];

      if (!empty($current['results']['rejected'])) {
        $state_data['percent'] = $current['results']['states'][$state_id] / $current['results']['rejected'];
      }

      if (!empty($current['results']['total'])) {
        $state_data['percent_total'] = $current['results']['states'][$state_id] / $current['results']['total'];
      }

      if ($state_data['percent_total'] > 0) {
        $total_rate += $state_data['percent_total'];
        $state_count++;
      }
    }

    if ($state_count) {
      $processed['rejection_rate']['avg_rate'] = $total_rate / $state_count;
    }
  }
}

function _unfi_sp_metrics_process_transition_avg_job_results(&$processed, &$agg, $job, $key) {
  $workflow  = workflow_load_by_name('request_workflow');
  $states    = $workflow->getStates();

  if (!empty($agg['results'][$job])) {
    $current = &$agg['results'][$job];
    $current['results'] += unfi_sp_metrics_nir_transition_avg_default_results();

    $processed[$key] = array(
      'duration'     => 0,
      'adjusted'     => 0,
      'duration_per' => 0,
      'adjusted_per' => 0,
      'states'       => array(),
    );
    foreach ($states as $state_id => $state) {
      // TODO: WIP: in debate of whether or not declined or archived durations should effect these numbers...
//      $ignore_states = array('Declined', 'Archived');
//      if (
//        empty($current['data']['context']['ending_state_ids'])
//        && in_array($state->state, $ignore_states)
//      ) {
//        continue;
//      }

      $processed[$key]['states'][$state_id] = array(
        'label'          => $state->state,
        'duration'       => 0,
        'adjusted'       => 0,
        'percent'        => 0,
        'compare'        => 0,
        'percent_adj'    => 0,
        'compare_adj'    => 0,
        'requests'       => 0,
        'items'          => 0,
        'requests_trans' => 0,
        'items_trans'    => 0,
      );

      $state_data = &$processed[$key]['states'][$state_id];

      if (!empty($current['results']['states'][$state_id]['requests'])) {
        $state_data['duration'] = $current['results']['states'][$state_id]['duration'] / $current['results']['states'][$state_id]['requests'];
      }

      if (!empty($current['results']['states'][$state_id]['requests'])) {
        $state_data['adjusted'] = $current['results']['states'][$state_id]['adjusted'] / $current['results']['states'][$state_id]['requests'];
      }

      if (!empty($current['results']['states'][$state_id]['requests'])) {
        $state_data['requests'] = $current['results']['states'][$state_id]['requests'];
      }

      if (!empty($current['results']['states'][$state_id]['items'])) {
        $state_data['items'] = $current['results']['states'][$state_id]['items'];
      }

      if (!empty($current['results']['states'][$state_id]['requests_trans'])) {
        $state_data['requests_trans'] = $current['results']['states'][$state_id]['requests_trans'];
      }

      if (!empty($current['results']['states'][$state_id]['items_trans'])) {
        $state_data['items_trans'] = $current['results']['states'][$state_id]['items_trans'];
      }

      $processed[$key]['duration'] += $state_data['duration'];
      $processed[$key]['adjusted'] += $state_data['adjusted'];
    }

    if (!empty($processed[$key]['states'])) {
      $processed[$key]['duration_per'] = $processed[$key]['duration'] / count($processed[$key]['states']);
      $processed[$key]['adjusted_per'] = $processed[$key]['adjusted'] / count($processed[$key]['states']);
    }

    foreach ($processed[$key]['states'] as $state_id => &$state_data) {
      if ($processed[$key]['duration']) {
        $state_data['percent'] = $state_data['duration'] / $processed[$key]['duration'];
      }

      if ($processed[$key]['adjusted']) {
        $state_data['percent_adj'] = $state_data['adjusted'] / $processed[$key]['adjusted'];
      }

      if ($processed[$key]['duration']) {
        $state_data['compare'] = $state_data['duration'] / $processed[$key]['duration_per'];
      }

      if ($processed[$key]['adjusted']) {
        $state_data['compare_adj'] = $state_data['adjusted'] / $processed[$key]['adjusted_per'];
      }
    }
  }
}

/*
 * -----------------------------------------------------------------------------
 */

function unfi_sp_metrics__new_item_requests_channel__build_page(&$page, &$page_state, &$agg) {
  $processed = &$agg['processed'];

  $timerange = FALSE;
  if (!empty($agg['results']['unfi_sp_metrics_nir_simple_total_current']['data']['context']['timerange'])) {
    $timerange = $agg['results']['unfi_sp_metrics_nir_simple_total_current']['data']['context']['timerange'];
  }

  if ($timerange) {
    $term = taxonomy_term_load($timerange['channel']);
    $page['timerange_channel'] = array(
      '#theme'      => 'html_tag',
      '#tag'        => 'h3',
      '#value'      => t('Channel report: ') . $term->name,
      '#attributes' => array(),
    );
    $page['timerange'] = array(
      '#theme'      => 'html_tag',
      '#tag'        => 'h3',
      '#value'      => t('Date Range: '),
      '#attributes' => array(),
    );

    switch ($timerange['type']) {
      case 'year':
        $page['timerange']['#value'] .= 'Year of ' . format_date($timerange['start'], 'custom', 'Y');
        break;
      case 'month':
        $page['timerange']['#value'] .= format_date($timerange['start'], 'custom', 'F Y');
        break;
      case 'day':
        $page['timerange']['#value'] .= format_date($timerange['start'], 'custom', 'F j, Y');
        if (date('Y-m-d', $timerange['start']) != date('Y-m-d', $timerange['end'])) {
          $page['timerange']['#value'] .= ' - ';
          $page['timerange']['#value'] .= format_date($timerange['end'], 'custom', 'F j, Y');
        }
        break;
    }
  }

  $page['totals'] = array(
    '#theme'      => 'table',
    '#header'     => array(),
    '#rows'       => array(),
    '#caption'    => t('Overview'),
    '#attributes' => array(
      'class' => array(
        'overview-totals',
      ),
    ),
  );

  $header = &$page['totals']['#header'];
  $rows   = &$page['totals']['#rows'];

  $header['new'] = array(
    'data'  => t('Net New Pipeline Additions'),
    'class' => array('th-value', 'net-new'),
  );
  $header['total'] = array(
    'data'  => t('Total Items In Pipeline'),
    'class' => array('th-value', 'net-total'),
  );
  $header['archived'] = array(
    'data'  => t('Total Items Setup'),
    'class' => array('th-value', 'net-setup'),
  );
  $header['archive_rate'] = array(
    'data'  => t('Item Setup Rate'),
    'class' => array('th-value', 'setup-rate'),
  );

  $rows['current'] = array(
    'data'  => array(),
    'class' => array(
      'current-totals',
    ),
  );

  $rows['change'] = array(
    'data'  => array(),
    'class' => array(
      'change-in-totals',
    ),
  );

  $rows['current']['data']['new'] = array(
    'data'  => (int) $processed['new']['current'],
    'class' => array('td-value', 'net-new'),
  );
  $rows['change']['data']['new'] = array(
    'data'  => number_format($processed['new']['percent'] * 100, 2) . '%',
    'class' => array('td-value', 'net-new'),
  );

  $rows['current']['data']['total'] = array(
    'data'  => (int) $processed['total']['current'],
    'class' => array('td-value', 'net-total'),
  );
  $rows['change']['data']['total'] = array(
    'data'  => number_format($processed['total']['percent'] * 100, 2) . '%',
    'class' => array('td-value', 'net-total'),
  );

  $rows['current']['data']['archived'] = array(
    'data'  => (int) $processed['archived']['current'],
    'class' => array('td-value', 'net-setup'),
  );
  $rows['change']['data']['archived'] = array(
    'data'  => number_format($processed['archived']['percent'] * 100, 2) . '%',
    'class' => array('td-value', 'net-setup'),
  );

  $rows['current']['data']['archive_rate'] = array(
    'data'  => number_format($processed['archived']['rate'] * 100, 2) . '%',
    'class' => array('td-value', 'setup-rate'),
  );
  $rows['change']['data']['archive_rate'] = array(
    'data'  => number_format($processed['archived']['rate_percent'] * 100, 2) . '%',
    'class' => array('td-value', 'setup-rate'),
  );

  // ----

  if (isset($processed['state_totals'])) {
    $page['state_totals'] = array(
      '#theme'      => 'table',
      '#header'     => array(),
      '#rows'       => array(),
      '#caption'    => t('New Item Pipeline'),
      '#attributes' => array(
        'class' => array(
          'per-state-totals'
        ),
      ),
    );

    $header = &$page['state_totals']['#header'];
    $rows   = &$page['state_totals']['#rows'];

    $header['state'] = array(
      'data'  => t('Process'),
      'class' => array('th-label'),
    );

    $header['current'] = array(
      'data'  => t('Number of Items'),
      'class' => array('th-value', 'total-current'),
    );

    $header['percent'] = array(
      'data'  => t('% Total Pipeline Items'),
      'class' => array('th-value', 'percent-of-total'),
    );

    $header['change'] = array(
      'data'  => t('% Change'),
      'class' => array('th-value', 'percent-change'),
    );

    foreach ($processed['state_totals'] as $state_id => $state_data) {
      $rows[$state_id] = array(
        'data'  => array(),
        'class' => array(
          'workflow-state', 'state-id-' . $state_id, drupal_html_class($state_data['label']),
        ),
      );

      $rows[$state_id]['data']['state'] = array(
        'data'  => t('@v', array('@v' => $state_data['label'])),
        'class' => array('td-label'),
      );

      $rows[$state_id]['data']['current'] = array(
        'data'  => (int) $state_data['current'],
        'class' => array('td-value', 'total-current'),
      );

      $rows[$state_id]['data']['percent'] = array(
        'data'  => number_format($state_data['percent'] * 100, 2) . '%',
        'class' => array('td-value', 'percent-of-total'),
      );

      if ($state_data['change'] === FALSE) {
        $temp_change = t('-> infinity%');
      }
      else {
        $temp_change = number_format($state_data['change'] * 100, 2) . '%';
      }
      $rows[$state_id]['data']['change'] = array(
        'data'  => $temp_change,
        'class' => array('td-value', 'percent-change'),
      );
    }
  }

  // ----

  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs', t('Avg. Service Time per Step of Items in Pipeline'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_archived',t('Avg. Service Time per Step of Items Setup'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_rejected',t('Avg. Service Time per Step of Items Rejected'));

  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_lax', t('Avg. Service Time per Step of Items in Pipeline (lax)'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_archived_lax',t('Avg. Service Time per Step of Items Setup (lax)'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_rejected_lax',t('Avg. Service Time per Step of Items Rejected (lax)'));

  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_strict', t('Avg. Service Time per Step of Items in Pipeline (strict)'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_archived_strict',t('Avg. Service Time per Step of Items Setup (strict)'));
  _unfi_sp_metrics_display_transition_avg_job_results($page, $page_state, $processed, 'state_avgs_rejected_strict',t('Avg. Service Time per Step of Items Rejected (strict)'));

  // ----

  if (isset($processed['rejection_rate'])) {
    $page['rejection_rate'] = array(
      '#theme'      => 'table',
      '#header'     => array(),
      '#rows'       => array(),
      '#caption'    => t('Avg. Item Rejection Rate Per Step'),
      '#attributes' => array(
        'class' => array(
          'rejection-rate'
        ),
      ),
    );

    $header = &$page['rejection_rate']['#header'];
    $rows   = &$page['rejection_rate']['#rows'];

    $header['state'] = array(
      'data'  => t('Process Steps'),
      'class' => array('th-label'),
    );

    $header['rejected'] = array(
      'data'  => t('Rejected Items'),
      'class' => array('th-value', 'total-rejected'),
    );

    $header['percent'] = array(
      'data'  => t('% Total of Rejected Items'),
      'class' => array('th-value', 'percent-of-rejected'),
    );

    $header['percent_total'] = array(
      'data'  => t('% Total Pipeline Items'),
      'class' => array('th-value', 'percent-of-total'),
    );

    foreach ($processed['rejection_rate']['states'] as $state_id => $state_data) {
      $rows[$state_id] = array(
        'data'  => array(),
        'class' => array(
          'workflow-state', 'state-id-' . $state_id, drupal_html_class($state_data['label']),
        ),
      );

      $rows[$state_id]['data']['state'] = array(
        'data'  => t('@v', array('@v' => $state_data['label'])),
        'class' => array('td-label'),
      );

      $rows[$state_id]['data']['rejected'] = array(
        'data'  => (int) $state_data['items'],
        'class' => array('td-value', 'total-rejected'),
      );

      $rows[$state_id]['data']['percent'] = array(
        'data'  => number_format($state_data['percent'] * 100, 2) . '%',
        'class' => array('td-value', 'percent-of-rejected'),
      );

      $rows[$state_id]['data']['percent_total'] = array(
        'data'  => number_format($state_data['percent_total'] * 100, 2) . '%',
        'class' => array('td-value', 'percent-of-total'),
      );
    }

    $rows['total_rejected'] = array(
      'data'  => array(),
      'class' => array('pipeline', 'total-rejected'),
    );

    $rows['total_rejected']['data']['label'] = array(
      'data'  => t('Total Rejected Items'),
      'class' => array('td-label'),
    );

    $rows['total_rejected']['data']['total'] = array(
      'data'  => (int) $processed['rejection_rate']['rejected'],
      'class' => array('td-value', 'total-rejected'),
    );

    $rows['avg_rate'] = array(
      'data'  => array(),
      'class' => array('pipeline', 'avg-rejection-rate'),
    );

    $rows['avg_rate']['data']['label'] = array(
      'data'  => t('Avg. Rejection Rate By Step'),
      'class' => array('td-label'),
    );

    $rows['avg_rate']['data']['rate'] = array(
      'data'  => number_format($processed['rejection_rate']['avg_rate'] * 100, 2) . '%',
      'class' => array('td-value', 'avg-rejection-rate'),
    );
  }

  // ----

  $page['agg_stats'] = array(
    '#theme'      => 'table',
    '#header'     => array(),
    '#rows'       => array(),
    '#caption'    => t('Aggregation Data'),
    '#attributes' => array(
      'class' => array(
        'agg-stats'
      )
    ),
  );

  $agg_stats = &$page['agg_stats']['#rows'];

  $agg_stats['ran'] = array(
    'data' => array(
      'label' => array(
        'data'  => t('Ran'),
        'class' => array('td-label'),
      ),
      'datetime' => array(
        'data'  => format_date(floor($agg['timestamp']), 'custom', 'l, F j, Y - H:i:s T P'),
        'class' => array('td-value'),
      ),
    ),
    'class' => array(
      'agg-start',
    ),
  );

  $agg_stats['duration'] = array(
    'data' => array(
      'label' => array(
        'data'  => t('Total Duration'),
        'class' => array('td-label'),
      ),
      'duration' => array(
        'data'  => $agg['finished'] - $agg['timestamp'] . ' ' . t('seconds'),
        'class' => array('td-value'),
      ),
    ),
    'class' => array(
      'agg-duration',
    ),
  );

  $agg_stats['jobs'] = array(
    'data' => array(
      'label' => array(
        'data'  => t('# of Jobs'),
        'class' => array('td-label'),
      ),
      'count' => array(
        'data'  => count($agg['results']),
        'class' => array('td-value'),
      ),
    ),
    'class' => array(
      'job-count',
    ),
  );

  foreach ($agg['results'] as $job_name => $job_results) {
    $agg_stats[$job_name] = array(
      'data' => array(
        'label' => array(
          'data'    => check_plain($job_name),
          'class'   => array('td-label'),
          'colspan' => 2,
        ),
      ),
      'class' => array(
        'job', 'job-name', drupal_html_class($job_name),
      ),
    );

    $agg_stats[$job_name . '_duration'] = array(
      'data' => array(
        'label' => array(
          'data'  => t('Duration'),
          'class' => array('td-label'),
        ),
        'duration' => array(
          'data'  => $job_results['finished'] - $job_results['timestamp'] . ' ' . t('seconds'),
          'class' => array('td-value'),
        ),
      ),
      'class' => array(
        'job', 'job-duration', drupal_html_class($job_name),
      ),
    );

    if (!empty($job_results['data']['context']['timerange'])) {
      $timerange = &$job_results['data']['context']['timerange'];

      $agg_stats[$job_name . '_time_start'] = array(
        'data' => array(
          'label' => array(
            'data'  => t('Time Range Start'),
            'class' => array('td-label'),
          ),
          'start' => array(
            'data'  => format_date($timerange['start'], 'custom', 'l, F j, Y - H:i:s T P'),
            'class' => array('td-value'),
          ),
        ),
        'class' => array(
          'job', 'timerange', 'range-start', drupal_html_class($job_name),
        ),
      );

      $agg_stats[$job_name . '_time_end'] = array(
        'data' => array(
          'label' => array(
            'data'  => t('Time Range End'),
            'class' => array('td-label'),
          ),
          'end' => array(
            'data'  => format_date($timerange['end'], 'custom', 'l, F j, Y - H:i:s T P'),
            'class' => array('td-value'),
          ),
        ),
        'class' => array(
          'job', 'timerange', 'range-end', drupal_html_class($job_name),
        ),
      );
    }

    if (!empty($job_results['data']['context']['ending_state_ids'])) {
      $agg_stats[$job_name . '_ending_state_ids'] = array(
        'data' => array(
          'label' => array(
            'data'  => t('Ending State IDs'),
            'class' => array('td-label'),
          ),
          'end' => array(
            'data'  => implode(', ', $job_results['data']['context']['ending_state_ids']),
            'class' => array('td-value'),
          ),
        ),
        'class' => array(
          'job', 'ending-state-ids', drupal_html_class($job_name),
        ),
      );
    }
  }
}

function _unfi_sp_metrics_display_transition_avg_job_results(&$page, &$page_state, $processed, $key, $title, $classes = array()) {
  if (isset($processed[$key])) {
    $page[$key] = array(
      '#theme'      => 'table',
      '#header'     => array(),
      '#rows'       => array(),
      '#caption'    => $title,
      '#attributes' => array(
        'class' => array(
          'per-state-durations',
        ) + $classes,
      ),
    );

    $header = &$page[$key]['#header'];
    $rows   = &$page[$key]['#rows'];

    $header['state'] = array(
      'data'  => t('Process Steps'),
      'class' => array('th-label' ),
    );

    $header['adjusted'] = array(
      'data'  => t('Duration'),
      'class' => array('th-value', 'duration-adjusted'),
    );

    $header['percent_adj'] = array(
      'data'  => t('% Total Pipeline<br />Service Time'), // TODO: <br /> in lue of styling
      'class' => array('th-value', 'percent-adjusted'),
    );

    $header['compare_adj'] = array(
      'data'  => t('Step Service Time and<br />Avg. Pipeline Days Comparison'), // TODO: <br /> in lue of styling
      'class' => array('th-value', 'compare-adjusted'),
    );

    $header['requests'] = array(
      'data'  => t('# of<br />Request Transitions<br />(<span class="total-transitions">Total</span> | <span class="unique-count">Unique</span>)'), // TODO: <br /> in lue of styling
      'class' => array('th-value', 'request-count'),
    );

    $header['items'] = array(
      'data'  => t('# of<br />Item Transitions<br />(<span class="total-transitions">Total</span> | <span class="unique-count">Unique</span>)'), // TODO: <br /> in lue of styling
      'class' => array('th-value', 'item-count'),
    );

    foreach ($processed[$key]['states'] as $state_id => $state_data) {
      $rows[$state_id] = array(
        'data'  => array(),
        'class' => array(
          'workflow-state',
          'state-id-' . $state_id,
          drupal_html_class($state_data['label']),
        ),
      );

      $rows[$state_id]['data']['state'] = array(
        'data'  => t('@v', array('@v' => $state_data['label'])),
        'class' => array('td-label'),
      );

      $rows[$state_id]['data']['adjusted'] = array(
        'data'  => format_interval($state_data['adjusted']),
        'class' => array('td-value', 'duration-adjusted'),
      );

      $rows[$state_id]['data']['percent_adj'] = array(
        'data'  => number_format($state_data['percent_adj'] * 100, 2) . '%',
        'class' => array('td-value', 'percent-adjusted'),
      );

      $rows[$state_id]['data']['compare_adj'] = array(
        'data'  => number_format($state_data['compare_adj'] * 100, 2) . '%',
        'class' => array('td-value', 'compare-adjusted'),
      );

      $rows[$state_id]['data']['requests'] = array(
        'data'  => '<span class="total-transitions">' . (int) $state_data['requests_trans'] . '</span> | ' .
          '<span class="unique-count">' . (int) $state_data['requests'] . '</span>',
        'class' => array('td-value', 'request-count', 'unique-count'),
      );

      $rows[$state_id]['data']['items'] = array(
        'data'  => '<span class="total-transitions">' . (int) $state_data['items_trans'] . '</span> | ' .
          '<span class="unique-count">' . (int) $state_data['items'] . '</span>',
        'class' => array('td-value', 'item-count', 'unique-count'),
      );
    }

    $rows['total_avg'] = array(
      'data'  => array(),
      'class' => array('pipeline', 'avg-duration'),
    );

    $rows['total_avg']['data']['label'] = array(
      'data'  => t('Avg. Pipeline Days per Step'),
      'class' => array('td-label'),
    );

    $rows['total_avg']['data']['adjusted'] = array(
      'data'  => format_interval($processed[$key]['adjusted_per']),
      'class' => array('td-value', 'duration-adjusted'),
    );

    $rows['total'] = array(
      'data'  => array(),
      'class' => array('pipeline', 'total-duration'),
    );

    $rows['total']['data']['label'] = array(
      'data'  => t('Total Pipeline Days'),
      'class' => array('td-label'),
    );

    $rows['total']['data']['adjusted'] = array(
      'data'  => format_interval($processed[$key]['adjusted']),
      'class' => array('td-value', 'duration-adjusted'),
    );
  }
}
