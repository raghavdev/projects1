<?php
/**
 * @file
 * new_item_request.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function new_item_request_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access direct download file'.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'download_file',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_assigned_pick_location'.
  $permissions['create field_assigned_pick_location'] = array(
    'name' => 'create field_assigned_pick_location',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_assigned_pick_location_w'.
  $permissions['create field_assigned_pick_location_w'] = array(
    'name' => 'create field_assigned_pick_location_w',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_catalog_brand'.
  $permissions['create field_catalog_brand'] = array(
    'name' => 'create field_catalog_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_east_brand'.
  $permissions['create field_east_brand'] = array(
    'name' => 'create field_east_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_east_catalog_header'.
  $permissions['create field_east_catalog_header'] = array(
    'name' => 'create field_east_catalog_header',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_east_category'.
  $permissions['create field_east_category'] = array(
    'name' => 'create field_east_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_national_selling_pack'.
  $permissions['create field_national_selling_pack'] = array(
    'name' => 'create field_national_selling_pack',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
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
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_warehouse_group'.
  $permissions['create field_warehouse_group'] = array(
    'name' => 'create field_warehouse_group',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_west_brand'.
  $permissions['create field_west_brand'] = array(
    'name' => 'create field_west_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_west_category'.
  $permissions['create field_west_category'] = array(
    'name' => 'create field_west_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_west_dept'.
  $permissions['create field_west_dept'] = array(
    'name' => 'create field_west_dept',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_west_subheader_catalog'.
  $permissions['create field_west_subheader_catalog'] = array(
    'name' => 'create field_west_subheader_catalog',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create new_item_request content'.
  $permissions['create new_item_request content'] = array(
    'name' => 'create new_item_request content',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create request_item content'.
  $permissions['create request_item content'] = array(
    'name' => 'create request_item content',
    'roles' => array(
      'Manager' => 'Manager',
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any new_item_request content'.
  $permissions['delete any new_item_request content'] = array(
    'name' => 'delete any new_item_request content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any request_item content'.
  $permissions['delete any request_item content'] = array(
    'name' => 'delete any request_item content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own new_item_request content'.
  $permissions['delete own new_item_request content'] = array(
    'name' => 'delete own new_item_request content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own request_item content'.
  $permissions['delete own request_item content'] = array(
    'name' => 'delete own request_item content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any new_item_request content'.
  $permissions['edit any new_item_request content'] = array(
    'name' => 'edit any new_item_request content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any request_item content'.
  $permissions['edit any request_item content'] = array(
    'name' => 'edit any request_item content',
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
      'SRM' => 'SRM',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_catalog_brand'.
  $permissions['edit field_catalog_brand'] = array(
    'name' => 'edit field_catalog_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_east_brand'.
  $permissions['edit field_east_brand'] = array(
    'name' => 'edit field_east_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_east_catalog_header'.
  $permissions['edit field_east_catalog_header'] = array(
    'name' => 'edit field_east_catalog_header',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_east_category'.
  $permissions['edit field_east_category'] = array(
    'name' => 'edit field_east_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_national_selling_pack'.
  $permissions['edit field_national_selling_pack'] = array(
    'name' => 'edit field_national_selling_pack',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
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
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_warehouse_group'.
  $permissions['edit field_warehouse_group'] = array(
    'name' => 'edit field_warehouse_group',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_west_brand'.
  $permissions['edit field_west_brand'] = array(
    'name' => 'edit field_west_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_west_category'.
  $permissions['edit field_west_category'] = array(
    'name' => 'edit field_west_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_west_dept'.
  $permissions['edit field_west_dept'] = array(
    'name' => 'edit field_west_dept',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_west_subheader_catalog'.
  $permissions['edit field_west_subheader_catalog'] = array(
    'name' => 'edit field_west_subheader_catalog',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_assigned_pick_location'.
  $permissions['edit own field_assigned_pick_location'] = array(
    'name' => 'edit own field_assigned_pick_location',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_assigned_pick_location_w'.
  $permissions['edit own field_assigned_pick_location_w'] = array(
    'name' => 'edit own field_assigned_pick_location_w',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_catalog_brand'.
  $permissions['edit own field_catalog_brand'] = array(
    'name' => 'edit own field_catalog_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_east_brand'.
  $permissions['edit own field_east_brand'] = array(
    'name' => 'edit own field_east_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_east_catalog_header'.
  $permissions['edit own field_east_catalog_header'] = array(
    'name' => 'edit own field_east_catalog_header',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_east_category'.
  $permissions['edit own field_east_category'] = array(
    'name' => 'edit own field_east_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_national_selling_pack'.
  $permissions['edit own field_national_selling_pack'] = array(
    'name' => 'edit own field_national_selling_pack',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
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
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_warehouse_group'.
  $permissions['edit own field_warehouse_group'] = array(
    'name' => 'edit own field_warehouse_group',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_west_brand'.
  $permissions['edit own field_west_brand'] = array(
    'name' => 'edit own field_west_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_west_category'.
  $permissions['edit own field_west_category'] = array(
    'name' => 'edit own field_west_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_west_dept'.
  $permissions['edit own field_west_dept'] = array(
    'name' => 'edit own field_west_dept',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_west_subheader_catalog'.
  $permissions['edit own field_west_subheader_catalog'] = array(
    'name' => 'edit own field_west_subheader_catalog',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own new_item_request content'.
  $permissions['edit own new_item_request content'] = array(
    'name' => 'edit own new_item_request content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own request_item content'.
  $permissions['edit own request_item content'] = array(
    'name' => 'edit own request_item content',
    'roles' => array(
      'programmer' => 'programmer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'programmer' => 'programmer',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'view field_assigned_pick_location'.
  $permissions['view field_assigned_pick_location'] = array(
    'name' => 'view field_assigned_pick_location',
    'roles' => array(
      'Broker' => 'Broker',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_assigned_pick_location_w'.
  $permissions['view field_assigned_pick_location_w'] = array(
    'name' => 'view field_assigned_pick_location_w',
    'roles' => array(
      'Broker' => 'Broker',
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'Supplier' => 'Supplier',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_catalog_brand'.
  $permissions['view field_catalog_brand'] = array(
    'name' => 'view field_catalog_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_east_brand'.
  $permissions['view field_east_brand'] = array(
    'name' => 'view field_east_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_east_catalog_header'.
  $permissions['view field_east_catalog_header'] = array(
    'name' => 'view field_east_catalog_header',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_east_category'.
  $permissions['view field_east_category'] = array(
    'name' => 'view field_east_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_national_selling_pack'.
  $permissions['view field_national_selling_pack'] = array(
    'name' => 'view field_national_selling_pack',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
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
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_warehouse_group'.
  $permissions['view field_warehouse_group'] = array(
    'name' => 'view field_warehouse_group',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_west_brand'.
  $permissions['view field_west_brand'] = array(
    'name' => 'view field_west_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_west_category'.
  $permissions['view field_west_category'] = array(
    'name' => 'view field_west_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_west_dept'.
  $permissions['view field_west_dept'] = array(
    'name' => 'view field_west_dept',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_west_subheader_catalog'.
  $permissions['view field_west_subheader_catalog'] = array(
    'name' => 'view field_west_subheader_catalog',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_assigned_pick_location'.
  $permissions['view own field_assigned_pick_location'] = array(
    'name' => 'view own field_assigned_pick_location',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_assigned_pick_location_w'.
  $permissions['view own field_assigned_pick_location_w'] = array(
    'name' => 'view own field_assigned_pick_location_w',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_catalog_brand'.
  $permissions['view own field_catalog_brand'] = array(
    'name' => 'view own field_catalog_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_east_brand'.
  $permissions['view own field_east_brand'] = array(
    'name' => 'view own field_east_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_east_catalog_header'.
  $permissions['view own field_east_catalog_header'] = array(
    'name' => 'view own field_east_catalog_header',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_east_category'.
  $permissions['view own field_east_category'] = array(
    'name' => 'view own field_east_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_national_selling_pack'.
  $permissions['view own field_national_selling_pack'] = array(
    'name' => 'view own field_national_selling_pack',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
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
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_warehouse_group'.
  $permissions['view own field_warehouse_group'] = array(
    'name' => 'view own field_warehouse_group',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_west_brand'.
  $permissions['view own field_west_brand'] = array(
    'name' => 'view own field_west_brand',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_west_category'.
  $permissions['view own field_west_category'] = array(
    'name' => 'view own field_west_category',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_west_dept'.
  $permissions['view own field_west_dept'] = array(
    'name' => 'view own field_west_dept',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_west_subheader_catalog'.
  $permissions['view own field_west_subheader_catalog'] = array(
    'name' => 'view own field_west_subheader_catalog',
    'roles' => array(
      'IBL' => 'IBL',
      'Item Specialist' => 'Item Specialist',
      'Manager' => 'Manager',
      'Gatekeeper' => 'Gatekeeper',
      'Pack Change East Coder' => 'Pack Change East Coder',
      'Pack Change West Coder' => 'Pack Change West Coder',
      'RCM' => 'RCM',
      'SRM' => 'SRM',
      'administrator' => 'administrator',
      'programmer' => 'programmer',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
