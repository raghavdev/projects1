<?php

function unfi_sp_metrics_export_file($id, &$file_info, &$context, $force_rebuild = FALSE) {

  $scheme = 'private://';
  if (isset($file_info['scheme'])) {
    $scheme = $file_info['scheme'];
  }
  if (drupal_strlen($scheme) && strpos($scheme, '://') === FALSE) {
    $scheme .= '://';
  }
  $file_info['scheme'] = $scheme;

  $dir_base = 'metrics/';
  if (isset($file_info['dir_base'])) {
    $dir_base = $file_info['dir_base'];
  }
  if (drupal_substr($dir_base, -1, 1) != '/') {
    $dir_base .= '/';
  }
  $file_info['dir_base'] = $dir_base;

  $uri_base = $scheme . $dir_base;
  if (!file_prepare_directory($uri_base, FILE_CREATE_DIRECTORY)) {
    return FALSE;
  }
  if (drupal_substr($uri_base, -1, 1) != '/') {
    $uri_base .= '/';
  }
  $file_info['uri_base'] = $uri_base;

  $filename_prefix = 'metrics_agg-';
  if (isset($file_info['filename_prefix'])) {
    $filename_prefix = $file_info['filename_prefix'];
  }
  $file_info['filename_prefix'] = $filename_prefix;

  $filename_suffix = '';
  if (isset($file_info['filename_suffix'])) {
    $filename_suffix = $file_info['filename_suffix'];
  }
  $file_info['filename_suffix'] = $filename_suffix;

  $format = 'csv';
  if (isset($file_info['format'])) {
    $format = $file_info['format'];
  }
  $file_info['format']      = $format;
  $file_info['format_info'] = unfi_sp_metrics_export_format_info($format);

  // TODO: account for if the filename is not like '%metrics_agg%-{$id}.%'
  //       in unfi_sp_metrics_metrics_agg_delete()
  $filename = $filename_prefix . $id . $filename_suffix . '.' . $format;
  $uri      = $uri_base . $filename;

  $file_info['filename'] = $filename;
  $file_info['uri']      = $uri;

  $query = db_select('file_managed', 'fm');
  $query->fields('fm', array('fid'));
  $query->condition('fm.uri', $uri);

  $file_id = (int) $query->execute()->fetchField();

  if (empty($file_id) || $force_rebuild) {
    $agg = metrics_agg_get_data($id) + array('processed' => array());

    module_load_include('inc', $agg['module'], 'reports/' . $agg['type'] . '/' . $agg['module'] . '.pages.' . $agg['type']);
    module_load_include('inc', $agg['module'], 'reports/' . $agg['type'] . '/' . $agg['module'] . '.exports.' . $agg['type']);

    _unfi_sp_metrics_process_page_data($agg, $context);
    _unfi_sp_metrics_export_file($file_id, $agg, $file_info, $context);
  }

  return $file_id;
}

function _unfi_sp_metrics_export_file(&$file_id, &$agg, &$file_info, &$context) {
  $file_info['file_id'] = $file_id; // Because drupal_alter() only handles three contexts

  $module = $agg['module'];
  $type   = $agg['type'];

  // Delete, if rebuild or missing record in database for some reason
  if (file_exists($file_info['uri'])) {
    unlink($file_info['uri']);
  }

  $func = $module . '__' . $type . '__export__' . $file_info['format'];
  if (function_exists($func)) {
    $func($file_id, $agg, $file_info, $context);
  }

  drupal_alter('unfi_sp_metrics_export_file', $file_info, $agg, $context);

  _unfi_sp_metrics_save_export_file($file_id, $file_info);
}

function _unfi_sp_metrics_save_export_file(&$file_id, $file_info) {
  global $user;

  if (empty($file_info['filename']) || empty($file_info['uri'])) {
    return;
  }

  if (!file_exists($file_info['uri'])) {
    return;
  }

  $file           = new stdClass;
  $file->uid      = $user->uid;
  $file->filename = $file_info['filename'];
  $file->uri      = $file_info['uri'];
  $file->status   = FILE_STATUS_PERMANENT;
  $file->filemime = file_get_mimetype($file_info['uri']);

  if (!empty($file_id)) {
    $file->fid = $file_id;
  }

  $file = file_save($file);

  if ($file->fid) {
    $file_id = $file->fid;
  }
}
