<?php
/**
 * @file
 * unfi_pseudo_member_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_pseudo_member_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'manage all group content'.
  $permissions['manage all group content'] = array(
    'name' => 'manage all group content',
    'roles' => array(
      'Gatekeeper' => 'Gatekeeper',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
    ),
    'module' => 'og_pseudomember',
  );

  // Exported permission: 'view all group content'.
  $permissions['view all group content'] = array(
    'name' => 'view all group content',
    'roles' => array(
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'og_pseudomember',
  );

  return $permissions;
}
