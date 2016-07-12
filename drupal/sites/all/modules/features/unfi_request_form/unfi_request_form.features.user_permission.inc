<?php
/**
 * @file
 * unfi_request_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_request_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create request_form content'.
  $permissions['create request_form content'] = array(
    'name' => 'create request_form content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any request_form content'.
  $permissions['delete any request_form content'] = array(
    'name' => 'delete any request_form content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own request_form content'.
  $permissions['delete own request_form content'] = array(
    'name' => 'delete own request_form content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any request_form content'.
  $permissions['edit any request_form content'] = array(
    'name' => 'edit any request_form content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own request_form content'.
  $permissions['edit own request_form content'] = array(
    'name' => 'edit own request_form content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
