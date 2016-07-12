<?php
/**
 * @file
 * autoassignroleconfig.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function autoassignroleconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer autoassignrole'.
  $permissions['administer autoassignrole'] = array(
    'name' => 'administer autoassignrole',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'autoassignrole',
  );

  return $permissions;
}
