<?php

function unfi_sp_metrics__new_item_requests__export__csv(&$file_id, &$agg, &$file_info, &$context) {
  _unfi_sp_metrics__new_item_requests__export__csv($file_id, $agg, $file_info, $context);
}

function unfi_sp_metrics__new_item_requests__export__tsv(&$file_id, &$agg, &$file_info, &$context) {
  _unfi_sp_metrics__new_item_requests__export__csv($file_id, $agg, $file_info, $context);
}

function unfi_sp_metrics__new_item_requests__export__xls(&$file_id, &$agg, &$file_info, &$context) {
  _unfi_sp_metrics__new_item_requests__export__xls($file_id, $agg, $file_info, $context);
}

function unfi_sp_metrics__new_item_requests__export__xlsx(&$file_id, &$agg, &$file_info, &$context) {
  _unfi_sp_metrics__new_item_requests__export__xls($file_id, $agg, $file_info, $context);
}

function _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines(&$agg, &$file_info, &$context) {
  $processed = &$agg['processed'];

  $timerange = FALSE;
  if (!empty($agg['results']['unfi_sp_metrics_nir_simple_total_current']['data']['context']['timerange'])) {
    $timerange = $agg['results']['unfi_sp_metrics_nir_simple_total_current']['data']['context']['timerange'];
  }

  $context['spreadsheets']['map']['new_item_requests'] = array(
    '#blank_count' => 0,
  );

  $lines       = array();
  $map         = &$context['spreadsheets']['map']['new_item_requests'];
  $blank_count = &$map['#blank_count'];

  $line = array(t('Date Range: '));
  if ($timerange) {
    switch ($timerange['type']) {
      case 'year':
        $line[0] .= 'Year of ' . format_date($timerange['start'], 'custom', 'Y');
        break;
      case 'month':
        $line[0] .= format_date($timerange['start'], 'custom', 'F Y');
        break;
      case 'day':
        $line[0] .= format_date($timerange['start'], 'custom', 'F j, Y');
        if (date('Y-m-d', $timerange['start']) != date('Y-m-d', $timerange['end'])) {
          $line[0] .= ' - ';
          $line[0] .= format_date($timerange['end'], 'custom', 'F j, Y');
        }
        break;
    }
  }
  else {
    $line[0] .= t('None, Whole System Overview');
  }
  $lines[] = $line;

  $map[] = array(
    'key' => 'timerange',
    array('key' => 'label'),
  );

  $lines[] = array();
  $lines[] = array(t('Overview'));
  $lines[] = array(
    '',
    t('Net New Pipeline Additions'),
    t('Total Items In Pipeline'),
    t('Total Items Setup'),
    t('Item Setup Rate'),
  );

  $map[] = array(
    'key' => 'blank-' . ++$blank_count,
  );
  $map[] = array(
    'key' => 'totals',
    array('key' => 'label'),
  );
  $map[] = array(
    'key' => 'totals-header',
    array('key' => 'label'),
    array('key' => 'new'),
    array('key' => 'total'),
    array('key' => 'archived'),
    array('key' => 'archive_rate'),
  );

  $lines[] = array(
    t('Current'),
    $processed['new']['current'],
    $processed['total']['current'],
    $processed['archived']['current'],
    ($processed['archived']['rate'] * 100) . '%',
  );
  $map[]   = array(
    'key' => 'totals-current',
    array('key' => 'label'),
    array('key' => 'new'),
    array('key' => 'total'),
    array('key' => 'archived'),
    array('key' => 'archive_rate'),
  );

  $lines[] = array(
    t('Previous'),
    $processed['new']['previous'],
    $processed['total']['previous'],
    $processed['archived']['previous'],
    ($processed['archived']['rate_previous'] * 100) . '%',
  );
  $map[]   = array(
    'key' => 'totals-previous',
    array('key' => 'label'),
    array('key' => 'new'),
    array('key' => 'total'),
    array('key' => 'archived'),
    array('key' => 'archive_rate'),
  );

  $lines[] = array(
    t('Delta'),
    $processed['new']['delta'],
    $processed['total']['delta'],
    $processed['archived']['delta'],
    ($processed['archived']['rate_delta'] * 100) . '%',
  );
  $map[]   = array(
    'key' => 'totals-delta',
    array('key' => 'label'),
    array('key' => 'new'),
    array('key' => 'total'),
    array('key' => 'archived'),
    array('key' => 'archive_rate'),
  );

  $lines[] = array(
    t('Change'),
    ($processed['new']['percent'] * 100) . '%',
    ($processed['total']['percent'] * 100) . '%',
    ($processed['archived']['percent'] * 100) . '%',
    ($processed['archived']['rate_percent'] * 100) . '%',
  );
  $map[]   = array(
    'key' => 'totals-change',
    array('key' => 'label'),
    array('key' => 'new'),
    array('key' => 'total'),
    array('key' => 'archived'),
    array('key' => 'archive_rate'),
  );

  // ----

  if (isset($processed['state_totals'])) {
    $lines[] = array();
    $lines[] = array(t('New Item Pipeline'));

    $map[] = array(
      'key' => 'blank-' . ++$blank_count,
    );
    $map[] = array(
      'key' => 'state_totals',
      array('key' => 'label'),
    );

    $lines[] = array(
      t('Process'),
      t('Number of Items'),
      t('% Total Pipeline Items'),
      t('% Change'),
      t('Previous Number of Items'),
      t('Delta'),
    );
    $map[]   = array(
      'key' => 'state_totals-header',
      array('key' => 'label'),
      array('key' => 'current'),
      array('key' => 'percent'),
      array('key' => 'change'),
      array('key' => 'previous'),
      array('key' => 'delta'),
    );

    foreach ($processed['state_totals'] as $state_id => $state_data) {
      if ($state_data['change'] === FALSE) {
        $temp_change = t('-> infinity%');
      }
      else {
        $temp_change = ($state_data['change'] * 100) . '%';
      }

      $line = array(
        $state_data['label'],
        $state_data['current'],
        ($state_data['percent'] * 100) . '%',
        $temp_change,
        $state_data['previous'],
        $state_data['delta'],
      );

      $lines[] = $line;

      $map[] = array(
        'key' => 'state_totals-state-' . $state_id,
        array('key' => 'label'),
        array('key' => 'current'),
        array('key' => 'percent'),
        array('key' => 'change'),
        array('key' => 'previous'),
        array('key' => 'delta'),
      );
    }
  }

  // ----

  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs', t('Avg. Service Time per Step of Items in Pipeline'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_archived', t('Avg. Service Time per Step of Items Setup'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_rejected', t('Avg. Service Time per Step of Items Rejected'));

  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_lax', t('Avg. Service Time per Step of Items in Pipeline (lax)'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_archived_lax', t('Avg. Service Time per Step of Items Setup (lax)'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_rejected_lax', t('Avg. Service Time per Step of Items Rejected (lax)'));

  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_strict', t('Avg. Service Time per Step of Items in Pipeline (strict)'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_archived_strict', t('Avg. Service Time per Step of Items Setup (strict)'));
  _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results($lines, $context, $processed, 'state_avgs_rejected_strict', t('Avg. Service Time per Step of Items Rejected (strict)'));

  // ----

  if (isset($processed['rejection_rate'])) {
    $lines[] = array();
    $lines[] = array(t('Avg. Item Rejection Rate Per Step'));

    $map[] = array(
      'key' => 'blank-' . ++$blank_count,
    );
    $map[] = array(
      'key' => 'rejection_rate',
      array('key' => 'label'),
    );

    $lines[] = array(
      t('Process Steps'),
      t('Rejected Items'),
      t('% Total of Rejected Items'),
      t('% Total Pipeline Items'),
    );
    $map[]   = array(
      'key' => 'rejection_rate-header',
      array('key' => 'label'),
      array('key' => 'rejected'),
      array('key' => 'percent'),
      array('key' => 'percent_total'),
    );

    foreach ($processed['rejection_rate']['states'] as $state_id => $state_data) {
      $line    = array(
        $state_data['label'],
        $state_data['items'],
        ($state_data['percent'] * 100) . '%',
        ($state_data['percent_total'] * 100) . '%',
      );
      $lines[] = $line;
      $map[]   = array(
        'key' => 'rejection_rate-state-' . $state_id,
        array('key' => 'label'),
        array('key' => 'rejected'),
        array('key' => 'percent'),
        array('key' => 'percent_total'),
      );
    }

    $lines[] = array(
      t('Total Rejected Items'),
      $processed['rejection_rate']['rejected'],
    );
    $map[]   = array(
      'key' => 'rejection_rate-total_rejected',
      array('key' => 'label'),
      array('key' => 'total'),
    );

    $lines[] = array(
      t('Avg. Rejection Rate By Step'),
      ($processed['rejection_rate']['avg_rate'] * 100) . '%',
    );
    $map[]   = array(
      'key' => 'rejection_rate-avg_rate',
      array('key' => 'label'),
      array('key' => 'rate'),
    );
  }

  // ----

  $lines[] = array();
  $lines[] = array('---- ' . t('Aggregation Data') . ' ----');

  $map[] = array(
    'key' => 'blank-' . ++$blank_count,
  );
  $map[] = array(
    'key' => 'agg_stats',
    array('key' => 'label'),
  );

  $lines[] = array(
    t('Ran'),
    format_date(floor($agg['timestamp']), 'custom', 'l, F j, Y - H:i:s T P'),
  );
  $map[]   = array(
    'key' => 'agg_stats-ran',
    array('key' => 'label'),
    array('key' => 'datetime'),
  );

  $lines[] = array(
    t('Total Duration'),
    $agg['finished'] - $agg['timestamp'] . ' ' . t('seconds'),
  );
  $map[]   = array(
    'key' => 'agg_stats-duration',
    array('key' => 'label'),
    array('key' => 'duration'),
  );

  $lines[] = array(
    t('# of Jobs'),
    count($agg['results']),
  );
  $map[]   = array(
    'key' => 'agg_stats-jobs',
    array('key' => 'label'),
    array('key' => 'count'),
  );

  foreach ($agg['results'] as $job_name => $job_results) {
    $lines[] = array(
      check_plain($job_name),
    );
    $map[]   = array(
      'key' => 'agg_stats-job-' . $job_name,
      array('key' => 'label'),
    );

    $lines[] = array(
      t('Duration'),
      $job_results['finished'] - $job_results['timestamp'] . ' ' . t('seconds'),
    );
    $map[]   = array(
      'key' => 'agg_stats-job-' . $job_name . '-duration',
      array('key' => 'label'),
      array('key' => 'duration'),
    );

    if (!empty($job_results['data']['context']['timerange'])) {
      $timerange = &$job_results['data']['context']['timerange'];

      $lines[] = array(
        t('Time Range Start'),
        format_date($timerange['start'], 'custom', 'l, F j, Y - H:i:s T P'),
      );
      $map[]   = array(
        'key' => 'agg_stats-job-' . $job_name . '-timerange-start',
        array('key' => 'label'),
        array('key' => 'timerange-start'),
      );

      $lines[] = array(
        t('Time Range End'),
        format_date($timerange['end'], 'custom', 'l, F j, Y - H:i:s T P'),
      );
      $map[]   = array(
        'key' => 'agg_stats-job-' . $job_name . '-timerange-end',
        array('key' => 'label'),
        array('key' => 'timerange-end'),
      );
    }

    if (!empty($job_results['data']['context']['ending_state_ids'])) {
      $lines[] = array(
        t('Ending State IDs'),
        implode(', ', $job_results['data']['context']['ending_state_ids']),
      );
      $map[]   = array(
        'key' => 'agg_stats-job-' . $job_name . '-ending_state_ids',
        array('key' => 'label'),
        array('key' => 'state_ids'),
      );
    }
  }

  // ----

  return $lines;
}

function _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines_transition_avg_job_results(&$lines, &$context, &$processed, $key, $title) {
  if (isset($processed[$key])) {
    $map         = &$context['spreadsheets']['map']['new_item_requests'];
    $blank_count = &$map['#blank_count'];

    $lines[] = array();
    $lines[] = array($title);

    $map[] = array(
      'key' => 'blank-' . ++$blank_count,
    );
    $map[] = array(
      'key' => $key,
      array('key' => 'label'),
    );

    $lines[] = array(
      t('Process Steps'),
      t('Duration'),
      t('% Total Pipeline Service Time'),
      t('Step Service Time and Avg. Pipeline Days Comparison'),
      t('Total # of Request Transitions'),
      t('Unique # of Request Transitions'),
      t('Total # of Item Transitions'),
      t('Unique # of Item Transitions'),
      t('Duration In Seconds'),
      t('Duration (raw)'),
      t('Duration In Seconds (raw)'),
      t('% Total Pipeline Service Time (raw)'),
      t('Step Service Time and Avg. Pipeline Days Comparison (raw)'),
    );
    $map[]   = array(
      'key' => $key . '-header',
      array('key' => 'label'),
      array('key' => 'adjusted-interval'),
      array('key' => 'percent_adj'),
      array('key' => 'compare_adj'),
      array('key' => 'requests_trans'),
      array('key' => 'requests'),
      array('key' => 'items_trans'),
      array('key' => 'items'),
      array('key' => 'adjusted'),
      array('key' => 'duration-interval'),
      array('key' => 'duration'),
      array('key' => 'percent'),
      array('key' => 'compare'),
    );

    foreach ($processed[$key]['states'] as $state_id => $state_data) {
      $line    = array(
        $state_data['label'],
        format_interval($state_data['adjusted'], 7),
        ($state_data['percent_adj'] * 100) . '%',
        ($state_data['compare_adj'] * 100) . '%',
        $state_data['requests_trans'],
        $state_data['requests'],
        $state_data['items_trans'],
        $state_data['items'],
        $state_data['adjusted'],
        format_interval($state_data['duration'], 7),
        $state_data['duration'],
        ($state_data['percent'] * 100) . '%',
        ($state_data['compare'] * 100) . '%',
      );
      $lines[] = $line;
      $map[]   = array(
        'key' => $key . '-state-' . $state_id,
        array('key' => 'label'),
        array('key' => 'adjusted-interval'),
        array('key' => 'percent_adj'),
        array('key' => 'compare_adj'),
        array('key' => 'requests_trans'),
        array('key' => 'requests'),
        array('key' => 'items_trans'),
        array('key' => 'items'),
        array('key' => 'adjusted'),
        array('key' => 'duration-interval'),
        array('key' => 'duration'),
        array('key' => 'percent'),
        array('key' => 'compare'),
      );
    }

    $lines[] = array(
      '',
      t('Duration'),
      t('Duration In Seconds'),
      t('Duration (raw)'),
      t('Duration In Seconds (raw)'),
    );
    $map[]   = array(
      'key' => $key . '-totals',
      array('key' => 'label'),
      array('key' => 'adjusted-interval'),
      array('key' => 'adjusted'),
      array('key' => 'duration'),
      array('key' => 'duration-interval'),
    );

    $lines[] = array(
      t('Avg. Pipeline Days per Step'),
      format_interval($processed[$key]['adjusted_per'], 7),
      $processed[$key]['adjusted_per'],
      format_interval($processed[$key]['duration_per'], 7),
      $processed[$key]['duration_per'],
    );
    $map[]   = array(
      'key' => $key . '-totals-avg',
      array('key' => 'label'),
      array('key' => 'adjusted-interval'),
      array('key' => 'adjusted'),
      array('key' => 'duration'),
      array('key' => 'duration-interval'),
    );

    $lines[] = array(
      t('Total Pipeline Days'),
      format_interval($processed[$key]['adjusted'], 7),
      $processed[$key]['adjusted'],
      format_interval($processed[$key]['duration'], 7),
      $processed[$key]['duration'],
    );
    $map[]   = array(
      'key' => $key . '-totals-total',
      array('key' => 'label'),
      array('key' => 'adjusted-interval'),
      array('key' => 'adjusted'),
      array('key' => 'duration'),
      array('key' => 'duration-interval'),
    );
  }
}

/*
 * ---- CSV ----
 */

function _unfi_sp_metrics__new_item_requests__export__csv(&$file_id, &$agg, &$file_info, &$context) {
  $lines = _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines($agg, $file_info, $context);
  if (!empty($lines)) {
    $handle = fopen($file_info['uri'], 'w');
    foreach ($lines as $line) {
      fputcsv($handle, $line, $file_info['format_info']['separator']);
    }
    fclose($handle);
  }
}

/*
 * ---- EXCEL ----
 */

function _unfi_sp_metrics__new_item_requests__export__xls(&$file_id, &$agg, &$file_info, &$context) {
  $lines = _unfi_sp_metrics_build_new_item_requests_spreadsheet_lines($agg, $file_info, $context);
  if (!empty($lines)) {
    module_load_include('inc', 'phpexcel');
    $sheet_name = t('New Item Request Metrics');
    $header     = array($sheet_name => array_shift($lines));
    $sheets     = array($sheet_name => $lines);
    $options    = array(
      'format'         => $file_info['format'],
      'unfi_sp_metric' => array(
        'spreadsheets' => $context['spreadsheets'],
      ),
    );
    phpexcel_export($header, $sheets, drupal_realpath($file_info['uri']), $options);
  }
}
