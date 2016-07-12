<?php
/**
 * @file
 * marketing_dashboard_products_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function marketing_dashboard_products_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Marketing' => 'Marketing',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'Promotion Team Member' => 'Promotion Team Member',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'Marketing' => 'Marketing',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
