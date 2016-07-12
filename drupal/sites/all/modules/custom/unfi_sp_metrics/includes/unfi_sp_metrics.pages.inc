<?php

function unfi_sp_metrics_page($id) {
  $page       = array();
  $page_state = array();
  $agg        = metrics_agg_get_data($id) + array('processed' => array());

  module_load_include('inc', $agg['module'], 'reports/' . $agg['type'] . '/' . $agg['module'] . '.pages.' . $agg['type']);

  _unfi_sp_metrics_process_page_data($agg, $page_state);
  _unfi_sp_metrics_build_page($page, $page_state, $agg);

  return $page;
}

function _unfi_sp_metrics_process_page_data(&$agg, &$page_state) {
  $module = $agg['module'];
  $type   = $agg['type'];

  $func = $module . '__' . $type . '__process_page_data';
  if (function_exists($func)) {
    $func($agg, $page_state);
  }

  drupal_alter('unfi_sp_metrics_process_page_data', $agg, $page_state);
}

function _unfi_sp_metrics_build_page(&$page, &$page_state, &$agg) {
  $module = $agg['module'];
  $type   = $agg['type'];

  $func = $module . '__' . $type . '__build_page';
  if (function_exists($func)) {
    $func($page, $page_state, $agg);
  }

  drupal_alter('unfi_sp_metrics_build_page', $page, $page_state, $agg);
}

function unfi_sp_metrics_overview_page() {
  $page = array();

  $delete_access = user_access('unfi sp delete metric reports');

  $page['pager_top'] = array('#theme' => 'pager');

  // TODO: this is temporary...
  $page['table'] = array(
    '#theme'      => 'table',
    '#header'     => array(),
    '#rows'       => array(),
    '#attributes' => array(),
    '#empty'      => t('No metric reports are available.')
  );

  $page['table']['#header']['link'] = array(
    'data' => t('Report'),
  );
  $page['table']['#header']['timestamp'] = array(
    'data' => t('Time'),
  );
/*
**  We dont require this column(header) on report 
	
  $page['table']['#header']['module'] = array(
    'data' => t('Module'),
  );
  */
  $page['table']['#header']['type'] = array(
    'data' => t('Type'),
  );

  if ($delete_access) {
    $page['table']['#header']['delete'] = array(
      'data' => t('Delete'),
    );
  }

  $query = db_select('metrics_aggregation', 'ma');
  $query->fields('ma', array('id', 'timestamp', 'module', 'type', 'title'));
  $query->orderBy('ma.timestamp', 'DESC');

  $result = $query->extend('PagerDefault')->limit(30)->execute();

  while (($row = $result->fetchAssoc())) {
    $page['table']['#rows'][$row['id']] = array(
      'link' => array(
        'data' => l(
          $row['title'],
          'metrics/report/' . $row['id']
        ),
      ),
      'timestamp' => array(
        'data' => format_date(floor($row['timestamp']), 'custom', 'l F j, Y g:i:sa T P'),
      ),
/*
*    Module column data not required in report
*
      'module' => array(
        'data' => check_plain($row['module']),
      ),
*/
      'type' => array(
        'data' => check_plain($row['type']),
      ),
    );

    if ($delete_access) {
      $page['table']['#rows'][$row['id']]['delete'] = array(
        'data' => l(t('delete'), 'metrics/report/' . $row['id'] . '/delete'),
      );
    }
  }

  $page['pager_bottom'] = array('#theme' => 'pager');

  return $page;
}

function unfi_sp_metrics_export_page($id, $format = NULL) {
  module_load_include('inc', 'unfi_sp_metrics', 'includes/unfi_sp_metrics.exports');

  $page       = array();
  $page_state = array();

  if (empty($format)) {
    $formats = unfi_sp_metrics_available_export_formats();

    $page['links'] = array(
      '#theme'      => 'links',
      '#links'      => array(),
      '#attributes' => array(),
    );

    foreach ($formats as $format => $format_info) {
      $page['links']['#links'][] = array(
        'title' => $format_info['label'],
        'href'  => 'metrics/report/' . $id . '/export/' . $format,
      );
    }

    return $page;
  }

  $file_info = array(
    'format' => $format,
  );

  $file_id = unfi_sp_metrics_export_file($id, $file_info, $page_state);

  if ($file_id) {
    download_file_direct_download($file_id);
    drupal_exit();
  }

  drupal_set_message(t('Error generating file for download.'), 'error');
  drupal_goto('metrics/report/' . $id . '/export');
}
