<?php
/**
 * @file
 * smtp_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smtp_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'smtp',
  );

  return $permissions;
}
