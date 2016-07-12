<?php
/**
 * @file
 * pack_change.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function pack_change_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:supplier:create pack_change content'
  $permissions['node:supplier:create pack_change content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
