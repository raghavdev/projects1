<?php
/**
 * @file
 * unfi_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer unfi dashboard'.
  $permissions['administer unfi dashboard'] = array(
    'name' => 'administer unfi dashboard',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'unfi_dashboard',
  );

  // Exported permission: 'flag lock_request'.
  $permissions['flag lock_request'] = array(
    'name' => 'flag lock_request',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag lock_request'.
  $permissions['unflag lock_request'] = array(
    'name' => 'unflag lock_request',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
