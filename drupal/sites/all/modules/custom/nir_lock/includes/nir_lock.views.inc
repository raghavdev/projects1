<?php
// Taken from content_lock with thanks to ergonlogic, ohnobinki, EugenMayer, et al.

/**
 * @file
 * This file handles views api definitions.
 * We describe the table to Views module
 * as well as other necessary stuff to integrate
 */

/**
 * Implementation of hook_views_data()
 */
function nir_lock_views_data(){
  $data = array();

  // Our group in Views UI
  $data['nir_lock']['table']['group'] = t('New Item Request Lock');

  // Our join type. Only with node table
  $data['nir_lock']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // Relationship. This might be useful
  $data['nir_lock']['nid'] = array(
    'title' => t('Node locked'),
    'help' => t('The node being locked'),
    'relationship' => array(
      'label' => t('Node locked'),
      'base' => 'node',
      'base field' => 'nid',
      'skip base' => array('node'),
    ),
  );

  // Our Handlers:
  $data['nir_lock']['timestamp'] = array(
    'title' => t('Is Locked'),
    'help' => t('Whether the node is currently locked'),
    'field' => array(
      'handler' => 'views_handler_field_nir_is_locked',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_nir_is_locked',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_nir_is_locked',
      'click sortable' => TRUE,
    ),
  );
  $data ['nir_lock']['uid'] = array(
    'title' => t('Locked by'),
    'help' => t('User currently editing node'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'field' => 'uid',
    ),
  );

  return $data;
}

/**
 * Implementation of hook_views_handlers()
 */
function nir_lock_views_handlers(){
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'nir_lock') . '/views',
    ),
    'handlers' => array(
      'views_handler_field_nir_is_locked' => array(
        'parent' => 'views_handler_field_boolean',
      ),
      'views_handler_sort_nir_is_locked' => array(
        'parent' => 'views_handler_sort',
      ),
      'views_handler_filter_nir_is_locked' => array(
        'parent' => 'views_handler_filter_boolean_operator',
      ),
    ),
  );
}
