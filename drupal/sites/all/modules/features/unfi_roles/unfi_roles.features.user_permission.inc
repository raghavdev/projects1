<?php
/**
 * @file
 * unfi_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access unfi node export'.
  $permissions['access unfi node export'] = array(
    'name' => 'access unfi node export',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'programmer' => 'programmer',
    ),
    'module' => 'unfi_node_export',
  );

  // Exported permission: 'admin unfi node export settings'.
  $permissions['admin unfi node export settings'] = array(
    'name' => 'admin unfi node export settings',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
    ),
    'module' => 'unfi_node_export',
  );

  return $permissions;
}
