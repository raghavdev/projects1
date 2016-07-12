<?php
/**
 * @file
 * supplier_details.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function supplier_details_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag notify_srm_of_changes'.
  $permissions['flag notify_srm_of_changes'] = array(
    'name' => 'flag notify_srm_of_changes',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'programmer' => 'programmer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notify_srm_of_changes'.
  $permissions['unflag notify_srm_of_changes'] = array(
    'name' => 'unflag notify_srm_of_changes',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'programmer' => 'programmer',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
