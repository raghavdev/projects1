<?php
/**
 * @file
 * supplier_group.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function supplier_group_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:create supplier_contact content'
  $permissions['node:supplier:create supplier_contact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:delete any supplier_contact content'
  $permissions['node:supplier:delete any supplier_contact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:delete own supplier_contact content'
  $permissions['node:supplier:delete own supplier_contact content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update any supplier_contact content'
  $permissions['node:supplier:update any supplier_contact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:update own supplier_contact content'
  $permissions['node:supplier:update own supplier_contact content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
