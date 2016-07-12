<?php
/**
 * @file
 * pick_up_location.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function pick_up_location_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:supplier:editor'.
  $roles['node:supplier:editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'supplier',
    'name' => 'editor',
  );

  return $roles;
}
