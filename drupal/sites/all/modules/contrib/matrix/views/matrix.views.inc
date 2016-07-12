<?php
// $Id: matrix.views.inc,v 1.1.2.1 2011/01/18 10:10:05 aaron1234nz Exp $

/**
 * @file
 * Views handlers for matrix fields
 */

/**
 * Implementation of hook_field_views_data_alter()
 */
function matrix_field_views_data_alter(&$result, &$field, &$module) {
  if ($module != 'matrix') {
    return;
  }
  $field_name = $field['field_name'];
  
  //These make no sence to have so remove them
  unset($result['field_data_'. $field_name][$field_name .'_row']);
  unset($result['field_data_'. $field_name][$field_name .'_col']);
  unset($result['field_data_'. $field_name][$field_name .'_value']['sort']);
  unset($result['field_revision_'. $field_name][$field_name .'_row']);
  unset($result['field_revision_'. $field_name][$field_name .'_col']);
  unset($result['field_revision_'. $field_name][$field_name .'_value']['sort']);
  
  //alter some handlers to be matrix specific
  $result['field_data_'. $field_name]['entity_id']['field']['handler'] = 'matrix_handler_field_field';
  $result['field_data_'. $field_name][$field_name .'_value']['filter']['handler'] = 'matrix_handler_filter';
  
  $result['field_revision_'. $field_name]['revision_id']['field']['handler'] = 'matrix_handler_field_field';
  $result['field_revision_'. $field_name][$field_name .'_value']['filter']['handler'] = 'matrix_handler_filter';
  //dsm($result);
}

/**
 * Implementation of hook_views_handler()
 */
function matrix_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'matrix') .'/views',
    ),
    'handlers' => array(
      'matrix_handler_field_field' => array(
       'parent' => 'views_handler_field_field',
      ),
      'matrix_handler_filter' => array(
        'parent' => 'views_handler_filter_string',
      ),
    ),
  );
}
