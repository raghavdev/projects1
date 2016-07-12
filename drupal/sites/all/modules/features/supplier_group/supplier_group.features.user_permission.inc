<?php
/**
 * @file
 * supplier_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function supplier_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'og',
  );

  // Exported permission: 'create supplier_contact content'.
  $permissions['create supplier_contact content'] = array(
    'name' => 'create supplier_contact content',
    'roles' => array(
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supplier_contact content'.
  $permissions['delete any supplier_contact content'] = array(
    'name' => 'delete any supplier_contact content',
    'roles' => array(
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supplier_contact content'.
  $permissions['delete own supplier_contact content'] = array(
    'name' => 'delete own supplier_contact content',
    'roles' => array(
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supplier_contact content'.
  $permissions['edit any supplier_contact content'] = array(
    'name' => 'edit any supplier_contact content',
    'roles' => array(
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supplier_contact content'.
  $permissions['edit own supplier_contact content'] = array(
    'name' => 'edit own supplier_contact content',
    'roles' => array(
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
