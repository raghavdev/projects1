<?php
/**
 * @file
 * unfi_workflow.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function unfi_workflow_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-48a477f08ffde316f6ca1ac672427d9d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '48a477f08ffde316f6ca1ac672427d9d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/*/workflow',
    'roles' => array(),
    'themes' => array(
      'supplier_portal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'supplier_portal',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
