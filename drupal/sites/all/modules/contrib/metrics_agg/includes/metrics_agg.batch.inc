<?php

/*
 * @todo: there are several points that could use hook or alter calls
 */

/**
 * Batch set builder for processing metric aggregations.
 *
 * @param array $metric_info jobs
 *   $job_name => array('calc' => string, 'context' => array)
 *
 * @return array batch info to pass into batch_set()
 */
function metrics_agg_batch($metric_info) {
  $operations = array();
  foreach ($metric_info['jobs'] as $job_name => $job) {
    $job_info = metrics_agg_get_calc_info($job['calc']);
    $job_info += array('job' => $job_name, 'calc' => $job['calc']);
    $operations[] = array(
      METRICS_AGG_BATCH_PROCESSOR, array($job_info, $job['context']),
    );
  }

  return array(
    'metrics_agg'      => TRUE,
    'operations'       => $operations,
    'finished'         => METRICS_AGG_BATCH_FINISHED,
    'title'            => t('Aggregating metrics.'),
    'init_message'     => t('Metrics aggregation starting.'),
    'progress_message' => t('Processed @current out of @total aggregation(s).'),
    'error_message'    => t('Metrics aggregation has encountered an error.'),
    'file'             => drupal_get_path('module', 'metrics_agg') . '/metrics_agg.module',
    'metrics_agg_meta' => array(
      'module' => isset($metric_info['module']) ? $metric_info['module'] : '',
      'type'   => isset($metric_info['type']) ? $metric_info['type'] : '',
      'title'  => isset($metric_info['title']) ? $metric_info['title'] : '',
    ),
  );
}

/**
 * Implements hook_batch_alter().
 * Intended to initialize aggregation data storage.
 */
function metrics_agg_batch_alter(&$batch) {
  $indexes = array();
  foreach ($batch['sets'] as $index => $set) {
    if (!empty($set['metrics_agg'])) {
      $indexes[] = $index;
    }
  }
  foreach ($indexes as $index) {
    $set  = &$batch['sets'][$index];
    $jobs = array();
    foreach ($set['operations'] as $operation) {
      $jobs[] = $operation[1][0]['job'];
    }
    $id = metrics_agg_initialize(array(
      'module' => $set['metrics_agg_meta']['module'],
      'type'   => $set['metrics_agg_meta']['type'],
      'title'  => $set['metrics_agg_meta']['title'],
      'jobs'   => $jobs,
    ));
    if (empty($id)) {
      continue;
    }
    $set['metrics_agg'] = $id;
    foreach ($set['operations'] as &$operation) {
      $operation[1][0]['metrics_agg'] = $id; // Magic numbers: 1 = op args, 0 = $info
      // TODO: better way than magic numbers...
    }
  }
}

/**
 * Wrapping batch operation processor that call an aggregation job's calculation functions.
 * Sets up sandbox variables and determines processed percentage.
 *
 * @param array $job_info aggregation job info of calculation functions
 * @param array $job_context of the aggregation's scope
 * @param array $batch context (sandbox, batch results, and finished)
 */
function metrics_agg_batch_processor($job_info, $job_context, &$batch_context, $batch_type = 'batch') {
  if (!empty($job_info['includes'])) {
    foreach ($job_info['includes'] as $include) {
      if (!array_key_exists('name', $include)) {
        $include['name'] = NULL;
      }
      module_load_include($include['type'], $include['module'], $include['name']);
    }
  }

  if (!isset($batch_context['results']['metrics_agg'])) {
    $batch_context['results']['metrics_agg'] = $job_info['metrics_agg'];
  }

  if (!isset($batch_context['sandbox']['progress'])) {
    metrics_agg_job_set_timestamp($job_info['metrics_agg'], $job_info['job']);

    $batch_context['sandbox']['total']    = 0;
    $batch_context['sandbox']['progress'] = 0;
    $batch_context['sandbox']['limit']    = 10;

    if (!empty($job_info['total callback']) && function_exists($job_info['total callback'])) {
      $batch_context['sandbox']['total'] = (int) $job_info['total callback']($job_context, $batch_context, $batch_type);
    }

    if (!empty($job_info['limit'])) {
      $batch_context['sandbox']['limit'] = (int) $job_info['limit'];
    }
    if (!empty($job_context['limit'])) {
      $batch_context['sandbox']['limit'] = (int) $job_context['limit'];
    }
  }
  $sandbox = &$batch_context['sandbox'];

  $results = metrics_agg_job_results($job_info['metrics_agg'], $job_info['job']);

  if (!isset($results['data']['context'])) {
    $results['data']['context'] = $job_context;
  }

  if (
    !empty($job_info['worker callback'])
    && function_exists($job_info['worker callback'])
  ) {
    $job_info['worker callback']($results, $job_info, $job_context, $batch_context, $batch_type);
  }

  metrics_agg_job_store_results($job_info['metrics_agg'], $job_info['job'], $results);

  if (empty($sandbox['total'])) {
    $batch_context['finished'] = 1;
  }
  else {
    $batch_context['finished'] = $sandbox['progress'] / $sandbox['total'];
  }

  if ($batch_context['finished'] >= 1) {
    metrics_agg_job_set_timestamp($job_info['metrics_agg'], $job_info['job'], TRUE); // TRUE to set finished time
  }
}

/**
 * Wrapping batch set finishing function.
 *
 * @param bool $success
 * @param array $results keyed with aggregation identifier and other finishing functions
 * @param array $operations leftover operations in case of error
 */
function metrics_agg_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Metrics aggregation finished.'));
    $id = $results['metrics_agg'];
    unset($results['metrics_agg']);
    metrics_agg_set_timestamp($id, TRUE);
    foreach (array_keys($results) as $operation_finished_func) {
      if (function_exists($operation_finished_func)) {
        $operation_finished_func($success, $results, $operations);
      }
    }
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %e with arguments: @a', array(
      '%e' => $error_operation[0],
      '@a' => print_r($error_operation[1], TRUE),
    ));
    drupal_set_message($message, 'error');
  }
}
