<?php

function unfi_sp_metrics__new_item_requests__build_report_context(&$report_context, $job_context) {

  $title = &$report_context['title'];
  $jobs  = &$report_context['jobs'];

  $title = 'New Item Request Metrics Report: ';

  $jobs['unfi_sp_metrics_nir_simple_total_current'] = array(
    'calc'    => 'unfi_sp_metrics_nir_simple_total',
    'context' => $job_context,
  );

  $jobs['unfi_sp_metrics_nir_transition_avg_current'] = array(
    'calc'    => 'unfi_sp_metrics_nir_transition_avg',
    'context' => $job_context,
  );

  $jobs['unfi_sp_metrics_nir_transition_avg_current_archived'] = array(
    'calc'    => 'unfi_sp_metrics_nir_transition_avg',
    'context' => $job_context + array(
        'ending_state_ids' => array(7), // Magic number: Archived workflow state
      ),
  );

  $jobs['unfi_sp_metrics_nir_transition_avg_current_rejected'] = array(
    'calc'    => 'unfi_sp_metrics_nir_transition_avg',
    'context' => $job_context + array(
        'ending_state_ids' => array(33), // Magic number: Rejected workflow state
      ),
  );

  $jobs['unfi_sp_metrics_nir_rejection_rate_current'] = array(
    'calc'    => 'unfi_sp_metrics_nir_rejection_rate',
    'context' => $job_context,
  );

  if (!empty($job_context['timerange']['type'])) {
    switch ($job_context['timerange']['type']) {
      case 'year':
        $title .= 'Year of ' . format_date($job_context['timerange']['start'], 'custom', 'Y');
        break;
      case 'month':
        $title .= format_date($job_context['timerange']['start'], 'custom', 'F Y');
        break;
      case 'day':
        $start_date = format_date($job_context['timerange']['start'], 'custom', 'F j, Y');
        $end_date   = format_date($job_context['timerange']['end'], 'custom', 'F j, Y');
        $title .= $start_date;
        if ($start_date != $end_date) {
          $title .= ' - ' . $end_date;
        }
        break;
    }

    $temp_context = $job_context;
    $temp_context['timerange']['strict'] = 2;
    $jobs['unfi_sp_metrics_nir_transition_avg_current_lax'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context,
    );

    $jobs['unfi_sp_metrics_nir_transition_avg_current_archived_lax'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context + array(
          'ending_state_ids' => array(7), // Magic number: Archived workflow state
        ),
    );

    $jobs['unfi_sp_metrics_nir_transition_avg_current_rejected_lax'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context + array(
          'ending_state_ids' => array(33), // Magic number: Rejected workflow state
        ),
    );

    $temp_context['timerange']['strict'] = 1;
    $jobs['unfi_sp_metrics_nir_transition_avg_current_strict'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context,
    );

    $jobs['unfi_sp_metrics_nir_transition_avg_current_archived_strict'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context + array(
          'ending_state_ids' => array(7), // Magic number: Archived workflow state
        ),
    );

    $jobs['unfi_sp_metrics_nir_transition_avg_current_rejected_strict'] = array(
      'calc'    => 'unfi_sp_metrics_nir_transition_avg',
      'context' => $temp_context + array(
          'ending_state_ids' => array(33), // Magic number: Rejected workflow state
        ),
    );

    // Previous range

    $start_date = new DateTime();
    $start_date->setTimestamp($job_context['timerange']['start']);

    switch ($job_context['timerange']['type']) {
      case 'year':
        $end_date = clone $start_date;
        $end_date->modify('-1 seconds');
        $start_date->modify('-1 years');
        break;
      case 'month':
        $end_date = clone $start_date;
        $end_date->modify('-1 seconds');
        $start_date->modify('-1 months');
        break;
      case 'day':
        $end_date   = clone $start_date;
        $end_date->setTimestamp($job_context['timerange']['end']);

        $date_period = new DatePeriod($start_date, new DateInterval('P1D'), $end_date);
        $days = 0;
        foreach ($date_period as $temp_date) {
          $days++;
        }

        $end_date = clone $start_date;
        $end_date->modify('-1 seconds');
        $start_date->modify('-' . $days . 'days');
        break;
    }

    $previous_context = $job_context;

    $previous_context['timerange']['start'] = $start_date->getTimestamp();
    $previous_context['timerange']['end']   = $end_date->getTimestamp();

    $jobs['unfi_sp_metrics_nir_simple_total_previous'] = array(
      'calc'    => 'unfi_sp_metrics_nir_simple_total',
      'context' => $previous_context,
    );
  }
  else {
    $title .= 'Overview';
  }
}
