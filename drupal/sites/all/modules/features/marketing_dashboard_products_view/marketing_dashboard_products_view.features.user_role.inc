<?php
/**
 * @file
 * marketing_dashboard_products_view.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function marketing_dashboard_products_view_user_default_roles() {
  $roles = array();

  // Exported role: Promotion Team Member.
  $roles['Promotion Team Member'] = array(
    'name' => 'Promotion Team Member',
    'weight' => 14,
  );

  // Exported role: anonymous user.
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
  );

  // Exported role: authenticated user.
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
  );

  return $roles;
}
