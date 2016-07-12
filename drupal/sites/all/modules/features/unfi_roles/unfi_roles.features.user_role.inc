<?php
/**
 * @file
 * unfi_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function unfi_roles_user_default_roles() {
  $roles = array();

  // Exported role: Broker.
  $roles['Broker'] = array(
    'name' => 'Broker',
    'weight' => 3,
  );

  // Exported role: Gatekeeper.
  $roles['Gatekeeper'] = array(
    'name' => 'Gatekeeper',
    'weight' => 8,
  );

  // Exported role: IBL.
  $roles['IBL'] = array(
    'name' => 'IBL',
    'weight' => 5,
  );

  // Exported role: Item Specialist.
  $roles['Item Specialist'] = array(
    'name' => 'Item Specialist',
    'weight' => 7,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 14,
  );

  // Exported role: Marketing.
  $roles['Marketing'] = array(
    'name' => 'Marketing',
    'weight' => 11,
  );

  // Exported role: Pack Change East Coder.
  $roles['Pack Change East Coder'] = array(
    'name' => 'Pack Change East Coder',
    'weight' => 12,
  );

  // Exported role: Pack Change West Coder.
  $roles['Pack Change West Coder'] = array(
    'name' => 'Pack Change West Coder',
    'weight' => 13,
  );

  // Exported role: RCM.
  $roles['RCM'] = array(
    'name' => 'RCM',
    'weight' => 6,
  );

  // Exported role: SRM.
  $roles['SRM'] = array(
    'name' => 'SRM',
    'weight' => 4,
  );

  // Exported role: Supplier.
  $roles['Supplier'] = array(
    'name' => 'Supplier',
    'weight' => 2,
  );

  // Exported role: UBS Coder.
  $roles['UBS Coder'] = array(
    'name' => 'UBS Coder',
    'weight' => 9,
  );

  // Exported role: WBS Coder.
  $roles['WBS Coder'] = array(
    'name' => 'WBS Coder',
    'weight' => 10,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 15,
  );

  // Exported role: programmer.
  $roles['programmer'] = array(
    'name' => 'programmer',
    'weight' => 16,
  );

  return $roles;
}
