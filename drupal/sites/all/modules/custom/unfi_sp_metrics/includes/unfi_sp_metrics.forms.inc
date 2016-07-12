<?php

/**
 * Parent form builder for different reporting options.
 */
function unfi_sp_metrics_form($form, &$form_state, $report, $module = 'unfi_sp_metrics') {
  $report = str_replace('-', '_', $report);
  if (!isset($form_state['build_info']['args'][1])) {
    $form_state['build_info']['args'][1] = $module;
  }

  form_load_include($form_state, 'inc', $module, 'reports/' . $report . '/' . $module . '.forms.' . $report);

  $form['actions'] = array(
    '#type'   => 'actions',
    '#weight' => 1000,
  );

  $form['actions']['submit'] = array(
    '#type'  => 'submit',
    '#value' => t('Submit'),
    '#name'  => 'submit',
  );

  $func   = $module . '___' . $report . '__form';
  if (function_exists($func)) {
    $func($form, $form_state);
  }

  $form_state[$module]['report'] = $report;
  $form_state[$module]['func']   = $func;
  $form_state[$module]['title']  = '';

  return $form;
}

function unfi_sp_metrics_form_validate($form, &$form_state) {
  $module = $form_state['build_info']['args'][1];

  $func = $form_state[$module]['func'] . '_validate';
  if (function_exists($func)) {
    $func($form, $form_state);
  }
}

function unfi_sp_metrics_form_submit($form, &$form_state) {
  $module = $form_state['build_info']['args'][1];
  $report = $form_state[$module]['report'];

  $func = $form_state[$module]['func'] . '_submit';
  if (function_exists($func)) {
    $func($form, $form_state);
  }

  if (!empty($form_state[$module][$report]['jobs'])) {
    $batch = metrics_agg_batch($form_state[$module][$report]);
    batch_set($batch);
  }
  // TODO: error/notice
}

/**
 * Confirmation form for deleting metric reports.
 *
 * @param array $form
 * @param array $form_state
 * @param int $id
 *
 * @return array
 */
function unfi_sp_metrics_delete_form($form, &$form_state, $id) {
  $agg = metrics_agg_get_data($id);

  $question    = t('Delete %l?', array('%l' => $agg['title']));
  $path        = 'metrics/report/' . $agg['id'];
  $description = t('This is permanent and cannot be undone.');
  $yes         = 'Delete Report';
  $no          = 'Cancel';

  $form['metrics_agg'] = array(
    '#type'  => 'value',
    '#value' => $agg['id'],
  );

  $form['details'] = array(
    '#theme'      => 'item_list',
    '#type'       => 'ul',
    '#items'      => array(),
    '#attributes' => array(),
  );

  $form['details']['#items']['timestamp'] = format_date(floor($agg['timestamp']), 'custom', 'l F j, Y g:i:sa T P');
  $form['details']['#items']['module']    = check_plain($agg['module']);
  $form['details']['#items']['type']      = check_plain($agg['type']);

  return confirm_form($form, $question, $path, $description, $yes, $no);
}

function unfi_sp_metrics_delete_form_submit($form, &$form_state) {
  if (!empty($form_state['values']['metrics_agg'])) {
    metrics_agg_delete($form_state['values']['metrics_agg']);
  }
  $form_state['redirect'] = 'metrics';
}
