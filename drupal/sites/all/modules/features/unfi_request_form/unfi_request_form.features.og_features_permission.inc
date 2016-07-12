<?php
/**
 * @file
 * unfi_request_form.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function unfi_request_form_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:create request_form content'
  $permissions['node:supplier:create request_form content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:supplier:delete any request_form content'
  $permissions['node:supplier:delete any request_form content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:delete own request_form content'
  $permissions['node:supplier:delete own request_form content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update any request_form content'
  $permissions['node:supplier:update any request_form content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update own request_form content'
  $permissions['node:supplier:update own request_form content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
