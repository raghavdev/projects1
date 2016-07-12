<?php
/**
 * @file
 * pick_up_location.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function pick_up_location_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:create pick_up_location content'
  $permissions['node:supplier:create pick_up_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:delete any pick_up_location content'
  $permissions['node:supplier:delete any pick_up_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:delete own pick_up_location content'
  $permissions['node:supplier:delete own pick_up_location content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:supplier:update any pick_up_location content'
  $permissions['node:supplier:update any pick_up_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:supplier:update own pick_up_location content'
  $permissions['node:supplier:update own pick_up_location content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
