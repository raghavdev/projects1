<?php

function metrics_agg_background_process($info) {
  if (!module_exists('background_process')) {
    drupal_set_message(t('Background Process is not installed.'), 'error');
    return;
  }
  // Build and mock batch set info
  $batch      = metrics_agg_batch($info);
  $mock_batch = array('sets' => array(&$batch));
  metrics_agg_batch_alter($mock_batch);
  // todo: handle multiple batch sets
  $handle = background_process_start('_metrics_agg_background_process_run', $batch);
}

function _metrics_agg_background_process_run($batch_set, $batch_context = array()) {
  // INITIALIZE
  if (!isset($batch_set['running_ops'])) {
    $batch_set['running_ops']  = $batch_set['operations'];
    $batch_set['finished_set'] = FALSE;
  }
  if (empty($batch_context)) {
    $batch_context = array(
      'sandbox'  => array(),
      'results'  => array(),
      'finished' => 1,
      'message'  => '',
    );
  }

  if (!empty($batch_set['running_ops'])) {
    // running_ops = array( array( $function, $args ), ... )
    list($function, $args) = reset($batch_set['running_ops']);

    try {
      // Call batch processor function
      // metrics_agg_batch_processor($args[0], $args[1], $batch_context, $batch_type);
      call_user_func_array($function, array_merge($args, array(
        &$batch_context, // Pass-by-reference workaround
        'background_process'
      )));
    } catch (ErrorException $e) {
      // Log
      watchdog_exception('metrics_agg', $e, 'Metrics aggregation failed.');
      // Fail gracefully by wrapping up properly
      $batch_context['finished'] = 1;
      $batch_set['exception']    = TRUE;
    }

    // If an operation finished without error
    if ($batch_context['finished'] >= 1 && empty($batch_set['exception'])) {
      // Remove operation
      array_shift($batch_set['running_ops']);
      // Clear sandbox
      $batch_context['sandbox'] = array();
    }
  }

  // No more operations to run or an error occurred
  $batch_set['finished_set'] = empty($batch_set['running_ops']) || !empty($batch_set['exception']);
  if ($batch_set['finished_set']) {
    // Call batch finished function
    // metrics_agg_batch_finished($success, $results, $operations);
    call_user_func($batch_set['finished'], empty($batch_set['exception']), $batch_context['results'], $batch_set['running_ops']);
  }

  // Determine progress
  $finished_count = count($batch_set['operations']) - count($batch_set['running_ops']);
  $finished_prog  = $finished_count;
  // If a operation was finished, it would be accounted for in the count
  if ($batch_context['finished'] < 1) {
    $finished_prog += $batch_context['finished'];
  }
  $progress = $finished_prog / count($batch_set['operations']);
  // Build a message
  $message = t('_metrics_agg_background_process_run: Finished @c out @t operations', array(
    '@c' => $finished_count,
    '@t' => count($batch_set['operations'])
  ));
  if (!empty($batch_context['message'])) {
    $message .= '<br />' . $batch_context['message'];
  }
  // Save the progress
  progress_set_progress(background_process_current_handle(), $message, $progress);

  // Restart to provide a continuous process
  if (empty($batch_set['finished_set'])) {
    background_process_restart($batch_set, $batch_context);
    // TODO: this seems to be significantly slower than native batch via form API
    //       maybe this needs to handle more chunks per-timeout/per-memory/per-callstack limit?
  }
}
