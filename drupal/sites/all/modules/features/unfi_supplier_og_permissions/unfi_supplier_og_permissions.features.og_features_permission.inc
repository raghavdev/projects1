<?php
/**
 * @file
 * unfi_supplier_og_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function unfi_supplier_og_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:add user'
  $permissions['node:supplier:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:supplier:administer group'
  $permissions['node:supplier:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:approve and deny subscription'
  $permissions['node:supplier:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:supplier:manage members'
  $permissions['node:supplier:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:supplier:manage permissions'
  $permissions['node:supplier:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:manage roles'
  $permissions['node:supplier:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:subscribe'
  $permissions['node:supplier:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:subscribe without approval'
  $permissions['node:supplier:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:unsubscribe'
  $permissions['node:supplier:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update group'
  $permissions['node:supplier:update group'] = array(
    'roles' => array(),
  );

  return $permissions;
}
