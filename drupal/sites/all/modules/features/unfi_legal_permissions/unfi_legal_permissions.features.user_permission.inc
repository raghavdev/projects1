<?php
/**
 * @file
 * unfi_legal_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_legal_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer Terms and Conditions'.
  $permissions['administer Terms and Conditions'] = array(
    'name' => 'administer Terms and Conditions',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
    ),
    'module' => 'legal',
  );

  // Exported permission: 'view Terms and Conditions'.
  $permissions['view Terms and Conditions'] = array(
    'name' => 'view Terms and Conditions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'legal',
  );

  return $permissions;
}
