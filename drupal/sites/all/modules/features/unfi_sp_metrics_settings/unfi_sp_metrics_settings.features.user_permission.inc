<?php
/**
 * @file
 * unfi_sp_metrics_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_sp_metrics_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'unfi sp admin metric reports'.
  $permissions['unfi sp admin metric reports'] = array(
    'name' => 'unfi sp admin metric reports',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
      'administrator' => 'administrator',
    ),
    'module' => 'unfi_sp_metrics',
  );

  // Exported permission: 'unfi sp delete metric reports'.
  $permissions['unfi sp delete metric reports'] = array(
    'name' => 'unfi sp delete metric reports',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
      'administrator' => 'administrator',
    ),
    'module' => 'unfi_sp_metrics',
  );

  // Exported permission: 'unfi sp run metric reports'.
  $permissions['unfi sp run metric reports'] = array(
    'name' => 'unfi sp run metric reports',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
      'administrator' => 'administrator',
    ),
    'module' => 'unfi_sp_metrics',
  );

  // Exported permission: 'unfi sp view metric reports'.
  $permissions['unfi sp view metric reports'] = array(
    'name' => 'unfi sp view metric reports',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
      'administrator' => 'administrator',
    ),
    'module' => 'unfi_sp_metrics',
  );

  return $permissions;
}
