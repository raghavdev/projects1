<?php
/**
 * @file
 * pack_change.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pack_change_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create pack_change content'.
  $permissions['create pack_change content'] = array(
    'name' => 'create pack_change content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
