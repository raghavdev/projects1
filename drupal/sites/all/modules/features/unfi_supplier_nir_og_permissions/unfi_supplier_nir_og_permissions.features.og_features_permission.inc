<?php
/**
 * @file
 * unfi_supplier_nir_og_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function unfi_supplier_nir_og_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:create new_item_request content'
  $permissions['node:supplier:create new_item_request content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:supplier:delete any new_item_request content'
  $permissions['node:supplier:delete any new_item_request content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:supplier:delete own new_item_request content'
  $permissions['node:supplier:delete own new_item_request content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update any new_item_request content'
  $permissions['node:supplier:update any new_item_request content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:supplier:update own new_item_request content'
  $permissions['node:supplier:update own new_item_request content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
