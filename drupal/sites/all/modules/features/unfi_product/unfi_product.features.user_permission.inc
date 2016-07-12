<?php
/**
 * @file
 * unfi_product.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unfi_product_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_assigned_pick_location'.
  $permissions['create field_assigned_pick_location'] = array(
    'name' => 'create field_assigned_pick_location',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_assigned_pick_location_w'.
  $permissions['create field_assigned_pick_location_w'] = array(
    'name' => 'create field_assigned_pick_location_w',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ethnic_cultural'.
  $permissions['create field_ethnic_cultural'] = array(
    'name' => 'create field_ethnic_cultural',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_flavor'.
  $permissions['create field_flavor'] = array(
    'name' => 'create field_flavor',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_form'.
  $permissions['create field_form'] = array(
    'name' => 'create field_form',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_shelf_life_retail'.
  $permissions['create field_shelf_life_retail'] = array(
    'name' => 'create field_shelf_life_retail',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_srp_east'.
  $permissions['create field_srp_east'] = array(
    'name' => 'create field_srp_east',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_srp_west'.
  $permissions['create field_srp_west'] = array(
    'name' => 'create field_srp_west',
    'roles' => array(
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_type'.
  $permissions['create field_type'] = array(
    'name' => 'create field_type',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ubs_number'.
  $permissions['create field_ubs_number'] = array(
    'name' => 'create field_ubs_number',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_unfi_contribution'.
  $permissions['create field_unfi_contribution'] = array(
    'name' => 'create field_unfi_contribution',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_unfi_only_approved_mcb'.
  $permissions['create field_unfi_only_approved_mcb'] = array(
    'name' => 'create field_unfi_only_approved_mcb',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_use_mcc_east'.
  $permissions['create field_use_mcc_east'] = array(
    'name' => 'create field_use_mcc_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_use_mcc_west'.
  $permissions['create field_use_mcc_west'] = array(
    'name' => 'create field_use_mcc_west',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_wbs_number'.
  $permissions['create field_wbs_number'] = array(
    'name' => 'create field_wbs_number',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_wholesale_price_east'.
  $permissions['create field_wholesale_price_east'] = array(
    'name' => 'create field_wholesale_price_east',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_wholesale_price_west'.
  $permissions['create field_wholesale_price_west'] = array(
    'name' => 'create field_wholesale_price_west',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_assigned_pick_location'.
  $permissions['edit field_assigned_pick_location'] = array(
    'name' => 'edit field_assigned_pick_location',
    'roles' => array(
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'SRM' => 'SRM',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_assigned_pick_location_w'.
  $permissions['edit field_assigned_pick_location_w'] = array(
    'name' => 'edit field_assigned_pick_location_w',
    'roles' => array(
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'SRM' => 'SRM',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ethnic_cultural'.
  $permissions['edit field_ethnic_cultural'] = array(
    'name' => 'edit field_ethnic_cultural',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_flavor'.
  $permissions['edit field_flavor'] = array(
    'name' => 'edit field_flavor',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_form'.
  $permissions['edit field_form'] = array(
    'name' => 'edit field_form',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_shelf_life_retail'.
  $permissions['edit field_shelf_life_retail'] = array(
    'name' => 'edit field_shelf_life_retail',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_srp_east'.
  $permissions['edit field_srp_east'] = array(
    'name' => 'edit field_srp_east',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_srp_west'.
  $permissions['edit field_srp_west'] = array(
    'name' => 'edit field_srp_west',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_type'.
  $permissions['edit field_type'] = array(
    'name' => 'edit field_type',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ubs_number'.
  $permissions['edit field_ubs_number'] = array(
    'name' => 'edit field_ubs_number',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_unfi_contribution'.
  $permissions['edit field_unfi_contribution'] = array(
    'name' => 'edit field_unfi_contribution',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_unfi_only_approved_mcb'.
  $permissions['edit field_unfi_only_approved_mcb'] = array(
    'name' => 'edit field_unfi_only_approved_mcb',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_use_mcc_east'.
  $permissions['edit field_use_mcc_east'] = array(
    'name' => 'edit field_use_mcc_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_use_mcc_west'.
  $permissions['edit field_use_mcc_west'] = array(
    'name' => 'edit field_use_mcc_west',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_wbs_number'.
  $permissions['edit field_wbs_number'] = array(
    'name' => 'edit field_wbs_number',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_wholesale_price_east'.
  $permissions['edit field_wholesale_price_east'] = array(
    'name' => 'edit field_wholesale_price_east',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_wholesale_price_west'.
  $permissions['edit field_wholesale_price_west'] = array(
    'name' => 'edit field_wholesale_price_west',
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
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_assigned_pick_location'.
  $permissions['edit own field_assigned_pick_location'] = array(
    'name' => 'edit own field_assigned_pick_location',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_assigned_pick_location_w'.
  $permissions['edit own field_assigned_pick_location_w'] = array(
    'name' => 'edit own field_assigned_pick_location_w',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ethnic_cultural'.
  $permissions['edit own field_ethnic_cultural'] = array(
    'name' => 'edit own field_ethnic_cultural',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_flavor'.
  $permissions['edit own field_flavor'] = array(
    'name' => 'edit own field_flavor',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_form'.
  $permissions['edit own field_form'] = array(
    'name' => 'edit own field_form',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_shelf_life_retail'.
  $permissions['edit own field_shelf_life_retail'] = array(
    'name' => 'edit own field_shelf_life_retail',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_srp_east'.
  $permissions['edit own field_srp_east'] = array(
    'name' => 'edit own field_srp_east',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_srp_west'.
  $permissions['edit own field_srp_west'] = array(
    'name' => 'edit own field_srp_west',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_type'.
  $permissions['edit own field_type'] = array(
    'name' => 'edit own field_type',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ubs_number'.
  $permissions['edit own field_ubs_number'] = array(
    'name' => 'edit own field_ubs_number',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_unfi_contribution'.
  $permissions['edit own field_unfi_contribution'] = array(
    'name' => 'edit own field_unfi_contribution',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_unfi_only_approved_mcb'.
  $permissions['edit own field_unfi_only_approved_mcb'] = array(
    'name' => 'edit own field_unfi_only_approved_mcb',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_use_mcc_east'.
  $permissions['edit own field_use_mcc_east'] = array(
    'name' => 'edit own field_use_mcc_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_use_mcc_west'.
  $permissions['edit own field_use_mcc_west'] = array(
    'name' => 'edit own field_use_mcc_west',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_wbs_number'.
  $permissions['edit own field_wbs_number'] = array(
    'name' => 'edit own field_wbs_number',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_wholesale_price_east'.
  $permissions['edit own field_wholesale_price_east'] = array(
    'name' => 'edit own field_wholesale_price_east',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_wholesale_price_west'.
  $permissions['edit own field_wholesale_price_west'] = array(
    'name' => 'edit own field_wholesale_price_west',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_assigned_pick_location'.
  $permissions['view field_assigned_pick_location'] = array(
    'name' => 'view field_assigned_pick_location',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_assigned_pick_location_w'.
  $permissions['view field_assigned_pick_location_w'] = array(
    'name' => 'view field_assigned_pick_location_w',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ethnic_cultural'.
  $permissions['view field_ethnic_cultural'] = array(
    'name' => 'view field_ethnic_cultural',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_flavor'.
  $permissions['view field_flavor'] = array(
    'name' => 'view field_flavor',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_form'.
  $permissions['view field_form'] = array(
    'name' => 'view field_form',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_shelf_life_retail'.
  $permissions['view field_shelf_life_retail'] = array(
    'name' => 'view field_shelf_life_retail',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_srp_east'.
  $permissions['view field_srp_east'] = array(
    'name' => 'view field_srp_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_srp_west'.
  $permissions['view field_srp_west'] = array(
    'name' => 'view field_srp_west',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_type'.
  $permissions['view field_type'] = array(
    'name' => 'view field_type',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ubs_number'.
  $permissions['view field_ubs_number'] = array(
    'name' => 'view field_ubs_number',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_unfi_contribution'.
  $permissions['view field_unfi_contribution'] = array(
    'name' => 'view field_unfi_contribution',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_unfi_only_approved_mcb'.
  $permissions['view field_unfi_only_approved_mcb'] = array(
    'name' => 'view field_unfi_only_approved_mcb',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_use_mcc_east'.
  $permissions['view field_use_mcc_east'] = array(
    'name' => 'view field_use_mcc_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_use_mcc_west'.
  $permissions['view field_use_mcc_west'] = array(
    'name' => 'view field_use_mcc_west',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_wbs_number'.
  $permissions['view field_wbs_number'] = array(
    'name' => 'view field_wbs_number',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_wholesale_price_east'.
  $permissions['view field_wholesale_price_east'] = array(
    'name' => 'view field_wholesale_price_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_wholesale_price_west'.
  $permissions['view field_wholesale_price_west'] = array(
    'name' => 'view field_wholesale_price_west',
    'roles' => array(
      'Broker' => 'Broker',
      'Gatekeeper' => 'Gatekeeper',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Marketing' => 'Marketing',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'UBS Coder' => 'UBS Coder',
      'WBS Coder' => 'WBS Coder',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_assigned_pick_location'.
  $permissions['view own field_assigned_pick_location'] = array(
    'name' => 'view own field_assigned_pick_location',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_assigned_pick_location_w'.
  $permissions['view own field_assigned_pick_location_w'] = array(
    'name' => 'view own field_assigned_pick_location_w',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ethnic_cultural'.
  $permissions['view own field_ethnic_cultural'] = array(
    'name' => 'view own field_ethnic_cultural',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_flavor'.
  $permissions['view own field_flavor'] = array(
    'name' => 'view own field_flavor',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_form'.
  $permissions['view own field_form'] = array(
    'name' => 'view own field_form',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_shelf_life_retail'.
  $permissions['view own field_shelf_life_retail'] = array(
    'name' => 'view own field_shelf_life_retail',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_srp_east'.
  $permissions['view own field_srp_east'] = array(
    'name' => 'view own field_srp_east',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_srp_west'.
  $permissions['view own field_srp_west'] = array(
    'name' => 'view own field_srp_west',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_type'.
  $permissions['view own field_type'] = array(
    'name' => 'view own field_type',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ubs_number'.
  $permissions['view own field_ubs_number'] = array(
    'name' => 'view own field_ubs_number',
    'roles' => array(
      'Marketing' => 'Marketing',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_unfi_contribution'.
  $permissions['view own field_unfi_contribution'] = array(
    'name' => 'view own field_unfi_contribution',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_unfi_only_approved_mcb'.
  $permissions['view own field_unfi_only_approved_mcb'] = array(
    'name' => 'view own field_unfi_only_approved_mcb',
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
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_use_mcc_east'.
  $permissions['view own field_use_mcc_east'] = array(
    'name' => 'view own field_use_mcc_east',
    'roles' => array(
      'Broker' => 'Broker',
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_use_mcc_west'.
  $permissions['view own field_use_mcc_west'] = array(
    'name' => 'view own field_use_mcc_west',
    'roles' => array(
      'Manager' => 'Manager',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_wbs_number'.
  $permissions['view own field_wbs_number'] = array(
    'name' => 'view own field_wbs_number',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_wholesale_price_east'.
  $permissions['view own field_wholesale_price_east'] = array(
    'name' => 'view own field_wholesale_price_east',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_wholesale_price_west'.
  $permissions['view own field_wholesale_price_west'] = array(
    'name' => 'view own field_wholesale_price_west',
    'roles' => array(
      'Marketing' => 'Marketing',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
