<?php
/**
 * @file
 * unfi_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unfi_product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'multiple_vendor_number';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Multiple Vendor Number';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: : field_vendor_account_number_east */
  $handler->display->display_options['fields']['field_vendor_account_number_east']['id'] = 'field_vendor_account_number_east';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['table'] = 'field_data_field_vendor_account_number_east';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['field'] = 'field_vendor_account_number_east';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['relationship'] = 'field_vendor_account_number_east_node';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_account_number_east']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_vendor_account_number_east']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_vendor_account_number_east']['delta_offset'] = '0';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'field_vendor_account_number_east_node';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'unfi_custom_group_ref';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'ignore';

  /* Display: East */
  $handler = $view->new_display('entityreference', 'East', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'item_id' => 'item_id',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Vendor Account Number - East (field_vendor_account_number_east) */
  $handler->display->display_options['relationships']['field_vendor_account_number_east_node']['id'] = 'field_vendor_account_number_east_node';
  $handler->display->display_options['relationships']['field_vendor_account_number_east_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_vendor_account_number_east_node']['field'] = 'field_vendor_account_number_east_node';
  $handler->display->display_options['relationships']['field_vendor_account_number_east_node']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_vendor_account_number_east_node';

  /* Display: West */
  $handler = $view->new_display('entityreference', 'West', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'item_id' => 'item_id',
    'field_vendor_account_number_east' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Vendor Account Number - West (field_vendor_account_number_west) */
  $handler->display->display_options['relationships']['field_vendor_account_number_west_node']['id'] = 'field_vendor_account_number_west_node';
  $handler->display->display_options['relationships']['field_vendor_account_number_west_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_vendor_account_number_west_node']['field'] = 'field_vendor_account_number_west_node';
  $handler->display->display_options['relationships']['field_vendor_account_number_west_node']['required'] = TRUE;
  $export['multiple_vendor_number'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Request Items';
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'views_custom_cache';
  $handler->display->display_options['cache']['cache_time'] = '86400';
  $handler->display->display_options['cache']['cache_time_custom'] = '0';
  $handler->display->display_options['cache']['per_role'] = '1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_unit_cost_del_east' => 'field_unit_cost_del_east',
    'field_case_cost_del_east' => 'field_unit_cost_del_east',
    'field_unit_cost_fob_east' => 'field_unit_cost_fob_east',
    'field_case_cost_fob_east' => 'field_unit_cost_fob_east',
    'field_use_mcc_east' => 'field_use_mcc_east',
    'field_pricing_sheet' => 'field_pricing_sheet',
    'field_notes_east' => 'field_notes_east',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_del_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_del_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_fob_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_fob_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pricing_sheet' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_east_vendor__target_id']['id'] = 'field_east_vendor__target_id';
  $handler->display->display_options['relationships']['field_east_vendor__target_id']['table'] = 'field_data_field_east_vendor_';
  $handler->display->display_options['relationships']['field_east_vendor__target_id']['field'] = 'field_east_vendor__target_id';
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Inner Pack UPC */
  $handler->display->display_options['fields']['field_pack_upc']['id'] = 'field_pack_upc';
  $handler->display->display_options['fields']['field_pack_upc']['table'] = 'field_data_field_pack_upc';
  $handler->display->display_options['fields']['field_pack_upc']['field'] = 'field_pack_upc';
  /* Field: Content: Case or Master Case UPC */
  $handler->display->display_options['fields']['field_case_upc']['id'] = 'field_case_upc';
  $handler->display->display_options['fields']['field_case_upc']['table'] = 'field_data_field_case_upc';
  $handler->display->display_options['fields']['field_case_upc']['field'] = 'field_case_upc';
  /* Field: Content: Manufacturer Part Number */
  $handler->display->display_options['fields']['field_part_number']['id'] = 'field_part_number';
  $handler->display->display_options['fields']['field_part_number']['table'] = 'field_data_field_part_number';
  $handler->display->display_options['fields']['field_part_number']['field'] = 'field_part_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  /* Field: Content: Inner Pack */
  $handler->display->display_options['fields']['field_inner_pack']['id'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['table'] = 'field_data_field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['field'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Master Case Pack */
  $handler->display->display_options['fields']['field_mc_pack']['id'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['table'] = 'field_data_field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['field'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Master Case UPC is the same as Item UPC */
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['id'] = 'field_mc_upc_same_as_item_upc';
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['table'] = 'field_data_field_mc_upc_same_as_item_upc';
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['field'] = 'field_mc_upc_same_as_item_upc';
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['label'] = 'MC UPC same as Item UPC';
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_mc_upc_same_as_item_upc']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '1',
    'custom_off' => '0',
    'reverse' => 0,
  );
  /* Contextual filter: Content: Request Form (field_request_form) */
  $handler->display->display_options['arguments']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['arguments']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['field_request_form_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_request_form_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_request_form_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_request_form_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_request_form_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: East Distributor Costs */
  $handler = $view->new_display('panel_pane', 'East Distributor Costs', 'east_distributor_costs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'East Distributor Costs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_unit_cost_del_east' => 'field_unit_cost_del_east',
    'field_case_cost_del_east' => 'field_unit_cost_del_east',
    'field_unit_cost_fob_east' => 'field_unit_cost_fob_east',
    'field_case_cost_fob_east' => 'field_unit_cost_fob_east',
    'field_use_mcc_east' => 'field_use_mcc_east',
    'field_pricing_sheet' => 'field_pricing_sheet',
    'field_notes_east' => 'field_notes_east',
    'field_unit_retail_fob_east' => 'field_unit_cost_fob_east',
    'field_unit_retail_del_east' => 'field_unit_cost_del_east',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_del_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_del_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_fob_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_fob_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pricing_sheet' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_fob_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_del_east' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Item Cost */
  $handler->display->display_options['fields']['field_unit_cost_del_east']['id'] = 'field_unit_cost_del_east';
  $handler->display->display_options['fields']['field_unit_cost_del_east']['table'] = 'field_data_field_unit_cost_del_east';
  $handler->display->display_options['fields']['field_unit_cost_del_east']['field'] = 'field_unit_cost_del_east';
  $handler->display->display_options['fields']['field_unit_cost_del_east']['label'] = 'Delivered';
  $handler->display->display_options['fields']['field_unit_cost_del_east']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_cost_del_east']['alter']['text'] = '<strong>Item Cost:</strong> [field_unit_cost_del_east]';
  $handler->display->display_options['fields']['field_unit_cost_del_east']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Delivered Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_del_east']['id'] = 'field_case_cost_del_east';
  $handler->display->display_options['fields']['field_case_cost_del_east']['table'] = 'field_data_field_case_cost_del_east';
  $handler->display->display_options['fields']['field_case_cost_del_east']['field'] = 'field_case_cost_del_east';
  $handler->display->display_options['fields']['field_case_cost_del_east']['ui_name'] = 'Delivered Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_del_east']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_del_east']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_cost_del_east']['alter']['text'] = '<strong>Master Case Cost:</strong> [field_case_cost_del_east]';
  $handler->display->display_options['fields']['field_case_cost_del_east']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_del_east']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Item Cost */
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['id'] = 'field_unit_cost_fob_east';
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['table'] = 'field_data_field_unit_cost_fob_east';
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['field'] = 'field_unit_cost_fob_east';
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['label'] = 'FOB';
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['alter']['text'] = '<strong>Item Cost:</strong> [field_unit_cost_fob_east]';
  $handler->display->display_options['fields']['field_unit_cost_fob_east']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: FOB Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_fob_east']['id'] = 'field_case_cost_fob_east';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['table'] = 'field_data_field_case_cost_fob_east';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['field'] = 'field_case_cost_fob_east';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['ui_name'] = 'FOB Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_cost_fob_east']['alter']['text'] = '<strong>Master Case Cost:</strong> [field_case_cost_fob_east]';
  $handler->display->display_options['fields']['field_case_cost_fob_east']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_fob_east']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Choose Cost */
  $handler->display->display_options['fields']['field_use_mcc_east']['id'] = 'field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east']['table'] = 'field_data_field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east']['field'] = 'field_use_mcc_east';
  /* Field: Content: Full Manufacturer's Price List */
  $handler->display->display_options['fields']['field_pricing_sheet']['id'] = 'field_pricing_sheet';
  $handler->display->display_options['fields']['field_pricing_sheet']['table'] = 'field_data_field_pricing_sheet';
  $handler->display->display_options['fields']['field_pricing_sheet']['field'] = 'field_pricing_sheet';
  $handler->display->display_options['fields']['field_pricing_sheet']['label'] = 'Price List';
  $handler->display->display_options['fields']['field_pricing_sheet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pricing_sheet']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes_east']['id'] = 'field_notes_east';
  $handler->display->display_options['fields']['field_notes_east']['table'] = 'field_data_field_notes_east';
  $handler->display->display_options['fields']['field_notes_east']['field'] = 'field_notes_east';
  /* Field: Content: Suggested Item Retail */
  $handler->display->display_options['fields']['field_unit_retail_fob_east']['id'] = 'field_unit_retail_fob_east';
  $handler->display->display_options['fields']['field_unit_retail_fob_east']['table'] = 'field_data_field_unit_retail_fob_east';
  $handler->display->display_options['fields']['field_unit_retail_fob_east']['field'] = 'field_unit_retail_fob_east';
  $handler->display->display_options['fields']['field_unit_retail_fob_east']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Suggested Item Retail */
  $handler->display->display_options['fields']['field_unit_retail_del_east']['id'] = 'field_unit_retail_del_east';
  $handler->display->display_options['fields']['field_unit_retail_del_east']['table'] = 'field_data_field_unit_retail_del_east';
  $handler->display->display_options['fields']['field_unit_retail_del_east']['field'] = 'field_unit_retail_del_east';
  $handler->display->display_options['fields']['field_unit_retail_del_east']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: West Distributor Costs */
  $handler = $view->new_display('panel_pane', 'West Distributor Costs', 'west_distributor_costs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'West Distributor Costs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_unit_cost_del_west' => 'field_unit_cost_del_west',
    'field_case_cost_del_west' => 'field_unit_cost_del_west',
    'field_unit_cost_fob_west' => 'field_unit_cost_fob_west',
    'field_case_cost_fob_west' => 'field_unit_cost_fob_west',
    'field_use_mcc_west' => 'field_use_mcc_west',
    'field_pricing_sheet_west' => 'field_pricing_sheet_west',
    'field_notes_west' => 'field_notes_west',
    'field_unit_retail_del_west' => 'field_unit_cost_del_west',
    'field_unit_retail_fob_west' => 'field_unit_cost_fob_west',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_del_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_del_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_fob_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_case_cost_fob_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pricing_sheet_west' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_del_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_fob_west' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Item Cost */
  $handler->display->display_options['fields']['field_unit_cost_del_west']['id'] = 'field_unit_cost_del_west';
  $handler->display->display_options['fields']['field_unit_cost_del_west']['table'] = 'field_data_field_unit_cost_del_west';
  $handler->display->display_options['fields']['field_unit_cost_del_west']['field'] = 'field_unit_cost_del_west';
  $handler->display->display_options['fields']['field_unit_cost_del_west']['label'] = 'Delivered';
  $handler->display->display_options['fields']['field_unit_cost_del_west']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_cost_del_west']['alter']['text'] = '<strong>Item Cost:</strong> [field_unit_cost_del_west]';
  $handler->display->display_options['fields']['field_unit_cost_del_west']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Delivered Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_del_west']['id'] = 'field_case_cost_del_west';
  $handler->display->display_options['fields']['field_case_cost_del_west']['table'] = 'field_data_field_case_cost_del_west';
  $handler->display->display_options['fields']['field_case_cost_del_west']['field'] = 'field_case_cost_del_west';
  $handler->display->display_options['fields']['field_case_cost_del_west']['ui_name'] = 'Delivered Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_del_west']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_del_west']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_cost_del_west']['alter']['text'] = '<strong>Master Case Cost:</strong> [field_case_cost_del_west] ';
  $handler->display->display_options['fields']['field_case_cost_del_west']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_del_west']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Item Cost */
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['id'] = 'field_unit_cost_fob_west';
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['table'] = 'field_data_field_unit_cost_fob_west';
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['field'] = 'field_unit_cost_fob_west';
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['label'] = 'FOB';
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['alter']['text'] = '<strong>Item Cost:</strong> [field_unit_cost_fob_west]';
  $handler->display->display_options['fields']['field_unit_cost_fob_west']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: FOB Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_fob_west']['id'] = 'field_case_cost_fob_west';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['table'] = 'field_data_field_case_cost_fob_west';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['field'] = 'field_case_cost_fob_west';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['ui_name'] = 'FOB Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_cost_fob_west']['alter']['text'] = '<strong>Master Case Cost:</strong> [field_case_cost_fob_west] ';
  $handler->display->display_options['fields']['field_case_cost_fob_west']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_fob_west']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Choose Cost */
  $handler->display->display_options['fields']['field_use_mcc_west']['id'] = 'field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west']['table'] = 'field_data_field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west']['field'] = 'field_use_mcc_west';
  /* Field: Content: Full Manufacturer's Price List */
  $handler->display->display_options['fields']['field_pricing_sheet_west']['id'] = 'field_pricing_sheet_west';
  $handler->display->display_options['fields']['field_pricing_sheet_west']['table'] = 'field_data_field_pricing_sheet_west';
  $handler->display->display_options['fields']['field_pricing_sheet_west']['field'] = 'field_pricing_sheet_west';
  $handler->display->display_options['fields']['field_pricing_sheet_west']['label'] = 'Price List';
  $handler->display->display_options['fields']['field_pricing_sheet_west']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pricing_sheet_west']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes_west']['id'] = 'field_notes_west';
  $handler->display->display_options['fields']['field_notes_west']['table'] = 'field_data_field_notes_west';
  $handler->display->display_options['fields']['field_notes_west']['field'] = 'field_notes_west';
  /* Field: Content: Suggested Item Retail */
  $handler->display->display_options['fields']['field_unit_retail_del_west']['id'] = 'field_unit_retail_del_west';
  $handler->display->display_options['fields']['field_unit_retail_del_west']['table'] = 'field_data_field_unit_retail_del_west';
  $handler->display->display_options['fields']['field_unit_retail_del_west']['field'] = 'field_unit_retail_del_west';
  $handler->display->display_options['fields']['field_unit_retail_del_west']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Suggested Item Retail */
  $handler->display->display_options['fields']['field_unit_retail_fob_west']['id'] = 'field_unit_retail_fob_west';
  $handler->display->display_options['fields']['field_unit_retail_fob_west']['table'] = 'field_data_field_unit_retail_fob_west';
  $handler->display->display_options['fields']['field_unit_retail_fob_west']['field'] = 'field_unit_retail_fob_west';
  $handler->display->display_options['fields']['field_unit_retail_fob_west']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Warehouse Locations (East) */
  $handler = $view->new_display('panel_pane', 'Warehouse Locations (East)', 'warehouse_locations_east');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'East Warehouse Locations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_warehouses_east' => 'field_warehouses_east',
    'field_warehouses_west' => 'field_warehouses_west',
    'field_warehouses_select' => 'field_warehouses_select',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_east' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_west' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_select' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UNFI East */
  $handler->display->display_options['fields']['field_warehouses_east']['id'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['table'] = 'field_data_field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['field'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_east']['delta_offset'] = '0';
  /* Field: Content: Select Nutrition */
  $handler->display->display_options['fields']['field_warehouses_select']['id'] = 'field_warehouses_select';
  $handler->display->display_options['fields']['field_warehouses_select']['table'] = 'field_data_field_warehouses_select';
  $handler->display->display_options['fields']['field_warehouses_select']['field'] = 'field_warehouses_select';
  $handler->display->display_options['fields']['field_warehouses_select']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_select']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Warehouse Locations (West) */
  $handler = $view->new_display('panel_pane', 'Warehouse Locations (West)', 'warehouse_locations_west');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'West Warehouse Locations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_warehouses_west' => 'field_warehouses_west',
    'field_warehouses_select' => 'field_warehouses_select',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_west' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_select' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UNFI West */
  $handler->display->display_options['fields']['field_warehouses_west']['id'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['field'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Packaging Specs */
  $handler = $view->new_display('panel_pane', 'Packaging Specs', 'packaging_specs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Packaging Specs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_package_type' => 'field_package_type',
    'field_case_weight' => 'field_package_type',
    'field_tie' => 'field_package_type',
    'field_high' => 'field_package_type',
    'field_unit_height' => 'field_unit_height',
    'field_unit_width' => 'field_unit_height',
    'field_unit_length' => 'field_unit_height',
    'field_pack_height' => 'field_pack_height',
    'field_pack_width' => 'field_pack_height',
    'field_pack_length' => 'field_pack_height',
    'field_case_height' => 'field_case_height',
    'field_case_width' => 'field_case_height',
    'field_case_length' => 'field_case_height',
    'field_random_weight' => 'field_case_height',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_package_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tie' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_high' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_height' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_height' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_height' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_case_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_random_weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Retail Unit Package Type */
  $handler->display->display_options['fields']['field_package_type']['id'] = 'field_package_type';
  $handler->display->display_options['fields']['field_package_type']['table'] = 'field_data_field_package_type';
  $handler->display->display_options['fields']['field_package_type']['field'] = 'field_package_type';
  $handler->display->display_options['fields']['field_package_type']['label'] = 'Packaging';
  $handler->display->display_options['fields']['field_package_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_package_type']['alter']['text'] = '<strong>Type: </strong>
[field_package_type]<br/>';
  /* Field: Content: Gross Case Weight */
  $handler->display->display_options['fields']['field_case_weight']['id'] = 'field_case_weight';
  $handler->display->display_options['fields']['field_case_weight']['table'] = 'field_data_field_case_weight';
  $handler->display->display_options['fields']['field_case_weight']['field'] = 'field_case_weight';
  $handler->display->display_options['fields']['field_case_weight']['label'] = '';
  $handler->display->display_options['fields']['field_case_weight']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_weight']['alter']['text'] = '<strong>Gross weight: </strong>
[field_case_weight]<br/>';
  $handler->display->display_options['fields']['field_case_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_weight']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tie (Layer) */
  $handler->display->display_options['fields']['field_tie']['id'] = 'field_tie';
  $handler->display->display_options['fields']['field_tie']['table'] = 'field_data_field_tie';
  $handler->display->display_options['fields']['field_tie']['field'] = 'field_tie';
  $handler->display->display_options['fields']['field_tie']['label'] = '';
  $handler->display->display_options['fields']['field_tie']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tie']['alter']['text'] = '<strong>Tie: </strong>
[field_tie]<br/>';
  $handler->display->display_options['fields']['field_tie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tie']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: High (Tier) */
  $handler->display->display_options['fields']['field_high']['id'] = 'field_high';
  $handler->display->display_options['fields']['field_high']['table'] = 'field_data_field_high';
  $handler->display->display_options['fields']['field_high']['field'] = 'field_high';
  $handler->display->display_options['fields']['field_high']['label'] = '';
  $handler->display->display_options['fields']['field_high']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_high']['alter']['text'] = '<strong>High: </strong>
[field_high] <br/>';
  $handler->display->display_options['fields']['field_high']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_high']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Item Height */
  $handler->display->display_options['fields']['field_unit_height']['id'] = 'field_unit_height';
  $handler->display->display_options['fields']['field_unit_height']['table'] = 'field_data_field_unit_height';
  $handler->display->display_options['fields']['field_unit_height']['field'] = 'field_unit_height';
  $handler->display->display_options['fields']['field_unit_height']['ui_name'] = 'Item Height';
  $handler->display->display_options['fields']['field_unit_height']['label'] = 'Item';
  $handler->display->display_options['fields']['field_unit_height']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_height']['alter']['text'] = '<strong>Height: </strong>
[field_unit_height]<br/>';
  $handler->display->display_options['fields']['field_unit_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_height']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Item Width */
  $handler->display->display_options['fields']['field_unit_width']['id'] = 'field_unit_width';
  $handler->display->display_options['fields']['field_unit_width']['table'] = 'field_data_field_unit_width';
  $handler->display->display_options['fields']['field_unit_width']['field'] = 'field_unit_width';
  $handler->display->display_options['fields']['field_unit_width']['ui_name'] = 'Item Width';
  $handler->display->display_options['fields']['field_unit_width']['label'] = '';
  $handler->display->display_options['fields']['field_unit_width']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_width']['alter']['text'] = '<strong>Width: </strong>
 [field_unit_width]<br/>';
  $handler->display->display_options['fields']['field_unit_width']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_width']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Item Depth */
  $handler->display->display_options['fields']['field_unit_length']['id'] = 'field_unit_length';
  $handler->display->display_options['fields']['field_unit_length']['table'] = 'field_data_field_unit_length';
  $handler->display->display_options['fields']['field_unit_length']['field'] = 'field_unit_length';
  $handler->display->display_options['fields']['field_unit_length']['ui_name'] = 'Item Depth';
  $handler->display->display_options['fields']['field_unit_length']['label'] = '';
  $handler->display->display_options['fields']['field_unit_length']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_length']['alter']['text'] = '<strong>Depth:</strong> <br/>
[field_unit_length]';
  $handler->display->display_options['fields']['field_unit_length']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_length']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Inner Pack Height */
  $handler->display->display_options['fields']['field_pack_height']['id'] = 'field_pack_height';
  $handler->display->display_options['fields']['field_pack_height']['table'] = 'field_data_field_pack_height';
  $handler->display->display_options['fields']['field_pack_height']['field'] = 'field_pack_height';
  $handler->display->display_options['fields']['field_pack_height']['ui_name'] = 'Inner Pack Height';
  $handler->display->display_options['fields']['field_pack_height']['label'] = 'Inner Pack';
  $handler->display->display_options['fields']['field_pack_height']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pack_height']['alter']['text'] = '<strong>Height: </strong>
[field_pack_height]<br/>';
  $handler->display->display_options['fields']['field_pack_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_height']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Inner Pack Width */
  $handler->display->display_options['fields']['field_pack_width']['id'] = 'field_pack_width';
  $handler->display->display_options['fields']['field_pack_width']['table'] = 'field_data_field_pack_width';
  $handler->display->display_options['fields']['field_pack_width']['field'] = 'field_pack_width';
  $handler->display->display_options['fields']['field_pack_width']['ui_name'] = 'Inner Pack Width';
  $handler->display->display_options['fields']['field_pack_width']['label'] = '';
  $handler->display->display_options['fields']['field_pack_width']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pack_width']['alter']['text'] = '<strong>Width: </strong>
[field_pack_width]<br/>';
  $handler->display->display_options['fields']['field_pack_width']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_width']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Inner Pack Depth */
  $handler->display->display_options['fields']['field_pack_length']['id'] = 'field_pack_length';
  $handler->display->display_options['fields']['field_pack_length']['table'] = 'field_data_field_pack_length';
  $handler->display->display_options['fields']['field_pack_length']['field'] = 'field_pack_length';
  $handler->display->display_options['fields']['field_pack_length']['ui_name'] = 'Inner Pack Depth';
  $handler->display->display_options['fields']['field_pack_length']['label'] = '';
  $handler->display->display_options['fields']['field_pack_length']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pack_length']['alter']['text'] = '<strong>Depth: </strong>
[field_pack_length]<br/>';
  $handler->display->display_options['fields']['field_pack_length']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_length']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Master Case Height */
  $handler->display->display_options['fields']['field_case_height']['id'] = 'field_case_height';
  $handler->display->display_options['fields']['field_case_height']['table'] = 'field_data_field_case_height';
  $handler->display->display_options['fields']['field_case_height']['field'] = 'field_case_height';
  $handler->display->display_options['fields']['field_case_height']['ui_name'] = 'Master Case Height';
  $handler->display->display_options['fields']['field_case_height']['label'] = 'Master Case';
  $handler->display->display_options['fields']['field_case_height']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_height']['alter']['text'] = '<strong>Height: </strong>
 [field_case_height]';
  $handler->display->display_options['fields']['field_case_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_height']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Master Case Width */
  $handler->display->display_options['fields']['field_case_width']['id'] = 'field_case_width';
  $handler->display->display_options['fields']['field_case_width']['table'] = 'field_data_field_case_width';
  $handler->display->display_options['fields']['field_case_width']['field'] = 'field_case_width';
  $handler->display->display_options['fields']['field_case_width']['ui_name'] = 'Master Case Width';
  $handler->display->display_options['fields']['field_case_width']['label'] = '';
  $handler->display->display_options['fields']['field_case_width']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_width']['alter']['text'] = '<strong>Width: </strong> 
[field_case_width]';
  $handler->display->display_options['fields']['field_case_width']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_width']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Master Case Depth */
  $handler->display->display_options['fields']['field_case_length']['id'] = 'field_case_length';
  $handler->display->display_options['fields']['field_case_length']['table'] = 'field_data_field_case_length';
  $handler->display->display_options['fields']['field_case_length']['field'] = 'field_case_length';
  $handler->display->display_options['fields']['field_case_length']['ui_name'] = 'Master Case Depth';
  $handler->display->display_options['fields']['field_case_length']['label'] = '';
  $handler->display->display_options['fields']['field_case_length']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_length']['alter']['text'] = '<strong>Depth:</strong> [field_case_length]';
  $handler->display->display_options['fields']['field_case_length']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_length']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Random Weight Item? */
  $handler->display->display_options['fields']['field_random_weight']['id'] = 'field_random_weight';
  $handler->display->display_options['fields']['field_random_weight']['table'] = 'field_data_field_random_weight';
  $handler->display->display_options['fields']['field_random_weight']['field'] = 'field_random_weight';
  $handler->display->display_options['fields']['field_random_weight']['label'] = '';
  $handler->display->display_options['fields']['field_random_weight']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_random_weight']['alter']['text'] = '<strong>Random weight: </strong>
[field_random_weight]';
  $handler->display->display_options['fields']['field_random_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Shelf Life */
  $handler = $view->new_display('panel_pane', 'Shelf Life', 'shelf_life');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shelf Life';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_temp_zone' => 'field_temp_zone',
    'field_shelf_life_at_dock' => 'field_shelf_life_at_dock',
    'field_shelf_life_retail' => 'field_shelf_life_at_dock',
    'field_shelf_life_at_prod' => 'field_shelf_life_at_dock',
    'field_freight_protection_level' => 'field_freight_protection_level',
    'field_freight_protection_from' => 'field_freight_protection_level',
    'field_enrobed_in_chocolate_' => 'field_freight_protection_level',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temp_zone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_at_dock' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_retail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_at_prod' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_freight_protection_level' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_freight_protection_from' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enrobed_in_chocolate_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Zone */
  $handler->display->display_options['fields']['field_temp_zone']['id'] = 'field_temp_zone';
  $handler->display->display_options['fields']['field_temp_zone']['table'] = 'field_data_field_temp_zone';
  $handler->display->display_options['fields']['field_temp_zone']['field'] = 'field_temp_zone';
  /* Field: Content: Product Shelf Life at Time of Production */
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['id'] = 'field_shelf_life_at_prod';
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['table'] = 'field_data_field_shelf_life_at_prod';
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['field'] = 'field_shelf_life_at_prod';
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['label'] = '';
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shelf_life_at_prod']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Guaranteed Shelf Life at Time of UNFI Possession */
  $handler->display->display_options['fields']['field_shelf_life_at_dock']['id'] = 'field_shelf_life_at_dock';
  $handler->display->display_options['fields']['field_shelf_life_at_dock']['table'] = 'field_data_field_shelf_life_at_dock';
  $handler->display->display_options['fields']['field_shelf_life_at_dock']['field'] = 'field_shelf_life_at_dock';
  $handler->display->display_options['fields']['field_shelf_life_at_dock']['label'] = 'Shelf Life';
  $handler->display->display_options['fields']['field_shelf_life_at_dock']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Guaranteed Shelf Life to Retail */
  $handler->display->display_options['fields']['field_shelf_life_retail']['id'] = 'field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['table'] = 'field_data_field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['field'] = 'field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['label'] = '';
  $handler->display->display_options['fields']['field_shelf_life_retail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shelf_life_retail']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_freight_protection_level']['id'] = 'field_freight_protection_level';
  $handler->display->display_options['fields']['field_freight_protection_level']['table'] = 'field_data_field_freight_protection_level';
  $handler->display->display_options['fields']['field_freight_protection_level']['field'] = 'field_freight_protection_level';
  $handler->display->display_options['fields']['field_freight_protection_level']['label'] = 'Freight Protection';
  $handler->display->display_options['fields']['field_freight_protection_level']['delta_offset'] = '0';
  /* Field: Content: Protect From */
  $handler->display->display_options['fields']['field_freight_protection_from']['id'] = 'field_freight_protection_from';
  $handler->display->display_options['fields']['field_freight_protection_from']['table'] = 'field_data_field_freight_protection_from';
  $handler->display->display_options['fields']['field_freight_protection_from']['field'] = 'field_freight_protection_from';
  $handler->display->display_options['fields']['field_freight_protection_from']['label'] = '';
  $handler->display->display_options['fields']['field_freight_protection_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_freight_protection_from']['delta_offset'] = '0';
  /* Field: Content: Enrobed in Chocolate? */
  $handler->display->display_options['fields']['field_enrobed_in_chocolate_']['id'] = 'field_enrobed_in_chocolate_';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate_']['table'] = 'field_data_field_enrobed_in_chocolate_';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate_']['field'] = 'field_enrobed_in_chocolate_';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate_']['label'] = '';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate_']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Expiration */
  $handler = $view->new_display('panel_pane', 'Expiration', 'expiration');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Expiration';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_type_of_code_life_dating' => 'field_type_of_code_life_dating',
    'field_open_code_life_dating' => 'field_open_code_life_dating',
    'field_closed_code_life_dating' => 'field_closed_code_life_dating',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type_of_code_life_dating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_code_life_dating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_closed_code_life_dating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type of Code Life Dating */
  $handler->display->display_options['fields']['field_type_of_code_life_dating']['id'] = 'field_type_of_code_life_dating';
  $handler->display->display_options['fields']['field_type_of_code_life_dating']['table'] = 'field_data_field_type_of_code_life_dating';
  $handler->display->display_options['fields']['field_type_of_code_life_dating']['field'] = 'field_type_of_code_life_dating';
  /* Field: Content: Open */
  $handler->display->display_options['fields']['field_open_code_life_dating']['id'] = 'field_open_code_life_dating';
  $handler->display->display_options['fields']['field_open_code_life_dating']['table'] = 'field_data_field_open_code_life_dating';
  $handler->display->display_options['fields']['field_open_code_life_dating']['field'] = 'field_open_code_life_dating';
  /* Field: Content: Closed dating */
  $handler->display->display_options['fields']['field_closed_code_life_dating']['id'] = 'field_closed_code_life_dating';
  $handler->display->display_options['fields']['field_closed_code_life_dating']['table'] = 'field_data_field_closed_code_life_dating';
  $handler->display->display_options['fields']['field_closed_code_life_dating']['field'] = 'field_closed_code_life_dating';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Origin */
  $handler = $view->new_display('panel_pane', 'Origin', 'origin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Origin';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_country_of_origin' => 'field_country_of_origin',
    'field_state_providence_of_origin' => 'field_state_providence_of_origin',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_of_origin' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state_providence_of_origin' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Country of Origin */
  $handler->display->display_options['fields']['field_country_of_origin']['id'] = 'field_country_of_origin';
  $handler->display->display_options['fields']['field_country_of_origin']['table'] = 'field_data_field_country_of_origin';
  $handler->display->display_options['fields']['field_country_of_origin']['field'] = 'field_country_of_origin';
  $handler->display->display_options['fields']['field_country_of_origin']['delta_offset'] = '0';
  /* Field: Content: State / Province */
  $handler->display->display_options['fields']['field_state_providence_of_origin']['id'] = 'field_state_providence_of_origin';
  $handler->display->display_options['fields']['field_state_providence_of_origin']['table'] = 'field_data_field_state_providence_of_origin';
  $handler->display->display_options['fields']['field_state_providence_of_origin']['field'] = 'field_state_providence_of_origin';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Item Details */
  $handler = $view->new_display('panel_pane', 'Item Details', 'item_details');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Item Details';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_brand' => 'field_brand',
    'field_product_category' => 'field_product_category',
    'field_product_labels' => 'field_product_labels',
    'field_requested_by' => 'field_requested_by',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_labels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requested_by' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product Labels */
  $handler->display->display_options['fields']['field_product_labels']['id'] = 'field_product_labels';
  $handler->display->display_options['fields']['field_product_labels']['table'] = 'field_data_field_product_labels';
  $handler->display->display_options['fields']['field_product_labels']['field'] = 'field_product_labels';
  $handler->display->display_options['fields']['field_product_labels']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_labels']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Certifications */
  $handler = $view->new_display('panel_pane', 'Certifications', 'certifications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Certifications';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_country_of_origin' => 'field_country_of_origin',
    'field_nop_organic' => 'field_nop_organic',
    'field_organic_certificate' => 'field_nop_organic',
    'field_kosher' => 'field_kosher',
    'field_kosher_certificate' => 'field_kosher',
    'field_fair_trade' => 'field_fair_trade',
    'field_fair_trade_certificate' => 'field_fair_trade',
    'field_specialty' => 'field_specialty',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_of_origin' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nop_organic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organic_certificate' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kosher' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kosher_certificate' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fair_trade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fair_trade_certificate' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_specialty' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Kosher */
  $handler->display->display_options['fields']['field_kosher']['id'] = 'field_kosher';
  $handler->display->display_options['fields']['field_kosher']['table'] = 'field_data_field_kosher';
  $handler->display->display_options['fields']['field_kosher']['field'] = 'field_kosher';
  $handler->display->display_options['fields']['field_kosher']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kosher']['delta_offset'] = '0';
  /* Field: Content: USDA Organic */
  $handler->display->display_options['fields']['field_usda_organic']['id'] = 'field_usda_organic';
  $handler->display->display_options['fields']['field_usda_organic']['table'] = 'field_data_field_usda_organic';
  $handler->display->display_options['fields']['field_usda_organic']['field'] = 'field_usda_organic';
  /* Field: Content: NOP Organic */
  $handler->display->display_options['fields']['field_nop_organic']['id'] = 'field_nop_organic';
  $handler->display->display_options['fields']['field_nop_organic']['table'] = 'field_data_field_nop_organic';
  $handler->display->display_options['fields']['field_nop_organic']['field'] = 'field_nop_organic';
  /* Field: Content: Fair Trade */
  $handler->display->display_options['fields']['field_fair_trade']['id'] = 'field_fair_trade';
  $handler->display->display_options['fields']['field_fair_trade']['table'] = 'field_data_field_fair_trade';
  $handler->display->display_options['fields']['field_fair_trade']['field'] = 'field_fair_trade';
  /* Field: Content: Gluten Free */
  $handler->display->display_options['fields']['field_gluten_free']['id'] = 'field_gluten_free';
  $handler->display->display_options['fields']['field_gluten_free']['table'] = 'field_data_field_gluten_free';
  $handler->display->display_options['fields']['field_gluten_free']['field'] = 'field_gluten_free';
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_specialty']['id'] = 'field_specialty';
  $handler->display->display_options['fields']['field_specialty']['table'] = 'field_data_field_specialty';
  $handler->display->display_options['fields']['field_specialty']['field'] = 'field_specialty';
  /* Field: Content: Third Party Certificates */
  $handler->display->display_options['fields']['field_third_party_certificates']['id'] = 'field_third_party_certificates';
  $handler->display->display_options['fields']['field_third_party_certificates']['table'] = 'field_data_field_third_party_certificates';
  $handler->display->display_options['fields']['field_third_party_certificates']['field'] = 'field_third_party_certificates';
  $handler->display->display_options['fields']['field_third_party_certificates']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Retail Category Management */
  $handler = $view->new_display('panel_pane', 'Retail Category Management', 'coding');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Retail Category Management';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_east_category_editable' => 'field_east_category',
    'field_rcm_category' => 'field_rcm_category',
    'field_west_category' => 'field_west_category',
    'field_west_dept' => 'field_west_dept',
    'field_west_subheader_catalog' => 'field_west_subheader_catalog',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rcm_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_dept' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_subheader_catalog' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: RCM Category */
  $handler->display->display_options['fields']['field_rcm_category']['id'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['field'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Ethnic/Cultural */
  $handler->display->display_options['fields']['field_ethnic_cultural']['id'] = 'field_ethnic_cultural';
  $handler->display->display_options['fields']['field_ethnic_cultural']['table'] = 'field_data_field_ethnic_cultural';
  $handler->display->display_options['fields']['field_ethnic_cultural']['field'] = 'field_ethnic_cultural';
  /* Field: Content: Flavor/Fragrance */
  $handler->display->display_options['fields']['field_flavor']['id'] = 'field_flavor';
  $handler->display->display_options['fields']['field_flavor']['table'] = 'field_data_field_flavor';
  $handler->display->display_options['fields']['field_flavor']['field'] = 'field_flavor';
  /* Field: Content: Form */
  $handler->display->display_options['fields']['field_form']['id'] = 'field_form';
  $handler->display->display_options['fields']['field_form']['table'] = 'field_data_field_form';
  $handler->display->display_options['fields']['field_form']['field'] = 'field_form';
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Field: Content: Ethnic & Gourmet */
  $handler->display->display_options['fields']['field_ethnic_gourmet']['id'] = 'field_ethnic_gourmet';
  $handler->display->display_options['fields']['field_ethnic_gourmet']['table'] = 'field_data_field_ethnic_gourmet';
  $handler->display->display_options['fields']['field_ethnic_gourmet']['field'] = 'field_ethnic_gourmet';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Additives */
  $handler = $view->new_display('panel_pane', 'Additives', 'additives');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Additives';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Contains (editable) */
  $handler->display->display_options['fields']['field_contains_attributes_editable']['id'] = 'field_contains_attributes_editable';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['table'] = 'field_data_field_contains_attributes';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['field'] = 'field_contains_attributes_editable';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['label'] = 'Contains';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Fat Content (editable) */
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['id'] = 'field_fat_content_attributes_editable';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['table'] = 'field_data_field_fat_content_attributes';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['field'] = 'field_fat_content_attributes_editable';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['label'] = 'Fat Content';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Free of (editable) */
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['id'] = 'field_free_of_attributes_editable';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['table'] = 'field_data_field_free_of_attributes';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['field'] = 'field_free_of_attributes_editable';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['label'] = 'Free of';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Salt Content (editable) */
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['id'] = 'field_salt_content_attributes_editable';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['table'] = 'field_data_field_salt_content_attributes';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['field'] = 'field_salt_content_attributes_editable';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['label'] = 'Salt Content';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Sweetener (editable) */
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['id'] = 'field_sweetener_attributes_editable';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['table'] = 'field_data_field_sweetener_attributes';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['field'] = 'field_sweetener_attributes_editable';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['label'] = 'Sweetener';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_value'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Dietary Information */
  $handler = $view->new_display('panel_pane', 'Dietary Information', 'dietary_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dietary Information';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Dietary Preference */
  $handler->display->display_options['fields']['field_dietary_preference_attribu']['id'] = 'field_dietary_preference_attribu';
  $handler->display->display_options['fields']['field_dietary_preference_attribu']['table'] = 'field_data_field_dietary_preference_attribu';
  $handler->display->display_options['fields']['field_dietary_preference_attribu']['field'] = 'field_dietary_preference_attribu';
  $handler->display->display_options['fields']['field_dietary_preference_attribu']['delta_offset'] = '0';
  /* Field: Content: Ethnic */
  $handler->display->display_options['fields']['field_ethnic_attributes']['id'] = 'field_ethnic_attributes';
  $handler->display->display_options['fields']['field_ethnic_attributes']['table'] = 'field_data_field_ethnic_attributes';
  $handler->display->display_options['fields']['field_ethnic_attributes']['field'] = 'field_ethnic_attributes';
  $handler->display->display_options['fields']['field_ethnic_attributes']['delta_offset'] = '0';
  /* Field: Content: Clean Ingredients */
  $handler->display->display_options['fields']['field_clean_ingredients_bool']['id'] = 'field_clean_ingredients_bool';
  $handler->display->display_options['fields']['field_clean_ingredients_bool']['table'] = 'field_data_field_clean_ingredients_bool';
  $handler->display->display_options['fields']['field_clean_ingredients_bool']['field'] = 'field_clean_ingredients_bool';
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients']['id'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['table'] = 'field_data_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['field'] = 'field_ingredients';
  /* Field: Content: Major Allergen */
  $handler->display->display_options['fields']['field_major_allergen_attributes']['id'] = 'field_major_allergen_attributes';
  $handler->display->display_options['fields']['field_major_allergen_attributes']['table'] = 'field_data_field_major_allergen_attributes';
  $handler->display->display_options['fields']['field_major_allergen_attributes']['field'] = 'field_major_allergen_attributes';
  $handler->display->display_options['fields']['field_major_allergen_attributes']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_attributes']['id'] = 'field_other_attributes';
  $handler->display->display_options['fields']['field_other_attributes']['table'] = 'field_data_field_other_attributes';
  $handler->display->display_options['fields']['field_other_attributes']['field'] = 'field_other_attributes';
  $handler->display->display_options['fields']['field_other_attributes']['delta_offset'] = '0';
  /* Field: Content: Processing */
  $handler->display->display_options['fields']['field_processing_attributes']['id'] = 'field_processing_attributes';
  $handler->display->display_options['fields']['field_processing_attributes']['table'] = 'field_data_field_processing_attributes';
  $handler->display->display_options['fields']['field_processing_attributes']['field'] = 'field_processing_attributes';
  $handler->display->display_options['fields']['field_processing_attributes']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Basic Info */
  $handler = $view->new_display('panel_pane', 'Basic Info', 'basic_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Basic Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_unit_upc' => 'field_unit_upc',
    'field_pack_upc' => 'field_pack_upc',
    'field_case_upc' => 'field_case_upc',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_size' => 'field_size',
    'field_unit_of_measure' => 'field_unit_of_measure',
    'field_inner_pack' => 'field_inner_pack',
    'field_case_pack' => 'field_case_pack',
    'field_mc_pack' => 'field_mc_pack',
    'field_mc_upc_same_as_item_upc' => 'field_mc_upc_same_as_item_upc',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_upc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_upc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_upc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_of_measure' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inner_pack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_pack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mc_pack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mc_upc_same_as_item_upc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Inner Pack UPC */
  $handler->display->display_options['fields']['field_pack_upc']['id'] = 'field_pack_upc';
  $handler->display->display_options['fields']['field_pack_upc']['table'] = 'field_data_field_pack_upc';
  $handler->display->display_options['fields']['field_pack_upc']['field'] = 'field_pack_upc';
  /* Field: Content: Case or Master Case UPC */
  $handler->display->display_options['fields']['field_case_upc']['id'] = 'field_case_upc';
  $handler->display->display_options['fields']['field_case_upc']['table'] = 'field_data_field_case_upc';
  $handler->display->display_options['fields']['field_case_upc']['field'] = 'field_case_upc';
  /* Field: Content: Manufacturer Part Number */
  $handler->display->display_options['fields']['field_part_number']['id'] = 'field_part_number';
  $handler->display->display_options['fields']['field_part_number']['table'] = 'field_data_field_part_number';
  $handler->display->display_options['fields']['field_part_number']['field'] = 'field_part_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Selling Unit */
  $handler->display->display_options['fields']['field_selling_unit']['id'] = 'field_selling_unit';
  $handler->display->display_options['fields']['field_selling_unit']['table'] = 'field_data_field_selling_unit';
  $handler->display->display_options['fields']['field_selling_unit']['field'] = 'field_selling_unit';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  /* Field: Content: Inner Pack */
  $handler->display->display_options['fields']['field_inner_pack']['id'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['table'] = 'field_data_field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['field'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Master Case Pack */
  $handler->display->display_options['fields']['field_mc_pack']['id'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['table'] = 'field_data_field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['field'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: East Item Number */
  $handler->display->display_options['fields']['field_ubs_number']['id'] = 'field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['table'] = 'field_data_field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['field'] = 'field_ubs_number';
  /* Field: Content: West Item Number */
  $handler->display->display_options['fields']['field_wbs_number']['id'] = 'field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['table'] = 'field_data_field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['field'] = 'field_wbs_number';
  /* Field: Content: Wholesale Price East */
  $handler->display->display_options['fields']['field_wholesale_price_east']['id'] = 'field_wholesale_price_east';
  $handler->display->display_options['fields']['field_wholesale_price_east']['table'] = 'field_data_field_wholesale_price_east';
  $handler->display->display_options['fields']['field_wholesale_price_east']['field'] = 'field_wholesale_price_east';
  $handler->display->display_options['fields']['field_wholesale_price_east']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: SRP East */
  $handler->display->display_options['fields']['field_srp_east']['id'] = 'field_srp_east';
  $handler->display->display_options['fields']['field_srp_east']['table'] = 'field_data_field_srp_east';
  $handler->display->display_options['fields']['field_srp_east']['field'] = 'field_srp_east';
  $handler->display->display_options['fields']['field_srp_east']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Wholesale Price West */
  $handler->display->display_options['fields']['field_wholesale_price_west']['id'] = 'field_wholesale_price_west';
  $handler->display->display_options['fields']['field_wholesale_price_west']['table'] = 'field_data_field_wholesale_price_west';
  $handler->display->display_options['fields']['field_wholesale_price_west']['field'] = 'field_wholesale_price_west';
  $handler->display->display_options['fields']['field_wholesale_price_west']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: SRP West */
  $handler->display->display_options['fields']['field_srp_west']['id'] = 'field_srp_west';
  $handler->display->display_options['fields']['field_srp_west']['table'] = 'field_data_field_srp_west';
  $handler->display->display_options['fields']['field_srp_west']['field'] = 'field_srp_west';
  $handler->display->display_options['fields']['field_srp_west']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Choose Cost */
  $handler->display->display_options['fields']['field_use_mcc_west']['id'] = 'field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west']['table'] = 'field_data_field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west']['field'] = 'field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west']['label'] = '';
  $handler->display->display_options['fields']['field_use_mcc_west']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_use_mcc_west']['element_label_colon'] = FALSE;
  /* Field: Content: UNFI East */
  $handler->display->display_options['fields']['field_warehouses_east']['id'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['table'] = 'field_data_field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['field'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_warehouses_east']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_east']['delta_offset'] = '0';
  /* Field: Content: UNFI West */
  $handler->display->display_options['fields']['field_warehouses_west']['id'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['field'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['label'] = 'Region';
  $handler->display->display_options['fields']['field_warehouses_west']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Beverages */
  $handler = $view->new_display('panel_pane', 'Beverages', 'beverages');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beverages';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Beverage Container Deposit */
  $handler->display->display_options['fields']['field_beverage_container']['id'] = 'field_beverage_container';
  $handler->display->display_options['fields']['field_beverage_container']['table'] = 'field_data_field_beverage_container';
  $handler->display->display_options['fields']['field_beverage_container']['field'] = 'field_beverage_container';
  $handler->display->display_options['fields']['field_beverage_container']['delta_offset'] = '0';
  /* Field: Content: Bottle Color */
  $handler->display->display_options['fields']['field_bottle_color']['id'] = 'field_bottle_color';
  $handler->display->display_options['fields']['field_bottle_color']['table'] = 'field_data_field_bottle_color';
  $handler->display->display_options['fields']['field_bottle_color']['field'] = 'field_bottle_color';
  /* Field: Content: Container Type */
  $handler->display->display_options['fields']['field_container_type']['id'] = 'field_container_type';
  $handler->display->display_options['fields']['field_container_type']['table'] = 'field_data_field_container_type';
  $handler->display->display_options['fields']['field_container_type']['field'] = 'field_container_type';
  /* Field: Content: Chicago Water Tax */
  $handler->display->display_options['fields']['field_chicago_water_tax']['id'] = 'field_chicago_water_tax';
  $handler->display->display_options['fields']['field_chicago_water_tax']['table'] = 'field_data_field_chicago_water_tax';
  $handler->display->display_options['fields']['field_chicago_water_tax']['field'] = 'field_chicago_water_tax';
  /* Field: Content: Baltimore Beverage Tax */
  $handler->display->display_options['fields']['field_baltimore_beverage_tax']['id'] = 'field_baltimore_beverage_tax';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax']['table'] = 'field_data_field_baltimore_beverage_tax';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax']['field'] = 'field_baltimore_beverage_tax';
  /* Field: Content: Berkeley Beverage Tax */
  $handler->display->display_options['fields']['field_berkeley_beverage_tax']['id'] = 'field_berkeley_beverage_tax';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax']['table'] = 'field_data_field_berkeley_beverage_tax';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax']['field'] = 'field_berkeley_beverage_tax';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Shipper Components */
  $handler = $view->new_display('panel_pane', 'Shipper Components', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shipper Components';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Is this item a shipper? */
  $handler->display->display_options['fields']['field_shipper']['id'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['table'] = 'field_data_field_shipper';
  $handler->display->display_options['fields']['field_shipper']['field'] = 'field_shipper';
  /* Field: Content: Shipper Components */
  $handler->display->display_options['fields']['field_shipper_components']['id'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['field'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_shipper_components']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_shipper_components']['delta_offset'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Vendor Warehouse Locations */
  $handler = $view->new_display('panel_pane', 'Vendor Warehouse Locations', 'vendor_warehouse_locations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vendor Warehouse Locations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor Warehouse Locations */
  $handler->display->display_options['fields']['field_pick_up_locations']['id'] = 'field_pick_up_locations';
  $handler->display->display_options['fields']['field_pick_up_locations']['table'] = 'field_data_field_pick_up_locations';
  $handler->display->display_options['fields']['field_pick_up_locations']['field'] = 'field_pick_up_locations';
  $handler->display->display_options['fields']['field_pick_up_locations']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pick_up_locations']['alter']['path'] = 'node/[field_pick_up_locations-target_id]';
  $handler->display->display_options['fields']['field_pick_up_locations']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pick_up_locations']['delta_offset'] = '0';
  /* Field: Content: SRM Assigned East Vendor Warehouse Location */
  $handler->display->display_options['fields']['field_assigned_pick_location']['id'] = 'field_assigned_pick_location';
  $handler->display->display_options['fields']['field_assigned_pick_location']['table'] = 'field_data_field_assigned_pick_location';
  $handler->display->display_options['fields']['field_assigned_pick_location']['field'] = 'field_assigned_pick_location';
  $handler->display->display_options['fields']['field_assigned_pick_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: SRM Assigned West Vendor Warehouse Location */
  $handler->display->display_options['fields']['field_assigned_pick_location_w']['id'] = 'field_assigned_pick_location_w';
  $handler->display->display_options['fields']['field_assigned_pick_location_w']['table'] = 'field_data_field_assigned_pick_location_w';
  $handler->display->display_options['fields']['field_assigned_pick_location_w']['field'] = 'field_assigned_pick_location_w';
  $handler->display->display_options['fields']['field_assigned_pick_location_w']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: East Vendor  */
  $handler->display->display_options['fields']['field_east_vendor_']['id'] = 'field_east_vendor_';
  $handler->display->display_options['fields']['field_east_vendor_']['table'] = 'field_data_field_east_vendor_';
  $handler->display->display_options['fields']['field_east_vendor_']['field'] = 'field_east_vendor_';
  $handler->display->display_options['fields']['field_east_vendor_']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_east_vendor_']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  /* Field: Content: West Vendor */
  $handler->display->display_options['fields']['field_west_vendor']['id'] = 'field_west_vendor';
  $handler->display->display_options['fields']['field_west_vendor']['table'] = 'field_data_field_west_vendor';
  $handler->display->display_options['fields']['field_west_vendor']['field'] = 'field_west_vendor';
  $handler->display->display_options['fields']['field_west_vendor']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_west_vendor']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Promotions */
  $handler = $view->new_display('panel_pane', 'Promotions', 'promotions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promotions';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: First Available Ship Date */
  $handler->display->display_options['fields']['field_need_by_date']['id'] = 'field_need_by_date';
  $handler->display->display_options['fields']['field_need_by_date']['table'] = 'field_data_field_need_by_date';
  $handler->display->display_options['fields']['field_need_by_date']['field'] = 'field_need_by_date';
  $handler->display->display_options['fields']['field_need_by_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: New Product Discount */
  $handler->display->display_options['fields']['field_new_product_discount']['id'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['table'] = 'field_data_field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['field'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: New Product Discount Type */
  $handler->display->display_options['fields']['field_new_product_discount_type']['id'] = 'field_new_product_discount_type';
  $handler->display->display_options['fields']['field_new_product_discount_type']['table'] = 'field_data_field_new_product_discount_type';
  $handler->display->display_options['fields']['field_new_product_discount_type']['field'] = 'field_new_product_discount_type';
  /* Field: Content: Pre-90 Day Discount? */
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['id'] = 'field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['table'] = 'field_data_field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['field'] = 'field_pre_90_day_discount_';
  /* Field: Content: Pre-90 Order Dates */
  $handler->display->display_options['fields']['field_pre_90_order_dates']['id'] = 'field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['table'] = 'field_data_field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['field'] = 'field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: UNFI Buy Dates */
  $handler->display->display_options['fields']['field_unfi_buy_dates']['id'] = 'field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['table'] = 'field_data_field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['field'] = 'field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: UNFI Contribution */
  $handler->display->display_options['fields']['field_unfi_contribution']['id'] = 'field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['table'] = 'field_data_field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['field'] = 'field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UNFI Only Approved Manufacturer Chargeback */
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['id'] = 'field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['table'] = 'field_data_field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['field'] = 'field_unfi_only_approved_mcb';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Edit Packaging Specs */
  $handler = $view->new_display('page', 'Edit Packaging Specs', 'edit_packaging_specs');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_package_type_editable' => 'field_package_type_editable',
    'field_case_weight_editable' => 'field_package_type_editable',
    'field_tie_editable' => 'field_package_type_editable',
    'field_high_editable' => 'field_package_type_editable',
    'field_unit_height_editable' => 'field_unit_height_editable',
    'field_unit_width_editable' => 'field_unit_height_editable',
    'field_unit_length_editable' => 'field_unit_height_editable',
    'field_pack_height_editable' => 'field_pack_height_editable',
    'field_pack_width_editable' => 'field_pack_height_editable',
    'field_pack_length_editable' => 'field_pack_height_editable',
    'field_case_height_editable' => 'field_case_height_editable',
    'field_case_width_editable' => 'field_case_height_editable',
    'field_case_length_editable' => 'field_case_height_editable',
    'field_random_weight_editable' => 'field_case_height_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_package_type_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_weight_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tie_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_high_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_height_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_width_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_length_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_height_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_width_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_length_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_height_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_width_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_length_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_random_weight_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Retail Unit Package Type (editable) */
  $handler->display->display_options['fields']['field_package_type_editable']['id'] = 'field_package_type_editable';
  $handler->display->display_options['fields']['field_package_type_editable']['table'] = 'field_data_field_package_type';
  $handler->display->display_options['fields']['field_package_type_editable']['field'] = 'field_package_type_editable';
  $handler->display->display_options['fields']['field_package_type_editable']['label'] = 'Packaging';
  $handler->display->display_options['fields']['field_package_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_package_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_package_type_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_package_type_editable']['suppress_value'] = 1;
  /* Field: Content: Gross Case Weight (editable) */
  $handler->display->display_options['fields']['field_case_weight_editable']['id'] = 'field_case_weight_editable';
  $handler->display->display_options['fields']['field_case_weight_editable']['table'] = 'field_data_field_case_weight';
  $handler->display->display_options['fields']['field_case_weight_editable']['field'] = 'field_case_weight_editable';
  $handler->display->display_options['fields']['field_case_weight_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_weight_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_weight_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_weight_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_weight_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_weight_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_weight_editable']['suppress_value'] = 1;
  /* Field: Content: Tie (Layer) (editable) */
  $handler->display->display_options['fields']['field_tie_editable']['id'] = 'field_tie_editable';
  $handler->display->display_options['fields']['field_tie_editable']['table'] = 'field_data_field_tie';
  $handler->display->display_options['fields']['field_tie_editable']['field'] = 'field_tie_editable';
  $handler->display->display_options['fields']['field_tie_editable']['label'] = '';
  $handler->display->display_options['fields']['field_tie_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tie_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_tie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_tie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_tie_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_tie_editable']['suppress_value'] = 1;
  /* Field: Content: High (Tier) (editable) */
  $handler->display->display_options['fields']['field_high_editable']['id'] = 'field_high_editable';
  $handler->display->display_options['fields']['field_high_editable']['table'] = 'field_data_field_high';
  $handler->display->display_options['fields']['field_high_editable']['field'] = 'field_high_editable';
  $handler->display->display_options['fields']['field_high_editable']['label'] = '';
  $handler->display->display_options['fields']['field_high_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_high_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_high_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_high_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_high_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_high_editable']['suppress_value'] = 1;
  /* Field: Item Height */
  $handler->display->display_options['fields']['field_unit_height_editable']['id'] = 'field_unit_height_editable';
  $handler->display->display_options['fields']['field_unit_height_editable']['table'] = 'field_data_field_unit_height';
  $handler->display->display_options['fields']['field_unit_height_editable']['field'] = 'field_unit_height_editable';
  $handler->display->display_options['fields']['field_unit_height_editable']['ui_name'] = 'Item Height';
  $handler->display->display_options['fields']['field_unit_height_editable']['label'] = 'Item';
  $handler->display->display_options['fields']['field_unit_height_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_height_editable']['alter']['text'] = '<strong>Height x Width x Depth:</strong>
[field_unit_height_editable]';
  $handler->display->display_options['fields']['field_unit_height_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_height_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_unit_height_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_height_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_height_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_unit_height_editable']['suppress_value'] = 1;
  /* Field: Item Width */
  $handler->display->display_options['fields']['field_unit_width_editable']['id'] = 'field_unit_width_editable';
  $handler->display->display_options['fields']['field_unit_width_editable']['table'] = 'field_data_field_unit_width';
  $handler->display->display_options['fields']['field_unit_width_editable']['field'] = 'field_unit_width_editable';
  $handler->display->display_options['fields']['field_unit_width_editable']['ui_name'] = 'Item Width';
  $handler->display->display_options['fields']['field_unit_width_editable']['label'] = '';
  $handler->display->display_options['fields']['field_unit_width_editable']['alter']['text'] = '<strong>Width:</strong> [field_unit_width_editable';
  $handler->display->display_options['fields']['field_unit_width_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_width_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_unit_width_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_width_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_width_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_unit_width_editable']['suppress_value'] = 1;
  /* Field: Item Depth */
  $handler->display->display_options['fields']['field_unit_length_editable']['id'] = 'field_unit_length_editable';
  $handler->display->display_options['fields']['field_unit_length_editable']['table'] = 'field_data_field_unit_length';
  $handler->display->display_options['fields']['field_unit_length_editable']['field'] = 'field_unit_length_editable';
  $handler->display->display_options['fields']['field_unit_length_editable']['ui_name'] = 'Item Depth';
  $handler->display->display_options['fields']['field_unit_length_editable']['label'] = '';
  $handler->display->display_options['fields']['field_unit_length_editable']['alter']['text'] = '<strong>Depth:</strong> [field_unit_length_editable]';
  $handler->display->display_options['fields']['field_unit_length_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_length_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_unit_length_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_length_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_length_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_unit_length_editable']['suppress_value'] = 1;
  /* Field: Inner Pack Height */
  $handler->display->display_options['fields']['field_pack_height_editable']['id'] = 'field_pack_height_editable';
  $handler->display->display_options['fields']['field_pack_height_editable']['table'] = 'field_data_field_pack_height';
  $handler->display->display_options['fields']['field_pack_height_editable']['field'] = 'field_pack_height_editable';
  $handler->display->display_options['fields']['field_pack_height_editable']['ui_name'] = 'Inner Pack Height';
  $handler->display->display_options['fields']['field_pack_height_editable']['label'] = 'Inner Pack';
  $handler->display->display_options['fields']['field_pack_height_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_height_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_pack_height_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pack_height_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pack_height_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_pack_height_editable']['suppress_value'] = 1;
  /* Field: Inner Pack Width */
  $handler->display->display_options['fields']['field_pack_width_editable']['id'] = 'field_pack_width_editable';
  $handler->display->display_options['fields']['field_pack_width_editable']['table'] = 'field_data_field_pack_width';
  $handler->display->display_options['fields']['field_pack_width_editable']['field'] = 'field_pack_width_editable';
  $handler->display->display_options['fields']['field_pack_width_editable']['ui_name'] = 'Inner Pack Width';
  $handler->display->display_options['fields']['field_pack_width_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pack_width_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_width_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pack_width_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pack_width_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pack_width_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_pack_width_editable']['suppress_value'] = 1;
  /* Field: Inner Pack Depth */
  $handler->display->display_options['fields']['field_pack_length_editable']['id'] = 'field_pack_length_editable';
  $handler->display->display_options['fields']['field_pack_length_editable']['table'] = 'field_data_field_pack_length';
  $handler->display->display_options['fields']['field_pack_length_editable']['field'] = 'field_pack_length_editable';
  $handler->display->display_options['fields']['field_pack_length_editable']['ui_name'] = 'Inner Pack Depth';
  $handler->display->display_options['fields']['field_pack_length_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pack_length_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_length_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pack_length_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pack_length_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pack_length_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pack_length_editable']['suppress_value'] = 1;
  /* Field: Master Case Height */
  $handler->display->display_options['fields']['field_case_height_editable']['id'] = 'field_case_height_editable';
  $handler->display->display_options['fields']['field_case_height_editable']['table'] = 'field_data_field_case_height';
  $handler->display->display_options['fields']['field_case_height_editable']['field'] = 'field_case_height_editable';
  $handler->display->display_options['fields']['field_case_height_editable']['ui_name'] = 'Master Case Height';
  $handler->display->display_options['fields']['field_case_height_editable']['label'] = 'Master Case';
  $handler->display->display_options['fields']['field_case_height_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_height_editable']['alter']['text'] = '<strong>Height:</strong> [field_case_height_editable]';
  $handler->display->display_options['fields']['field_case_height_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_height_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_height_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_height_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_height_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_case_height_editable']['suppress_value'] = 1;
  /* Field: Master Case Width */
  $handler->display->display_options['fields']['field_case_width_editable']['id'] = 'field_case_width_editable';
  $handler->display->display_options['fields']['field_case_width_editable']['table'] = 'field_data_field_case_width';
  $handler->display->display_options['fields']['field_case_width_editable']['field'] = 'field_case_width_editable';
  $handler->display->display_options['fields']['field_case_width_editable']['ui_name'] = 'Master Case Width';
  $handler->display->display_options['fields']['field_case_width_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_width_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_width_editable']['alter']['text'] = '<strong>Width:</strong> [field_case_width_editable]';
  $handler->display->display_options['fields']['field_case_width_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_width_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_width_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_width_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_width_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_case_width_editable']['suppress_value'] = 1;
  /* Field: Master Case Depth */
  $handler->display->display_options['fields']['field_case_length_editable']['id'] = 'field_case_length_editable';
  $handler->display->display_options['fields']['field_case_length_editable']['table'] = 'field_data_field_case_length';
  $handler->display->display_options['fields']['field_case_length_editable']['field'] = 'field_case_length_editable';
  $handler->display->display_options['fields']['field_case_length_editable']['ui_name'] = 'Master Case Depth';
  $handler->display->display_options['fields']['field_case_length_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_length_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_length_editable']['alter']['text'] = '<strong>Depth:</strong> [field_case_length_editable]';
  $handler->display->display_options['fields']['field_case_length_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_length_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_length_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_length_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_length_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_case_length_editable']['suppress_value'] = 1;
  /* Field: Content: Random Weight Item? (editable) */
  $handler->display->display_options['fields']['field_random_weight_editable']['id'] = 'field_random_weight_editable';
  $handler->display->display_options['fields']['field_random_weight_editable']['table'] = 'field_data_field_random_weight';
  $handler->display->display_options['fields']['field_random_weight_editable']['field'] = 'field_random_weight_editable';
  $handler->display->display_options['fields']['field_random_weight_editable']['label'] = '';
  $handler->display->display_options['fields']['field_random_weight_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_random_weight_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_random_weight_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_random_weight_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_random_weight_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/packaging-specs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Packaging Specs';
  $handler->display->display_options['menu']['weight'] = '13';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Warehouse Locations (East) */
  $handler = $view->new_display('page', 'Edit Warehouse Locations (East)', 'edit_warehouse_locations_east');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_warehouses_east_editable' => 'field_warehouses_east_editable',
    'field_warehouses_select_editable' => 'field_warehouses_select_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_east_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_select_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UNFI East (editable) */
  $handler->display->display_options['fields']['field_warehouses_east_editable']['id'] = 'field_warehouses_east_editable';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['table'] = 'field_data_field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['field'] = 'field_warehouses_east_editable';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['label'] = 'UNFI East';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_east_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_warehouses_east_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_warehouses_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_warehouses_east_editable']['suppress_value'] = 1;
  /* Field: Content: Select Nutrition (editable) */
  $handler->display->display_options['fields']['field_warehouses_select_editable']['id'] = 'field_warehouses_select_editable';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['table'] = 'field_data_field_warehouses_select';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['field'] = 'field_warehouses_select_editable';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['label'] = 'Select Nutrition';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_select_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_warehouses_select_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_warehouses_select_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_warehouses_select_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/warehouse-locations/east';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'East Warehouse Locations';
  $handler->display->display_options['menu']['weight'] = '14';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Expiration */
  $handler = $view->new_display('page', 'Edit Expiration', 'edit_expiration');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_type_of_code_life_dating_editable' => 'field_type_of_code_life_dating_editable',
    'field_open_code_life_dating_editable' => 'field_type_of_code_life_dating_editable',
    'field_closed_code_life_dating_editable' => 'field_closed_code_life_dating_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type_of_code_life_dating_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_code_life_dating_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_closed_code_life_dating_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type of Code Life Dating (editable) */
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['id'] = 'field_type_of_code_life_dating_editable';
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['table'] = 'field_data_field_type_of_code_life_dating';
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['field'] = 'field_type_of_code_life_dating_editable';
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['label'] = 'Type of Code Life Dating';
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_type_of_code_life_dating_editable']['suppress_value'] = 1;
  /* Field: Content: Open (editable) */
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['id'] = 'field_open_code_life_dating_editable';
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['table'] = 'field_data_field_open_code_life_dating';
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['field'] = 'field_open_code_life_dating_editable';
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['label'] = 'Open';
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_open_code_life_dating_editable']['suppress_value'] = 1;
  /* Field: Content: Closed dating (editable) */
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['id'] = 'field_closed_code_life_dating_editable';
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['table'] = 'field_data_field_closed_code_life_dating';
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['field'] = 'field_closed_code_life_dating_editable';
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['label'] = 'Closed dating';
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_closed_code_life_dating_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/expiration';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Expiration';
  $handler->display->display_options['menu']['weight'] = '11';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Warehouse Locations (West) */
  $handler = $view->new_display('page', 'Edit Warehouse Locations (West)', 'edit_warehouse_locations_west');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_warehouses_west_editable' => 'field_warehouses_west_editable',
    'field_warehouses_select_editable' => 'field_warehouses_select_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_west_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouses_select_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UNFI West (editable) */
  $handler->display->display_options['fields']['field_warehouses_west_editable']['id'] = 'field_warehouses_west_editable';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['field'] = 'field_warehouses_west_editable';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['label'] = 'UNFI West';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_warehouses_west_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_warehouses_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_warehouses_west_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/warehouse-locations/west';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'West Warehouse Locations';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Beverages */
  $handler = $view->new_display('page', 'Edit Beverages', 'edit_beverages');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_beverage_container_editable' => 'field_beverage_container_editable',
    'field_bottle_color_editable' => 'field_container_type_editable',
    'field_container_type_editable' => 'field_container_type_editable',
    'field_chicago_water_tax_editable' => 'field_chicago_water_tax_editable',
    'field_baltimore_beverage_tax_editable' => 'field_chicago_water_tax_editable',
    'field_berkeley_beverage_tax_editable' => 'field_chicago_water_tax_editable',
    'field_berkeley_beverage_tax_editable_1' => 'field_chicago_water_tax_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beverage_container_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bottle_color_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_container_type_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chicago_water_tax_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_baltimore_beverage_tax_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_berkeley_beverage_tax_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_berkeley_beverage_tax_editable_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Beverage Container Deposit (editable) */
  $handler->display->display_options['fields']['field_beverage_container_editable']['id'] = 'field_beverage_container_editable';
  $handler->display->display_options['fields']['field_beverage_container_editable']['table'] = 'field_data_field_beverage_container';
  $handler->display->display_options['fields']['field_beverage_container_editable']['field'] = 'field_beverage_container_editable';
  $handler->display->display_options['fields']['field_beverage_container_editable']['label'] = 'Beverage Info';
  $handler->display->display_options['fields']['field_beverage_container_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_beverage_container_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_beverage_container_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_beverage_container_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_beverage_container_editable']['suppress_value'] = 1;
  /* Field: Content: Bottle Color (editable) */
  $handler->display->display_options['fields']['field_bottle_color_editable']['id'] = 'field_bottle_color_editable';
  $handler->display->display_options['fields']['field_bottle_color_editable']['table'] = 'field_data_field_bottle_color';
  $handler->display->display_options['fields']['field_bottle_color_editable']['field'] = 'field_bottle_color_editable';
  $handler->display->display_options['fields']['field_bottle_color_editable']['label'] = 'Bottle Color';
  $handler->display->display_options['fields']['field_bottle_color_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_bottle_color_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_bottle_color_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_bottle_color_editable']['suppress_value'] = 1;
  /* Field: Content: Container Type (editable) */
  $handler->display->display_options['fields']['field_container_type_editable']['id'] = 'field_container_type_editable';
  $handler->display->display_options['fields']['field_container_type_editable']['table'] = 'field_data_field_container_type';
  $handler->display->display_options['fields']['field_container_type_editable']['field'] = 'field_container_type_editable';
  $handler->display->display_options['fields']['field_container_type_editable']['label'] = 'Container Type';
  $handler->display->display_options['fields']['field_container_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_container_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_container_type_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_container_type_editable']['suppress_value'] = 0;
  /* Field: Content: Chicago Water Tax (editable) */
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['id'] = 'field_chicago_water_tax_editable';
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['table'] = 'field_data_field_chicago_water_tax';
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['field'] = 'field_chicago_water_tax_editable';
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['label'] = 'Taxes';
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_chicago_water_tax_editable']['suppress_value'] = 1;
  /* Field: Content: Baltimore Beverage Tax (editable) */
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['id'] = 'field_baltimore_beverage_tax_editable';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['table'] = 'field_data_field_baltimore_beverage_tax';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['field'] = 'field_baltimore_beverage_tax_editable';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['label'] = 'Baltimore Beverage Tax';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_baltimore_beverage_tax_editable']['suppress_value'] = 1;
  /* Field: Content: Berkeley Beverage Tax (editable) */
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['id'] = 'field_berkeley_beverage_tax_editable_1';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['table'] = 'field_data_field_berkeley_beverage_tax';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['field'] = 'field_berkeley_beverage_tax_editable';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_berkeley_beverage_tax_editable_1']['suppress_value'] = 0;
  $handler->display->display_options['path'] = 'node/%/edit-products/beverages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Beverages';
  $handler->display->display_options['menu']['weight'] = '12';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Marketing */
  $handler = $view->new_display('page', 'Edit Marketing', 'edit_marketing');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_primary_image_editable' => 'field_primary_image_editable',
    'field_print_in_publications_editable' => 'field_print_in_publications_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_primary_image_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_print_in_publications_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product Image (editable) */
  $handler->display->display_options['fields']['field_primary_image_editable']['id'] = 'field_primary_image_editable';
  $handler->display->display_options['fields']['field_primary_image_editable']['table'] = 'field_data_field_primary_image';
  $handler->display->display_options['fields']['field_primary_image_editable']['field'] = 'field_primary_image_editable';
  $handler->display->display_options['fields']['field_primary_image_editable']['label'] = 'Product Image';
  $handler->display->display_options['fields']['field_primary_image_editable']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_primary_image_editable']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_primary_image_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_primary_image_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_primary_image_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_primary_image_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/marketing';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Marketing';
  $handler->display->display_options['menu']['weight'] = '18';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Coding Internal Info */
  $handler = $view->new_display('page', 'Edit Coding Internal Info', 'edit_unfi_internal_info');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    12 => '12',
    4 => '4',
    5 => '5',
    6 => '6',
    13 => '13',
    14 => '14',
    11 => '11',
    7 => '7',
    8 => '8',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_west_category_editable' => 'field_west_category_editable',
    'field_west_dept_editable' => 'field_west_category_editable',
    'field_west_subheader_catalog_editable' => 'field_west_category_editable',
    'field_east_category_editable' => 'field_east_category_editable',
    'field_east_catalog_header_editable' => 'field_east_category_editable',
    'field_warehouse_group_editable' => 'field_warehouse_group_editable',
    'field_national_selling_pack_editable' => 'field_warehouse_group_editable',
    'field_exclusive_editable' => 'field_warehouse_group_editable',
    'field_catalog_brand_editable' => 'field_warehouse_group_editable',
    'field_east_brand_editable' => 'field_east_category_editable',
    'field_west_brand_editable' => 'field_west_category_editable',
    'field_print_in_publications_editable' => 'field_warehouse_group_editable',
    'field_wf_exclusive_end_date_editable' => 'field_warehouse_group_editable',
    'field_urgent_editable' => 'field_warehouse_group_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_dept_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_subheader_catalog_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_catalog_header_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouse_group_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_national_selling_pack_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exclusive_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog_brand_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_brand_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_brand_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_print_in_publications_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_wf_exclusive_end_date_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_urgent_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: West Category (editable) */
  $handler->display->display_options['fields']['field_west_category_editable']['id'] = 'field_west_category_editable';
  $handler->display->display_options['fields']['field_west_category_editable']['table'] = 'field_data_field_west_category';
  $handler->display->display_options['fields']['field_west_category_editable']['field'] = 'field_west_category_editable';
  $handler->display->display_options['fields']['field_west_category_editable']['label'] = 'West';
  $handler->display->display_options['fields']['field_west_category_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_category_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_value'] = 1;
  /* Field: Content: West Dept (editable) */
  $handler->display->display_options['fields']['field_west_dept_editable']['id'] = 'field_west_dept_editable';
  $handler->display->display_options['fields']['field_west_dept_editable']['table'] = 'field_data_field_west_dept';
  $handler->display->display_options['fields']['field_west_dept_editable']['field'] = 'field_west_dept_editable';
  $handler->display->display_options['fields']['field_west_dept_editable']['label'] = 'West Dept';
  $handler->display->display_options['fields']['field_west_dept_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_dept_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_value'] = 1;
  /* Field: Content: West Subheader Catalog (editable) */
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['id'] = 'field_west_subheader_catalog_editable';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['table'] = 'field_data_field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['field'] = 'field_west_subheader_catalog_editable';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['label'] = 'West Subheader Catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_value'] = 1;
  /* Field: Content: East Category (editable) */
  $handler->display->display_options['fields']['field_east_category_editable']['id'] = 'field_east_category_editable';
  $handler->display->display_options['fields']['field_east_category_editable']['table'] = 'field_data_field_east_category';
  $handler->display->display_options['fields']['field_east_category_editable']['field'] = 'field_east_category_editable';
  $handler->display->display_options['fields']['field_east_category_editable']['label'] = 'East';
  $handler->display->display_options['fields']['field_east_category_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_east_category_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_value'] = 1;
  /* Field: Content: East Catalog Header (editable) */
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['id'] = 'field_east_catalog_header_editable';
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['table'] = 'field_data_field_east_catalog_header';
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['field'] = 'field_east_catalog_header_editable';
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['label'] = 'East Catalog Header';
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_east_catalog_header_editable']['suppress_value'] = 1;
  /* Field: Content: Warehouse Group (editable) */
  $handler->display->display_options['fields']['field_warehouse_group_editable']['id'] = 'field_warehouse_group_editable';
  $handler->display->display_options['fields']['field_warehouse_group_editable']['table'] = 'field_data_field_warehouse_group';
  $handler->display->display_options['fields']['field_warehouse_group_editable']['field'] = 'field_warehouse_group_editable';
  $handler->display->display_options['fields']['field_warehouse_group_editable']['label'] = 'Misc';
  $handler->display->display_options['fields']['field_warehouse_group_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_warehouse_group_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_warehouse_group_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_warehouse_group_editable']['suppress_value'] = 1;
  /* Field: Content: National Selling Pack (editable) */
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['id'] = 'field_national_selling_pack_editable';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['table'] = 'field_data_field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['field'] = 'field_national_selling_pack_editable';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['label'] = 'National Selling Pack';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_value'] = 1;
  /* Field: Content: Exclusive Item (editable) */
  $handler->display->display_options['fields']['field_exclusive_editable']['id'] = 'field_exclusive_editable';
  $handler->display->display_options['fields']['field_exclusive_editable']['table'] = 'field_data_field_exclusive';
  $handler->display->display_options['fields']['field_exclusive_editable']['field'] = 'field_exclusive_editable';
  $handler->display->display_options['fields']['field_exclusive_editable']['label'] = 'Exclusive Item';
  $handler->display->display_options['fields']['field_exclusive_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_exclusive_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_exclusive_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_exclusive_editable']['suppress_value'] = 1;
  /* Field: Content: Catalog Brand (editable) */
  $handler->display->display_options['fields']['field_catalog_brand_editable']['id'] = 'field_catalog_brand_editable';
  $handler->display->display_options['fields']['field_catalog_brand_editable']['table'] = 'field_data_field_catalog_brand';
  $handler->display->display_options['fields']['field_catalog_brand_editable']['field'] = 'field_catalog_brand_editable';
  $handler->display->display_options['fields']['field_catalog_brand_editable']['label'] = 'Catalog Brand';
  $handler->display->display_options['fields']['field_catalog_brand_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_catalog_brand_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_catalog_brand_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_catalog_brand_editable']['suppress_value'] = 1;
  /* Field: Content: East Brand (editable) */
  $handler->display->display_options['fields']['field_east_brand_editable']['id'] = 'field_east_brand_editable';
  $handler->display->display_options['fields']['field_east_brand_editable']['table'] = 'field_data_field_east_brand';
  $handler->display->display_options['fields']['field_east_brand_editable']['field'] = 'field_east_brand_editable';
  $handler->display->display_options['fields']['field_east_brand_editable']['label'] = 'East Brand';
  $handler->display->display_options['fields']['field_east_brand_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_east_brand_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_east_brand_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_east_brand_editable']['suppress_value'] = 1;
  /* Field: Content: West Brand (editable) */
  $handler->display->display_options['fields']['field_west_brand_editable']['id'] = 'field_west_brand_editable';
  $handler->display->display_options['fields']['field_west_brand_editable']['table'] = 'field_data_field_west_brand';
  $handler->display->display_options['fields']['field_west_brand_editable']['field'] = 'field_west_brand_editable';
  $handler->display->display_options['fields']['field_west_brand_editable']['label'] = 'West Brand';
  $handler->display->display_options['fields']['field_west_brand_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_brand_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_brand_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_brand_editable']['suppress_value'] = 1;
  /* Field: Content: Print in Publications (editable) */
  $handler->display->display_options['fields']['field_print_in_publications_editable']['id'] = 'field_print_in_publications_editable';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['field'] = 'field_print_in_publications_editable';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['label'] = 'Print in Publications';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_value'] = 1;
  /* Field: Content: Exclusive End Date (editable) */
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['id'] = 'field_wf_exclusive_end_date_editable';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['table'] = 'field_data_field_wf_exclusive_end_date';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['field'] = 'field_wf_exclusive_end_date_editable';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['label'] = 'Exclusive End Date';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_wf_exclusive_end_date_editable']['suppress_value'] = 0;
  /* Field: Content: Urgent (editable) */
  $handler->display->display_options['fields']['field_urgent_editable']['id'] = 'field_urgent_editable';
  $handler->display->display_options['fields']['field_urgent_editable']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent_editable']['field'] = 'field_urgent_editable';
  $handler->display->display_options['fields']['field_urgent_editable']['label'] = 'Urgent';
  $handler->display->display_options['fields']['field_urgent_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_urgent_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_urgent_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_urgent_editable']['suppress_value'] = 0;
  $handler->display->display_options['path'] = 'node/%/edit-products/unfi-internal-info';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'UNFI Internal Info';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Shelf Life */
  $handler = $view->new_display('page', 'Edit Shelf Life', 'edit_shelf_life');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_temp_zone_editable' => 'field_shelf_life_at_dock_editable',
    'field_shelf_life_at_dock_editable' => 'field_shelf_life_at_dock_editable',
    'field_shelf_life_retail_editable' => 'field_shelf_life_at_dock_editable',
    'field_shelf_life_at_prod_editable' => 'field_shelf_life_at_dock_editable',
    'field_freight_protection_level_editable' => 'field_freight_protection_level_editable',
    'field_freight_protection_from_editable' => 'field_freight_protection_level_editable',
    'field_enrobed_in_chocolate__editable' => 'field_freight_protection_level_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temp_zone_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_at_dock_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_retail_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_at_prod_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_freight_protection_level_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_freight_protection_from_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enrobed_in_chocolate__editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Zone (editable) */
  $handler->display->display_options['fields']['field_temp_zone_editable']['id'] = 'field_temp_zone_editable';
  $handler->display->display_options['fields']['field_temp_zone_editable']['table'] = 'field_data_field_temp_zone';
  $handler->display->display_options['fields']['field_temp_zone_editable']['field'] = 'field_temp_zone_editable';
  $handler->display->display_options['fields']['field_temp_zone_editable']['label'] = 'Zone';
  $handler->display->display_options['fields']['field_temp_zone_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_temp_zone_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_temp_zone_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_temp_zone_editable']['suppress_value'] = 1;
  /* Field: Content: Product Shelf Life at Time of Production (editable) */
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['id'] = 'field_shelf_life_at_prod_editable';
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['table'] = 'field_data_field_shelf_life_at_prod';
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['field'] = 'field_shelf_life_at_prod_editable';
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['label'] = '';
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_at_prod_editable']['suppress_value'] = 1;
  /* Field: Content: Guaranteed Shelf Life at Time of UNFI Possession (editable) */
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['id'] = 'field_shelf_life_at_dock_editable';
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['table'] = 'field_data_field_shelf_life_at_dock';
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['field'] = 'field_shelf_life_at_dock_editable';
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['label'] = 'Shelf Life';
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_at_dock_editable']['suppress_value'] = 1;
  /* Field: Content: Guaranteed Shelf Life to Retail (editable) */
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['id'] = 'field_shelf_life_retail_editable';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['table'] = 'field_data_field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['field'] = 'field_shelf_life_retail_editable';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['label'] = '';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_value'] = 1;
  /* Field: Content: Level (editable) */
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['id'] = 'field_freight_protection_level_editable';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['table'] = 'field_data_field_freight_protection_level';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['field'] = 'field_freight_protection_level_editable';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['label'] = 'Freight Protection';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_freight_protection_level_editable']['suppress_value'] = 1;
  /* Field: Content: Protect From (editable) */
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['id'] = 'field_freight_protection_from_editable';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['table'] = 'field_data_field_freight_protection_from';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['field'] = 'field_freight_protection_from_editable';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['label'] = '';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_freight_protection_from_editable']['suppress_value'] = 1;
  /* Field: Content: Enrobed in Chocolate? (editable) */
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['id'] = 'field_enrobed_in_chocolate__editable';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['table'] = 'field_data_field_enrobed_in_chocolate_';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['field'] = 'field_enrobed_in_chocolate__editable';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['label'] = '';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_enrobed_in_chocolate__editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/shelf-life';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Shelf Life';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Promotions */
  $handler = $view->new_display('page', 'Edit Promotions', 'edit_promotions');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_intro_promo_months_editable' => 'field_intro_promo_months_editable',
    'field_need_by_date_editable' => 'field_intro_promo_months_editable',
    'field_new_product_discount_editable' => 'field_new_product_discount_editable',
    'field_new_product_discount_type_editable' => 'field_new_product_discount_editable',
    'field_pre_90_day_discount__editable' => 'field_new_product_discount_editable',
    'field_pre_90_order_dates_editable' => 'field_new_product_discount_editable',
    'field_unfi_buy_dates_editable' => 'field_unfi_buy_dates_editable',
    'field_unfi_contribution_editable' => 'field_unfi_buy_dates_editable',
    'field_unfi_only_approved_mcb_editable' => 'field_unfi_buy_dates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intro_promo_months_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_need_by_date_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new_product_discount_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new_product_discount_type_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pre_90_day_discount__editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pre_90_order_dates_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unfi_buy_dates_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unfi_contribution_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unfi_only_approved_mcb_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Intro Promo Months (editable) */
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['id'] = 'field_intro_promo_months_editable';
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['field'] = 'field_intro_promo_months_editable';
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['label'] = 'General';
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_intro_promo_months_editable']['suppress_value'] = 1;
  /* Field: Content: First Available Ship Date (editable) */
  $handler->display->display_options['fields']['field_need_by_date_editable']['id'] = 'field_need_by_date_editable';
  $handler->display->display_options['fields']['field_need_by_date_editable']['table'] = 'field_data_field_need_by_date';
  $handler->display->display_options['fields']['field_need_by_date_editable']['field'] = 'field_need_by_date_editable';
  $handler->display->display_options['fields']['field_need_by_date_editable']['label'] = 'Need By Date';
  $handler->display->display_options['fields']['field_need_by_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_need_by_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_need_by_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_need_by_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_need_by_date_editable']['suppress_value'] = 1;
  /* Field: Content: New Product Discount (editable) */
  $handler->display->display_options['fields']['field_new_product_discount_editable']['id'] = 'field_new_product_discount_editable';
  $handler->display->display_options['fields']['field_new_product_discount_editable']['table'] = 'field_data_field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount_editable']['field'] = 'field_new_product_discount_editable';
  $handler->display->display_options['fields']['field_new_product_discount_editable']['label'] = 'Time-based';
  $handler->display->display_options['fields']['field_new_product_discount_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_new_product_discount_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_new_product_discount_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_new_product_discount_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_new_product_discount_editable']['suppress_value'] = 1;
  /* Field: Content: New Product Discount Type (editable) */
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['id'] = 'field_new_product_discount_type_editable';
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['table'] = 'field_data_field_new_product_discount_type';
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['field'] = 'field_new_product_discount_type_editable';
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['label'] = 'New Product Discount Type';
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_new_product_discount_type_editable']['suppress_value'] = 1;
  /* Field: Content: Pre-90 Day Discount? (editable) */
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['id'] = 'field_pre_90_day_discount__editable';
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['table'] = 'field_data_field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['field'] = 'field_pre_90_day_discount__editable';
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['label'] = 'Pre-90 Day Discount?';
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pre_90_day_discount__editable']['suppress_value'] = 1;
  /* Field: Content: Pre-90 Order Dates (editable) */
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['id'] = 'field_pre_90_order_dates_editable';
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['table'] = 'field_data_field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['field'] = 'field_pre_90_order_dates_editable';
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['label'] = 'Pre-90 Order Dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pre_90_order_dates_editable']['suppress_value'] = 1;
  /* Field: Content: UNFI Buy Dates (editable) */
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['id'] = 'field_unfi_buy_dates_editable';
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['table'] = 'field_data_field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['field'] = 'field_unfi_buy_dates_editable';
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['label'] = 'UNFI';
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unfi_buy_dates_editable']['suppress_value'] = 1;
  /* Field: Content: UNFI Contribution (editable) */
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['id'] = 'field_unfi_contribution_editable';
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['table'] = 'field_data_field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['field'] = 'field_unfi_contribution_editable';
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['label'] = 'UNFI Contribution';
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unfi_contribution_editable']['suppress_value'] = 1;
  /* Field: Content: UNFI Only Approved Manufacturer Chargeback (editable) */
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['id'] = 'field_unfi_only_approved_mcb_editable';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['table'] = 'field_data_field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['field'] = 'field_unfi_only_approved_mcb_editable';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['label'] = 'UNFI Only Approved Manufacturer Chargeback';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/promotions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Promotions';
  $handler->display->display_options['menu']['weight'] = '19';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Shipper Components */
  $handler = $view->new_display('page', 'Edit Shipper Components', 'edit_shipper_components');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_shipper_editable' => 'field_shipper_components_editable',
    'field_shipper_components_editable' => 'field_shipper_components_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shipper_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shipper_components_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Is this item a shipper? (editable) */
  $handler->display->display_options['fields']['field_shipper_editable']['id'] = 'field_shipper_editable';
  $handler->display->display_options['fields']['field_shipper_editable']['table'] = 'field_data_field_shipper';
  $handler->display->display_options['fields']['field_shipper_editable']['field'] = 'field_shipper_editable';
  $handler->display->display_options['fields']['field_shipper_editable']['label'] = 'Is this item a shipper?';
  $handler->display->display_options['fields']['field_shipper_editable']['settings'] = array(
    'format' => 'custom',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  $handler->display->display_options['fields']['field_shipper_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_shipper_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shipper_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shipper_editable']['suppress_value'] = 1;
  /* Field: Content: Shipper Components (editable) */
  $handler->display->display_options['fields']['field_shipper_components_editable']['id'] = 'field_shipper_components_editable';
  $handler->display->display_options['fields']['field_shipper_components_editable']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components_editable']['field'] = 'field_shipper_components_editable';
  $handler->display->display_options['fields']['field_shipper_components_editable']['label'] = 'Shipper Components';
  $handler->display->display_options['fields']['field_shipper_components_editable']['element_class'] = 'unfi-unique-column';
  $handler->display->display_options['fields']['field_shipper_components_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_shipper_components_editable']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_shipper_components_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shipper_components_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shipper_components_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_shipper_components_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shipper_components_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/shipper-components';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Shipper Components';
  $handler->display->display_options['menu']['weight'] = '17';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Vendor Warehouse Locations */
  $handler = $view->new_display('page', 'Edit Vendor Warehouse Locations', 'edit_vendor_warehouse_locations');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_pick_up_locations_editable' => 'field_pick_up_locations_editable',
    'field_assigned_pick_location_editable' => 'field_pick_up_locations_editable',
    'field_assigned_pick_location_w_editable' => 'field_pick_up_locations_editable',
    'field_east_vendor__editable' => 'field_pick_up_locations_editable',
    'field_west_vendor_editable' => 'field_pick_up_locations_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pick_up_locations_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assigned_pick_location_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assigned_pick_location_w_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_vendor__editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_vendor_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor Warehouse Locations (editable) */
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['id'] = 'field_pick_up_locations_editable';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['table'] = 'field_data_field_pick_up_locations';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['field'] = 'field_pick_up_locations_editable';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['label'] = 'Vendor Warehouse Locations';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pick_up_locations_editable']['suppress_value'] = 1;
  /* Field: Content: SRM Assigned East Vendor Warehouse Location (editable) */
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['id'] = 'field_assigned_pick_location_editable';
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['table'] = 'field_data_field_assigned_pick_location';
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['field'] = 'field_assigned_pick_location_editable';
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['label'] = 'SRM Assigned East Vendor Warehouse Location';
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_assigned_pick_location_editable']['suppress_value'] = 1;
  /* Field: Content: SRM Assigned West Vendor Warehouse Location (editable) */
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['id'] = 'field_assigned_pick_location_w_editable';
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['table'] = 'field_data_field_assigned_pick_location_w';
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['field'] = 'field_assigned_pick_location_w_editable';
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['label'] = 'SRM Assigned West Vendor Warehouse Location';
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_assigned_pick_location_w_editable']['suppress_value'] = 1;
  /* Field: Content: East Vendor  (editable) */
  $handler->display->display_options['fields']['field_east_vendor__editable']['id'] = 'field_east_vendor__editable';
  $handler->display->display_options['fields']['field_east_vendor__editable']['table'] = 'field_data_field_east_vendor_';
  $handler->display->display_options['fields']['field_east_vendor__editable']['field'] = 'field_east_vendor__editable';
  $handler->display->display_options['fields']['field_east_vendor__editable']['label'] = 'East Vendor';
  $handler->display->display_options['fields']['field_east_vendor__editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_east_vendor__editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_east_vendor__editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_east_vendor__editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_east_vendor__editable']['suppress_value'] = 0;
  /* Field: Content: West Vendor (editable) */
  $handler->display->display_options['fields']['field_west_vendor_editable']['id'] = 'field_west_vendor_editable';
  $handler->display->display_options['fields']['field_west_vendor_editable']['table'] = 'field_data_field_west_vendor';
  $handler->display->display_options['fields']['field_west_vendor_editable']['field'] = 'field_west_vendor_editable';
  $handler->display->display_options['fields']['field_west_vendor_editable']['label'] = 'West Vendor';
  $handler->display->display_options['fields']['field_west_vendor_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_west_vendor_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_vendor_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_vendor_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_vendor_editable']['suppress_value'] = 0;
  $handler->display->display_options['path'] = 'node/%/edit-products/vendor-warehouse-locations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Vendor Warehouse Locations';
  $handler->display->display_options['menu']['weight'] = '16';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Coding Internal Info */
  $handler = $view->new_display('panel_pane', 'Coding Internal Info', 'unfi_internal_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'UNFI Internal Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    12 => '12',
    4 => '4',
    5 => '5',
    6 => '6',
    13 => '13',
    14 => '14',
    11 => '11',
    7 => '7',
    8 => '8',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_west_dept' => 'field_west_dept',
    'field_west_category' => 'field_west_category',
    'field_west_subheader_catalog' => 'field_west_subheader_catalog',
    'field_west_brand' => 'field_west_brand',
    'field_east_category' => 'field_east_category',
    'field_ubs_number' => 'field_ubs_number',
    'field_east_catalog_header' => 'field_east_catalog_header',
    'field_east_brand' => 'field_east_brand',
    'field_national_selling_pack' => 'field_national_selling_pack',
    'field_exclusive' => 'field_exclusive',
    'field_warehouse_group' => 'field_warehouse_group',
    'field_catalog_brand' => 'field_catalog_brand',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_dept' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_subheader_catalog' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_catalog_header' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_national_selling_pack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exclusive' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouse_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: West Dept */
  $handler->display->display_options['fields']['field_west_dept']['id'] = 'field_west_dept';
  $handler->display->display_options['fields']['field_west_dept']['table'] = 'field_data_field_west_dept';
  $handler->display->display_options['fields']['field_west_dept']['field'] = 'field_west_dept';
  /* Field: Content: West Category */
  $handler->display->display_options['fields']['field_west_category']['id'] = 'field_west_category';
  $handler->display->display_options['fields']['field_west_category']['table'] = 'field_data_field_west_category';
  $handler->display->display_options['fields']['field_west_category']['field'] = 'field_west_category';
  /* Field: Content: West Subheader Catalog */
  $handler->display->display_options['fields']['field_west_subheader_catalog']['id'] = 'field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog']['table'] = 'field_data_field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog']['field'] = 'field_west_subheader_catalog';
  /* Field: Content: West Brand */
  $handler->display->display_options['fields']['field_west_brand']['id'] = 'field_west_brand';
  $handler->display->display_options['fields']['field_west_brand']['table'] = 'field_data_field_west_brand';
  $handler->display->display_options['fields']['field_west_brand']['field'] = 'field_west_brand';
  /* Field: Content: East Category */
  $handler->display->display_options['fields']['field_east_category']['id'] = 'field_east_category';
  $handler->display->display_options['fields']['field_east_category']['table'] = 'field_data_field_east_category';
  $handler->display->display_options['fields']['field_east_category']['field'] = 'field_east_category';
  /* Field: Content: East Catalog Header */
  $handler->display->display_options['fields']['field_east_catalog_header']['id'] = 'field_east_catalog_header';
  $handler->display->display_options['fields']['field_east_catalog_header']['table'] = 'field_data_field_east_catalog_header';
  $handler->display->display_options['fields']['field_east_catalog_header']['field'] = 'field_east_catalog_header';
  /* Field: Content: East Brand */
  $handler->display->display_options['fields']['field_east_brand']['id'] = 'field_east_brand';
  $handler->display->display_options['fields']['field_east_brand']['table'] = 'field_data_field_east_brand';
  $handler->display->display_options['fields']['field_east_brand']['field'] = 'field_east_brand';
  /* Field: Content: National Selling Pack */
  $handler->display->display_options['fields']['field_national_selling_pack']['id'] = 'field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack']['table'] = 'field_data_field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack']['field'] = 'field_national_selling_pack';
  /* Field: Content: Exclusive Item */
  $handler->display->display_options['fields']['field_exclusive']['id'] = 'field_exclusive';
  $handler->display->display_options['fields']['field_exclusive']['table'] = 'field_data_field_exclusive';
  $handler->display->display_options['fields']['field_exclusive']['field'] = 'field_exclusive';
  /* Field: Content: Warehouse Group */
  $handler->display->display_options['fields']['field_warehouse_group']['id'] = 'field_warehouse_group';
  $handler->display->display_options['fields']['field_warehouse_group']['table'] = 'field_data_field_warehouse_group';
  $handler->display->display_options['fields']['field_warehouse_group']['field'] = 'field_warehouse_group';
  /* Field: Content: Catalog Brand */
  $handler->display->display_options['fields']['field_catalog_brand']['id'] = 'field_catalog_brand';
  $handler->display->display_options['fields']['field_catalog_brand']['table'] = 'field_data_field_catalog_brand';
  $handler->display->display_options['fields']['field_catalog_brand']['field'] = 'field_catalog_brand';
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Exclusive End Date */
  $handler->display->display_options['fields']['field_wf_exclusive_end_date']['id'] = 'field_wf_exclusive_end_date';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date']['table'] = 'field_data_field_wf_exclusive_end_date';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date']['field'] = 'field_wf_exclusive_end_date';
  $handler->display->display_options['fields']['field_wf_exclusive_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Edit Origin */
  $handler = $view->new_display('page', 'Edit Origin', 'edit_origin');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_country_of_origin_editable' => 'field_country_of_origin_editable',
    'field_state_providence_of_origin_editable' => 'field_state_providence_of_origin_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_of_origin_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state_providence_of_origin_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Country of Origin (editable) */
  $handler->display->display_options['fields']['field_country_of_origin_editable']['id'] = 'field_country_of_origin_editable';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['table'] = 'field_data_field_country_of_origin';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['field'] = 'field_country_of_origin_editable';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['label'] = 'Country of Origin';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_country_of_origin_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_country_of_origin_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_country_of_origin_editable']['suppress_value'] = 1;
  /* Field: Content: State / Province (editable) */
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['id'] = 'field_state_providence_of_origin_editable';
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['table'] = 'field_data_field_state_providence_of_origin';
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['field'] = 'field_state_providence_of_origin_editable';
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['label'] = 'State / Province';
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_state_providence_of_origin_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/origin';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Origin';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Item Details */
  $handler = $view->new_display('page', 'Edit Item Details', 'edit_item_details');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_requested_by_editable' => 'field_requested_by_editable',
    'field_brand_editable' => 'field_requested_by_editable',
    'field_product_category_editable' => 'field_requested_by_editable',
    'field_product_labels_editable' => 'field_product_labels_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requested_by_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_labels_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product Labels (editable) */
  $handler->display->display_options['fields']['field_product_labels_editable']['id'] = 'field_product_labels_editable';
  $handler->display->display_options['fields']['field_product_labels_editable']['table'] = 'field_data_field_product_labels';
  $handler->display->display_options['fields']['field_product_labels_editable']['field'] = 'field_product_labels_editable';
  $handler->display->display_options['fields']['field_product_labels_editable']['label'] = 'Product Labels';
  $handler->display->display_options['fields']['field_product_labels_editable']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_labels_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_labels_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_product_labels_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_product_labels_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_product_labels_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/item-details';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Item Details';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Basic Info */
  $handler = $view->new_display('page', 'Edit Basic Info', 'edit_basic_info');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_unit_upc_editable' => 'field_unit_upc_editable',
    'field_pack_upc_editable' => 'field_unit_upc_editable',
    'field_case_upc_editable' => 'field_unit_upc_editable',
    'field_part_number_editable' => 'title_editable',
    'title_editable' => 'title_editable',
    'field_selling_unit_editable' => 'field_size_editable',
    'field_size_editable' => 'field_size_editable',
    'field_unit_of_measure_editable' => 'field_size_editable',
    'field_inner_pack_editable' => 'field_size_editable',
    'field_case_pack_editable' => 'field_size_editable',
    'field_mc_pack_editable' => 'field_size_editable',
    'field_ubs_number_editable' => 'field_unit_upc_editable',
    'field_wbs_number_editable' => 'field_unit_upc_editable',
    'field_wholesale_price_east_editable' => 'field_wholesale_price_east_editable',
    'field_srp_east_editable' => 'field_wholesale_price_east_editable',
    'field_wholesale_price_west_editable' => 'field_wholesale_price_west_editable',
    'field_srp_west_editable' => 'field_srp_west_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_unit_upc_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pack_upc_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_upc_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_selling_unit_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_size_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_of_measure_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inner_pack_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_pack_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mc_pack_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_wbs_number_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_wholesale_price_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_srp_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_wholesale_price_west_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_srp_west_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC (editable) */
  $handler->display->display_options['fields']['field_unit_upc_editable']['id'] = 'field_unit_upc_editable';
  $handler->display->display_options['fields']['field_unit_upc_editable']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc_editable']['field'] = 'field_unit_upc_editable';
  $handler->display->display_options['fields']['field_unit_upc_editable']['label'] = 'UPC & Item Numbers';
  $handler->display->display_options['fields']['field_unit_upc_editable']['element_class'] = 'unfi-unique-column';
  $handler->display->display_options['fields']['field_unit_upc_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_upc_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_upc_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_upc_editable']['suppress_value'] = 1;
  /* Field: Content: Inner Pack UPC (editable) */
  $handler->display->display_options['fields']['field_pack_upc_editable']['id'] = 'field_pack_upc_editable';
  $handler->display->display_options['fields']['field_pack_upc_editable']['table'] = 'field_data_field_pack_upc';
  $handler->display->display_options['fields']['field_pack_upc_editable']['field'] = 'field_pack_upc_editable';
  $handler->display->display_options['fields']['field_pack_upc_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pack_upc_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pack_upc_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pack_upc_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pack_upc_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pack_upc_editable']['suppress_value'] = 1;
  /* Field: Content: Case or Master Case UPC (editable) */
  $handler->display->display_options['fields']['field_case_upc_editable']['id'] = 'field_case_upc_editable';
  $handler->display->display_options['fields']['field_case_upc_editable']['table'] = 'field_data_field_case_upc';
  $handler->display->display_options['fields']['field_case_upc_editable']['field'] = 'field_case_upc_editable';
  $handler->display->display_options['fields']['field_case_upc_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_upc_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_upc_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_upc_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_upc_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_upc_editable']['suppress_value'] = 1;
  /* Field: Content: Title (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['label'] = 'Description';
  $handler->display->display_options['fields']['title_editable']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '15';
  $handler->display->display_options['fields']['title_editable']['suppress_value'] = 1;
  /* Field: Field: Selling Unit (editable) */
  $handler->display->display_options['fields']['field_selling_unit_editable']['id'] = 'field_selling_unit_editable';
  $handler->display->display_options['fields']['field_selling_unit_editable']['table'] = 'field_data_field_selling_unit';
  $handler->display->display_options['fields']['field_selling_unit_editable']['field'] = 'field_selling_unit_editable';
  $handler->display->display_options['fields']['field_selling_unit_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_selling_unit_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_selling_unit_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_selling_unit_editable']['suppress_value'] = 1;
  /* Field: Content: Size (editable) */
  $handler->display->display_options['fields']['field_size_editable']['id'] = 'field_size_editable';
  $handler->display->display_options['fields']['field_size_editable']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size_editable']['field'] = 'field_size_editable';
  $handler->display->display_options['fields']['field_size_editable']['label'] = 'Size & Pack';
  $handler->display->display_options['fields']['field_size_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_size_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_size_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_size_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_size_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_size_editable']['suppress_value'] = 1;
  /* Field: Content: Unit of Measure (editable) */
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['id'] = 'field_unit_of_measure_editable';
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['field'] = 'field_unit_of_measure_editable';
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['label'] = '';
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_of_measure_editable']['suppress_value'] = 1;
  /* Field: Content: Inner Pack (editable) */
  $handler->display->display_options['fields']['field_inner_pack_editable']['id'] = 'field_inner_pack_editable';
  $handler->display->display_options['fields']['field_inner_pack_editable']['table'] = 'field_data_field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack_editable']['field'] = 'field_inner_pack_editable';
  $handler->display->display_options['fields']['field_inner_pack_editable']['label'] = '';
  $handler->display->display_options['fields']['field_inner_pack_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inner_pack_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_inner_pack_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_inner_pack_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_inner_pack_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_inner_pack_editable']['suppress_value'] = 1;
  /* Field: Content: Case Pack (editable) */
  $handler->display->display_options['fields']['field_case_pack_editable']['id'] = 'field_case_pack_editable';
  $handler->display->display_options['fields']['field_case_pack_editable']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack_editable']['field'] = 'field_case_pack_editable';
  $handler->display->display_options['fields']['field_case_pack_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_pack_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_pack_editable']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_pack_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_pack_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_pack_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_pack_editable']['suppress_value'] = 1;
  /* Field: Content: Master Case Pack (editable) */
  $handler->display->display_options['fields']['field_mc_pack_editable']['id'] = 'field_mc_pack_editable';
  $handler->display->display_options['fields']['field_mc_pack_editable']['table'] = 'field_data_field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack_editable']['field'] = 'field_mc_pack_editable';
  $handler->display->display_options['fields']['field_mc_pack_editable']['label'] = '';
  $handler->display->display_options['fields']['field_mc_pack_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mc_pack_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mc_pack_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mc_pack_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mc_pack_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_mc_pack_editable']['suppress_value'] = 1;
  /* Field: Content: East Item Number (editable) */
  $handler->display->display_options['fields']['field_ubs_number_editable']['id'] = 'field_ubs_number_editable';
  $handler->display->display_options['fields']['field_ubs_number_editable']['table'] = 'field_data_field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number_editable']['field'] = 'field_ubs_number_editable';
  $handler->display->display_options['fields']['field_ubs_number_editable']['label'] = '';
  $handler->display->display_options['fields']['field_ubs_number_editable']['element_class'] = 'unfi-unique-column';
  $handler->display->display_options['fields']['field_ubs_number_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ubs_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ubs_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ubs_number_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_ubs_number_editable']['suppress_value'] = 1;
  /* Field: Content: West Item Number (editable) */
  $handler->display->display_options['fields']['field_wbs_number_editable']['id'] = 'field_wbs_number_editable';
  $handler->display->display_options['fields']['field_wbs_number_editable']['table'] = 'field_data_field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number_editable']['field'] = 'field_wbs_number_editable';
  $handler->display->display_options['fields']['field_wbs_number_editable']['label'] = '';
  $handler->display->display_options['fields']['field_wbs_number_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wbs_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_wbs_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_wbs_number_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_wbs_number_editable']['suppress_value'] = 1;
  /* Field: Content: Wholesale Price East (editable) */
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['id'] = 'field_wholesale_price_east_editable';
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['table'] = 'field_data_field_wholesale_price_east';
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['field'] = 'field_wholesale_price_east_editable';
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['label'] = 'Wholesale & SRP East';
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_wholesale_price_east_editable']['suppress_value'] = 1;
  /* Field: Content: SRP East (editable) */
  $handler->display->display_options['fields']['field_srp_east_editable']['id'] = 'field_srp_east_editable';
  $handler->display->display_options['fields']['field_srp_east_editable']['table'] = 'field_data_field_srp_east';
  $handler->display->display_options['fields']['field_srp_east_editable']['field'] = 'field_srp_east_editable';
  $handler->display->display_options['fields']['field_srp_east_editable']['label'] = '';
  $handler->display->display_options['fields']['field_srp_east_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_srp_east_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_srp_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_srp_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_srp_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_srp_east_editable']['suppress_value'] = 1;
  /* Field: Content: Wholesale Price West (editable) */
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['id'] = 'field_wholesale_price_west_editable';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['table'] = 'field_data_field_wholesale_price_west';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['field'] = 'field_wholesale_price_west_editable';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['label'] = 'Wholesale Price West';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_wholesale_price_west_editable']['suppress_value'] = 1;
  /* Field: Content: SRP West (editable) */
  $handler->display->display_options['fields']['field_srp_west_editable']['id'] = 'field_srp_west_editable';
  $handler->display->display_options['fields']['field_srp_west_editable']['table'] = 'field_data_field_srp_west';
  $handler->display->display_options['fields']['field_srp_west_editable']['field'] = 'field_srp_west_editable';
  $handler->display->display_options['fields']['field_srp_west_editable']['label'] = 'SRP West';
  $handler->display->display_options['fields']['field_srp_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_srp_west_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_srp_west_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_srp_west_editable']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_srp_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_srp_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_srp_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_srp_west_editable']['suppress_value'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/edit-products/basic';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Basic Info';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Edit Items';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Marketing */
  $handler = $view->new_display('panel_pane', 'Marketing', 'marketing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marketing';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product Image */
  $handler->display->display_options['fields']['field_primary_image']['id'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['table'] = 'field_data_field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['field'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_primary_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Edit Retail Category Management */
  $handler = $view->new_display('page', 'Edit Retail Category Management', 'edit_coding');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_flavor_editable' => 'field_flavor_editable',
    'field_type_editable' => 'field_flavor_editable',
    'field_form_editable' => 'field_flavor_editable',
    'field_ethnic_gourmet_editable' => 'field_flavor_editable',
    'field_ethnic_cultural_editable' => 'field_flavor_editable',
    'field_rcm_category_editable' => 'field_flavor_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flavor_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_form_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ethnic_gourmet_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ethnic_cultural_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rcm_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Flavor/Fragrance (editable) */
  $handler->display->display_options['fields']['field_flavor_editable']['id'] = 'field_flavor_editable';
  $handler->display->display_options['fields']['field_flavor_editable']['table'] = 'field_data_field_flavor';
  $handler->display->display_options['fields']['field_flavor_editable']['field'] = 'field_flavor_editable';
  $handler->display->display_options['fields']['field_flavor_editable']['label'] = 'Retail Category Management';
  $handler->display->display_options['fields']['field_flavor_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_flavor_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_flavor_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_flavor_editable']['suppress_value'] = 1;
  /* Field: Field: Type (editable) */
  $handler->display->display_options['fields']['field_type_editable']['id'] = 'field_type_editable';
  $handler->display->display_options['fields']['field_type_editable']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type_editable']['field'] = 'field_type_editable';
  $handler->display->display_options['fields']['field_type_editable']['label'] = 'Type';
  $handler->display->display_options['fields']['field_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_type_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_type_editable']['suppress_value'] = 1;
  /* Field: Content: Form (editable) */
  $handler->display->display_options['fields']['field_form_editable']['id'] = 'field_form_editable';
  $handler->display->display_options['fields']['field_form_editable']['table'] = 'field_data_field_form';
  $handler->display->display_options['fields']['field_form_editable']['field'] = 'field_form_editable';
  $handler->display->display_options['fields']['field_form_editable']['label'] = 'Form';
  $handler->display->display_options['fields']['field_form_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_form_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_form_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_form_editable']['suppress_value'] = 1;
  /* Field: Content: Ethnic & Gourmet (editable) */
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['id'] = 'field_ethnic_gourmet_editable';
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['table'] = 'field_data_field_ethnic_gourmet';
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['field'] = 'field_ethnic_gourmet_editable';
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['label'] = 'Ethnic & Gourmet';
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_ethnic_gourmet_editable']['suppress_value'] = 1;
  /* Field: Content: Ethnic/Cultural (editable) */
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['id'] = 'field_ethnic_cultural_editable';
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['table'] = 'field_data_field_ethnic_cultural';
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['field'] = 'field_ethnic_cultural_editable';
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['label'] = 'Ethnic/Cultural';
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_ethnic_cultural_editable']['suppress_value'] = 1;
  /* Field: Content: RCM Category (editable) */
  $handler->display->display_options['fields']['field_rcm_category_editable']['id'] = 'field_rcm_category_editable';
  $handler->display->display_options['fields']['field_rcm_category_editable']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category_editable']['field'] = 'field_rcm_category_editable';
  $handler->display->display_options['fields']['field_rcm_category_editable']['label'] = 'RCM Category';
  $handler->display->display_options['fields']['field_rcm_category_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rcm_category_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_rcm_category_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_rcm_category_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_rcm_category_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/coding';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Retail Category Management';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit East Distributor Costs */
  $handler = $view->new_display('page', 'Edit East Distributor Costs', 'edit_east_distributor_costs');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_unit_cost_fob_east_editable' => 'field_unit_cost_fob_east_editable',
    'field_case_cost_fob_east_editable' => 'field_unit_cost_fob_east_editable',
    'field_unit_cost_del_east_editable' => 'field_unit_cost_del_east_editable',
    'field_case_cost_del_east_editable' => 'field_unit_cost_del_east_editable',
    'field_use_mcc_east_editable' => 'field_use_mcc_east_editable',
    'field_pricing_sheet_editable' => 'field_use_mcc_east_editable',
    'field_unit_retail_del_east_editable' => 'field_unit_cost_del_east_editable',
    'field_unit_retail_fob_east_editable' => 'field_unit_cost_fob_east_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_fob_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_cost_fob_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_del_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_cost_del_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pricing_sheet_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_del_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_fob_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Item Cost (editable) */
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['id'] = 'field_unit_cost_fob_east_editable';
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['table'] = 'field_data_field_unit_cost_fob_east';
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['field'] = 'field_unit_cost_fob_east_editable';
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['label'] = 'East FOB';
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_fob_east_editable']['suppress_value'] = 1;
  /* Field: East FOB Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['id'] = 'field_case_cost_fob_east_editable';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['table'] = 'field_data_field_case_cost_fob_east';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['field'] = 'field_case_cost_fob_east_editable';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['ui_name'] = 'East FOB Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_cost_fob_east_editable']['suppress_value'] = 1;
  /* Field: Content: Item Cost (editable) */
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['id'] = 'field_unit_cost_del_east_editable';
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['table'] = 'field_data_field_unit_cost_del_east';
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['field'] = 'field_unit_cost_del_east_editable';
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['label'] = 'East Delivered';
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_del_east_editable']['suppress_value'] = 1;
  /* Field: East Delivered Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['id'] = 'field_case_cost_del_east_editable';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['table'] = 'field_data_field_case_cost_del_east';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['field'] = 'field_case_cost_del_east_editable';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['ui_name'] = 'East Delivered Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_cost_del_east_editable']['suppress_value'] = 1;
  /* Field: East Use Master Case Cost */
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['id'] = 'field_use_mcc_east_editable';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['table'] = 'field_data_field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['field'] = 'field_use_mcc_east_editable';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['ui_name'] = 'East Use Master Case Cost';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['label'] = 'East';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_value'] = 1;
  /* Field: East Manufacturer Price List */
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['id'] = 'field_pricing_sheet_editable';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['table'] = 'field_data_field_pricing_sheet';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['field'] = 'field_pricing_sheet_editable';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['ui_name'] = 'East Manufacturer Price List';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pricing_sheet_editable']['suppress_value'] = 1;
  /* Field: Content: Suggested Item Retail (editable) */
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['id'] = 'field_unit_retail_del_east_editable';
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['table'] = 'field_data_field_unit_retail_del_east';
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['field'] = 'field_unit_retail_del_east_editable';
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['label'] = 'Suggested Item Retail';
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_del_east_editable']['suppress_value'] = 1;
  /* Field: Content: Suggested Item Retail (editable) */
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['id'] = 'field_unit_retail_fob_east_editable';
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['table'] = 'field_data_field_unit_retail_fob_east';
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['field'] = 'field_unit_retail_fob_east_editable';
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['label'] = 'Suggested Item Retail';
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_fob_east_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/east-distributor-costs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'East Distributor Costs';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Additives */
  $handler = $view->new_display('page', 'Edit Additives', 'edit_additives');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_fat_content_attributes_editable' => 'field_contains_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_contains_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_free_of_attributes_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Contains (editable) */
  $handler->display->display_options['fields']['field_contains_attributes_editable']['id'] = 'field_contains_attributes_editable';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['table'] = 'field_data_field_contains_attributes';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['field'] = 'field_contains_attributes_editable';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['label'] = 'Contains';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_contains_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Fat Content (editable) */
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['id'] = 'field_fat_content_attributes_editable';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['table'] = 'field_data_field_fat_content_attributes';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['field'] = 'field_fat_content_attributes_editable';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['label'] = 'Fat Content';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_fat_content_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Sweetener (editable) */
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['id'] = 'field_sweetener_attributes_editable';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['table'] = 'field_data_field_sweetener_attributes';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['field'] = 'field_sweetener_attributes_editable';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['label'] = 'Sweetener';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_sweetener_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Free of (editable) */
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['id'] = 'field_free_of_attributes_editable';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['table'] = 'field_data_field_free_of_attributes';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['field'] = 'field_free_of_attributes_editable';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['label'] = 'Free of';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_free_of_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Salt Content (editable) */
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['id'] = 'field_salt_content_attributes_editable';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['table'] = 'field_data_field_salt_content_attributes';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['field'] = 'field_salt_content_attributes_editable';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['label'] = 'Salt Content';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_salt_content_attributes_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/additives';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Additives';
  $handler->display->display_options['menu']['weight'] = '7';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Certifications */
  $handler = $view->new_display('page', 'Edit Certifications', 'edit_certifications');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_kosher_editable' => 'field_kosher_editable',
    'field_usda_organic_editable' => 'field_nop_organic_editable',
    'field_fair_trade_editable' => 'field_nop_organic_editable',
    'field_nop_organic_editable' => 'field_nop_organic_editable',
    'field_gluten_free_editable' => 'field_nop_organic_editable',
    'field_specialty_editable' => 'field_nop_organic_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kosher_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usda_organic_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fair_trade_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nop_organic_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gluten_free_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_specialty_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Kosher (editable) */
  $handler->display->display_options['fields']['field_kosher_editable']['id'] = 'field_kosher_editable';
  $handler->display->display_options['fields']['field_kosher_editable']['table'] = 'field_data_field_kosher';
  $handler->display->display_options['fields']['field_kosher_editable']['field'] = 'field_kosher_editable';
  $handler->display->display_options['fields']['field_kosher_editable']['label'] = 'Kosher';
  $handler->display->display_options['fields']['field_kosher_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kosher_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_kosher_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kosher_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_kosher_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_kosher_editable']['suppress_value'] = 1;
  /* Field: Content: USDA Organic (editable) */
  $handler->display->display_options['fields']['field_usda_organic_editable']['id'] = 'field_usda_organic_editable';
  $handler->display->display_options['fields']['field_usda_organic_editable']['table'] = 'field_data_field_usda_organic';
  $handler->display->display_options['fields']['field_usda_organic_editable']['field'] = 'field_usda_organic_editable';
  $handler->display->display_options['fields']['field_usda_organic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_usda_organic_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_usda_organic_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_usda_organic_editable']['suppress_value'] = 1;
  /* Field: Content: Fair Trade (editable) */
  $handler->display->display_options['fields']['field_fair_trade_editable']['id'] = 'field_fair_trade_editable';
  $handler->display->display_options['fields']['field_fair_trade_editable']['table'] = 'field_data_field_fair_trade';
  $handler->display->display_options['fields']['field_fair_trade_editable']['field'] = 'field_fair_trade_editable';
  $handler->display->display_options['fields']['field_fair_trade_editable']['label'] = 'Fair Trade';
  $handler->display->display_options['fields']['field_fair_trade_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_fair_trade_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_fair_trade_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_fair_trade_editable']['suppress_value'] = 1;
  /* Field: Content: NOP Organic (editable) */
  $handler->display->display_options['fields']['field_nop_organic_editable']['id'] = 'field_nop_organic_editable';
  $handler->display->display_options['fields']['field_nop_organic_editable']['table'] = 'field_data_field_nop_organic';
  $handler->display->display_options['fields']['field_nop_organic_editable']['field'] = 'field_nop_organic_editable';
  $handler->display->display_options['fields']['field_nop_organic_editable']['label'] = 'Organic / Fair Trade / Gluten Free';
  $handler->display->display_options['fields']['field_nop_organic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_nop_organic_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_nop_organic_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_nop_organic_editable']['suppress_value'] = 1;
  /* Field: Content: Gluten Free (editable) */
  $handler->display->display_options['fields']['field_gluten_free_editable']['id'] = 'field_gluten_free_editable';
  $handler->display->display_options['fields']['field_gluten_free_editable']['table'] = 'field_data_field_gluten_free';
  $handler->display->display_options['fields']['field_gluten_free_editable']['field'] = 'field_gluten_free_editable';
  $handler->display->display_options['fields']['field_gluten_free_editable']['label'] = 'Gluten Free';
  $handler->display->display_options['fields']['field_gluten_free_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_gluten_free_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_gluten_free_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_gluten_free_editable']['suppress_value'] = 1;
  /* Field: Content: Specialty (editable) */
  $handler->display->display_options['fields']['field_specialty_editable']['id'] = 'field_specialty_editable';
  $handler->display->display_options['fields']['field_specialty_editable']['table'] = 'field_data_field_specialty';
  $handler->display->display_options['fields']['field_specialty_editable']['field'] = 'field_specialty_editable';
  $handler->display->display_options['fields']['field_specialty_editable']['label'] = 'Misc';
  $handler->display->display_options['fields']['field_specialty_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_specialty_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_specialty_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_specialty_editable']['suppress_value'] = 1;
  /* Field: Content: Third Party Certificates (editable) */
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['id'] = 'field_third_party_certificates_editable';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['table'] = 'field_data_field_third_party_certificates';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['field'] = 'field_third_party_certificates_editable';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['label'] = 'Third Party Certificates';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_third_party_certificates_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/certifications';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Certifications';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit West Distributor Costs */
  $handler = $view->new_display('page', 'Edit West Distributor Costs', 'edit_west_distributor_costs');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_unit_cost_fob_west_editable' => 'field_unit_cost_fob_west_editable',
    'field_case_cost_fob_west_editable' => 'field_unit_cost_fob_west_editable',
    'field_unit_cost_del_west_editable' => 'field_unit_cost_del_west_editable',
    'field_case_cost_del_west_editable' => 'field_unit_cost_del_west_editable',
    'field_use_mcc_west_editable' => 'field_use_mcc_west_editable',
    'field_pricing_sheet_west_editable' => 'field_use_mcc_west_editable',
    'field_unit_retail_del_west_editable' => 'field_unit_cost_del_west_editable',
    'field_unit_retail_fob_west_editable' => 'field_unit_cost_fob_west_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_fob_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_cost_fob_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_cost_del_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_cost_del_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pricing_sheet_west_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_del_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_retail_fob_west_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Item Cost (editable) */
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['id'] = 'field_unit_cost_fob_west_editable';
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['table'] = 'field_data_field_unit_cost_fob_west';
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['field'] = 'field_unit_cost_fob_west_editable';
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['label'] = 'West FOB';
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_fob_west_editable']['suppress_value'] = 1;
  /* Field: West FOB Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['id'] = 'field_case_cost_fob_west_editable';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['table'] = 'field_data_field_case_cost_fob_west';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['field'] = 'field_case_cost_fob_west_editable';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['ui_name'] = 'West FOB Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_cost_fob_west_editable']['suppress_value'] = 1;
  /* Field: Content: Item Cost (editable) */
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['id'] = 'field_unit_cost_del_west_editable';
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['table'] = 'field_data_field_unit_cost_del_west';
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['field'] = 'field_unit_cost_del_west_editable';
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['label'] = 'West Delivered';
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_cost_del_west_editable']['suppress_value'] = 1;
  /* Field: West Delivered Master Case Cost */
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['id'] = 'field_case_cost_del_west_editable';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['table'] = 'field_data_field_case_cost_del_west';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['field'] = 'field_case_cost_del_west_editable';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['ui_name'] = 'West Delivered Master Case Cost';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['label'] = '';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_case_cost_del_west_editable']['suppress_value'] = 1;
  /* Field: West Use Master Case Cost */
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['id'] = 'field_use_mcc_west_editable';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['table'] = 'field_data_field_use_mcc_west';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['field'] = 'field_use_mcc_west_editable';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['ui_name'] = 'West Use Master Case Cost';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['label'] = 'West';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_west_editable']['suppress_value'] = 1;
  /* Field: West Manufacturer Price List */
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['id'] = 'field_pricing_sheet_west_editable';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['table'] = 'field_data_field_pricing_sheet_west';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['field'] = 'field_pricing_sheet_west_editable';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['ui_name'] = 'West Manufacturer Price List';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pricing_sheet_west_editable']['suppress_value'] = 1;
  /* Field: Content: Suggested Item Retail (editable) */
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['id'] = 'field_unit_retail_del_west_editable';
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['table'] = 'field_data_field_unit_retail_del_west';
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['field'] = 'field_unit_retail_del_west_editable';
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['label'] = 'Suggested Item Retail';
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_del_west_editable']['suppress_value'] = 1;
  /* Field: Content: Suggested Item Retail (editable) */
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['id'] = 'field_unit_retail_fob_west_editable';
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['table'] = 'field_data_field_unit_retail_fob_west';
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['field'] = 'field_unit_retail_fob_west_editable';
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['label'] = 'Suggested Item Retail';
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_unit_retail_fob_west_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/west-distributor-costs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'West Distributor Costs';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Dietary Information */
  $handler = $view->new_display('page', 'Edit Dietary Information', 'edit_dietary_info');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_processing_attributes_editable' => 'field_dietary_preference_attribu_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_ethnic_attributes_editable' => 'field_dietary_preference_attribu_editable',
    'field_clean_ingredients_bool_editable' => 'field_clean_ingredients_bool_editable',
    'field_ingredients_editable' => 'field_clean_ingredients_bool_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ethnic_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clean_ingredients_bool_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ingredients_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Dietary Preference (editable) */
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['id'] = 'field_dietary_preference_attribu_editable';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['table'] = 'field_data_field_dietary_preference_attribu';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['field'] = 'field_dietary_preference_attribu_editable';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['label'] = 'Dietary Preference';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_dietary_preference_attribu_editable']['suppress_value'] = 1;
  /* Field: Content: Processing (editable) */
  $handler->display->display_options['fields']['field_processing_attributes_editable']['id'] = 'field_processing_attributes_editable';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['table'] = 'field_data_field_processing_attributes';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['field'] = 'field_processing_attributes_editable';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['label'] = 'Processing';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_processing_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_processing_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_processing_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Major Allergen (editable) */
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['id'] = 'field_major_allergen_attributes_editable';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['table'] = 'field_data_field_major_allergen_attributes';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['field'] = 'field_major_allergen_attributes_editable';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['label'] = 'Major Allergen';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_major_allergen_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Other (editable) */
  $handler->display->display_options['fields']['field_other_attributes_editable']['id'] = 'field_other_attributes_editable';
  $handler->display->display_options['fields']['field_other_attributes_editable']['table'] = 'field_data_field_other_attributes';
  $handler->display->display_options['fields']['field_other_attributes_editable']['field'] = 'field_other_attributes_editable';
  $handler->display->display_options['fields']['field_other_attributes_editable']['label'] = 'Other';
  $handler->display->display_options['fields']['field_other_attributes_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_other_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_other_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_other_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_other_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Ethnic (editable) */
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['id'] = 'field_ethnic_attributes_editable';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['table'] = 'field_data_field_ethnic_attributes';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['field'] = 'field_ethnic_attributes_editable';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['label'] = 'Ethnic';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_ethnic_attributes_editable']['suppress_value'] = 1;
  /* Field: Content: Clean Ingredients (editable) */
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['id'] = 'field_clean_ingredients_bool_editable';
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['table'] = 'field_data_field_clean_ingredients_bool';
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['field'] = 'field_clean_ingredients_bool_editable';
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['label'] = 'Ingredients';
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_clean_ingredients_bool_editable']['suppress_value'] = 1;
  /* Field: Content: Ingredients (editable) */
  $handler->display->display_options['fields']['field_ingredients_editable']['id'] = 'field_ingredients_editable';
  $handler->display->display_options['fields']['field_ingredients_editable']['table'] = 'field_data_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients_editable']['field'] = 'field_ingredients_editable';
  $handler->display->display_options['fields']['field_ingredients_editable']['label'] = 'Ingredients';
  $handler->display->display_options['fields']['field_ingredients_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ingredients_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ingredients_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_ingredients_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/dietary-info';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Dietary Information';
  $handler->display->display_options['menu']['weight'] = '8';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Non-Food Items */
  $handler = $view->new_display('page', 'Edit Non-Food Items', 'edit_non_food_items');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unfi-column-editing';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'field_part_number',
    'field_pesticide_editable' => 'field_pesticide_editable',
    'field_registered_with_the_epa_editable' => 'field_registered_with_the_epa_editable',
    'field_exempt_from_the_epa_editable' => 'field_registered_with_the_epa_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pesticide_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registered_with_the_epa_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exempt_from_the_epa_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Pesticide (editable) */
  $handler->display->display_options['fields']['field_pesticide_editable']['id'] = 'field_pesticide_editable';
  $handler->display->display_options['fields']['field_pesticide_editable']['table'] = 'field_data_field_pesticide';
  $handler->display->display_options['fields']['field_pesticide_editable']['field'] = 'field_pesticide_editable';
  $handler->display->display_options['fields']['field_pesticide_editable']['label'] = 'Pesticide';
  $handler->display->display_options['fields']['field_pesticide_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pesticide_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pesticide_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_pesticide_editable']['suppress_value'] = 1;
  /* Field: Content: Registered with the EPA (editable) */
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['id'] = 'field_registered_with_the_epa_editable';
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['table'] = 'field_data_field_registered_with_the_epa';
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['field'] = 'field_registered_with_the_epa_editable';
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['label'] = 'EPA';
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_registered_with_the_epa_editable']['suppress_value'] = 1;
  /* Field: Content: Exempt from the EPA (editable) */
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['id'] = 'field_exempt_from_the_epa_editable';
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['table'] = 'field_data_field_exempt_from_the_epa';
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['field'] = 'field_exempt_from_the_epa_editable';
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['label'] = 'Exempt from the EPA';
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_exempt_from_the_epa_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/non-food-items';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Non-Food Items';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Non-Food Items */
  $handler = $view->new_display('panel_pane', 'Non-Food Items', 'non_food_items');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Non-Food Items';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_ubs_number' => 'field_ubs_number',
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_contains_attributes_editable' => 'field_contains_attributes_editable',
    'field_dietary_preference_attribu_editable' => 'field_dietary_preference_attribu_editable',
    'field_fat_content_attributes_editable' => 'field_fat_content_attributes_editable',
    'field_free_of_attributes_editable' => 'field_free_of_attributes_editable',
    'field_major_allergen_attributes_editable' => 'field_major_allergen_attributes_editable',
    'field_other_attributes_editable' => 'field_other_attributes_editable',
    'field_processing_attributes_editable' => 'field_processing_attributes_editable',
    'field_salt_content_attributes_editable' => 'field_salt_content_attributes_editable',
    'field_sweetener_attributes_editable' => 'field_sweetener_attributes_editable',
    'field_third_party_certificates_editable' => 'field_third_party_certificates_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contains_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dietary_preference_attribu_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fat_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_free_of_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_allergen_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processing_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salt_content_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sweetener_attributes_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_party_certificates_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Pesticide */
  $handler->display->display_options['fields']['field_pesticide']['id'] = 'field_pesticide';
  $handler->display->display_options['fields']['field_pesticide']['table'] = 'field_data_field_pesticide';
  $handler->display->display_options['fields']['field_pesticide']['field'] = 'field_pesticide';
  $handler->display->display_options['fields']['field_pesticide']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_pesticide']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Content: Registered with the EPA */
  $handler->display->display_options['fields']['field_registered_with_the_epa']['id'] = 'field_registered_with_the_epa';
  $handler->display->display_options['fields']['field_registered_with_the_epa']['table'] = 'field_data_field_registered_with_the_epa';
  $handler->display->display_options['fields']['field_registered_with_the_epa']['field'] = 'field_registered_with_the_epa';
  $handler->display->display_options['fields']['field_registered_with_the_epa']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_registered_with_the_epa']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Content: Exempt from the EPA */
  $handler->display->display_options['fields']['field_exempt_from_the_epa']['id'] = 'field_exempt_from_the_epa';
  $handler->display->display_options['fields']['field_exempt_from_the_epa']['table'] = 'field_data_field_exempt_from_the_epa';
  $handler->display->display_options['fields']['field_exempt_from_the_epa']['field'] = 'field_exempt_from_the_epa';
  $handler->display->display_options['fields']['field_exempt_from_the_epa']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_exempt_from_the_epa']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: SRM Internal Info */
  $handler = $view->new_display('panel_pane', 'SRM Internal Info', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'UNFI Internal Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    12 => '12',
    4 => '4',
    5 => '5',
    6 => '6',
    13 => '13',
    14 => '14',
    11 => '11',
    7 => '7',
    8 => '8',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'title' => 'title',
    'field_west_dept' => 'field_west_dept',
    'field_west_category' => 'field_west_category',
    'field_west_subheader_catalog' => 'field_west_subheader_catalog',
    'field_west_brand' => 'field_west_brand',
    'field_east_category' => 'field_east_category',
    'field_ubs_number' => 'field_ubs_number',
    'field_east_catalog_header' => 'field_east_catalog_header',
    'field_east_brand' => 'field_east_brand',
    'field_national_selling_pack' => 'field_national_selling_pack',
    'field_exclusive' => 'field_exclusive',
    'field_warehouse_group' => 'field_warehouse_group',
    'field_catalog_brand' => 'field_catalog_brand',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_dept' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_subheader_catalog' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ubs_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_catalog_header' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_national_selling_pack' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exclusive' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warehouse_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Manufacturer Part Number */
  $handler->display->display_options['fields']['field_part_number']['id'] = 'field_part_number';
  $handler->display->display_options['fields']['field_part_number']['table'] = 'field_data_field_part_number';
  $handler->display->display_options['fields']['field_part_number']['field'] = 'field_part_number';
  $handler->display->display_options['fields']['field_part_number']['type'] = 'editable';
  $handler->display->display_options['fields']['field_part_number']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: East Category */
  $handler->display->display_options['fields']['field_east_category']['id'] = 'field_east_category';
  $handler->display->display_options['fields']['field_east_category']['table'] = 'field_data_field_east_category';
  $handler->display->display_options['fields']['field_east_category']['field'] = 'field_east_category';
  /* Field: Content: West Category */
  $handler->display->display_options['fields']['field_west_category']['id'] = 'field_west_category';
  $handler->display->display_options['fields']['field_west_category']['table'] = 'field_data_field_west_category';
  $handler->display->display_options['fields']['field_west_category']['field'] = 'field_west_category';
  /* Field: Content: West Dept */
  $handler->display->display_options['fields']['field_west_dept']['id'] = 'field_west_dept';
  $handler->display->display_options['fields']['field_west_dept']['table'] = 'field_data_field_west_dept';
  $handler->display->display_options['fields']['field_west_dept']['field'] = 'field_west_dept';
  /* Field: Content: West Subheader Catalog */
  $handler->display->display_options['fields']['field_west_subheader_catalog']['id'] = 'field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog']['table'] = 'field_data_field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog']['field'] = 'field_west_subheader_catalog';
  /* Field: Content: National Selling Pack */
  $handler->display->display_options['fields']['field_national_selling_pack']['id'] = 'field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack']['table'] = 'field_data_field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack']['field'] = 'field_national_selling_pack';
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Choose Cost */
  $handler->display->display_options['fields']['field_use_mcc_east']['id'] = 'field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east']['table'] = 'field_data_field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east']['field'] = 'field_use_mcc_east';
  /* Field: Content: Guaranteed Shelf Life to Retail */
  $handler->display->display_options['fields']['field_shelf_life_retail']['id'] = 'field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['table'] = 'field_data_field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['field'] = 'field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_request_form_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Request Form (field_request_form)',
    ),
  );

  /* Display: Edit SRM Internal Info */
  $handler = $view->new_display('page', 'Edit SRM Internal Info', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    6 => '6',
    11 => '11',
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_part_number' => 'field_part_number',
    'field_east_category_editable' => 'field_east_category_editable',
    'field_west_category_editable' => 'field_east_category_editable',
    'field_west_dept_editable' => 'field_east_category_editable',
    'field_west_subheader_catalog_editable' => 'field_east_category_editable',
    'field_national_selling_pack_editable' => 'field_national_selling_pack_editable',
    'field_print_in_publications_editable' => 'field_national_selling_pack_editable',
    'field_use_mcc_east_editable' => 'field_national_selling_pack_editable',
    'field_shelf_life_retail_editable' => 'field_national_selling_pack_editable',
    'field_requested_by_editable' => 'field_national_selling_pack_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_part_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_east_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_category_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_dept_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_west_subheader_catalog_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_national_selling_pack_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_print_in_publications_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_use_mcc_east_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shelf_life_retail_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requested_by_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_unit_upc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit_upc']['type'] = 'text_plain';
  /* Field: Content: East Category (editable) */
  $handler->display->display_options['fields']['field_east_category_editable']['id'] = 'field_east_category_editable';
  $handler->display->display_options['fields']['field_east_category_editable']['table'] = 'field_data_field_east_category';
  $handler->display->display_options['fields']['field_east_category_editable']['field'] = 'field_east_category_editable';
  $handler->display->display_options['fields']['field_east_category_editable']['label'] = 'East';
  $handler->display->display_options['fields']['field_east_category_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_east_category_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_east_category_editable']['suppress_value'] = 1;
  /* Field: Content: West Category (editable) */
  $handler->display->display_options['fields']['field_west_category_editable']['id'] = 'field_west_category_editable';
  $handler->display->display_options['fields']['field_west_category_editable']['table'] = 'field_data_field_west_category';
  $handler->display->display_options['fields']['field_west_category_editable']['field'] = 'field_west_category_editable';
  $handler->display->display_options['fields']['field_west_category_editable']['label'] = 'West';
  $handler->display->display_options['fields']['field_west_category_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_category_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_category_editable']['suppress_value'] = 1;
  /* Field: Content: West Dept (editable) */
  $handler->display->display_options['fields']['field_west_dept_editable']['id'] = 'field_west_dept_editable';
  $handler->display->display_options['fields']['field_west_dept_editable']['table'] = 'field_data_field_west_dept';
  $handler->display->display_options['fields']['field_west_dept_editable']['field'] = 'field_west_dept_editable';
  $handler->display->display_options['fields']['field_west_dept_editable']['label'] = 'West Dept';
  $handler->display->display_options['fields']['field_west_dept_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_dept_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_dept_editable']['suppress_value'] = 1;
  /* Field: Content: West Subheader Catalog (editable) */
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['id'] = 'field_west_subheader_catalog_editable';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['table'] = 'field_data_field_west_subheader_catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['field'] = 'field_west_subheader_catalog_editable';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['label'] = 'West Subheader Catalog';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['element_class'] = 'chosen';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_west_subheader_catalog_editable']['suppress_value'] = 1;
  /* Field: Content: National Selling Pack (editable) */
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['id'] = 'field_national_selling_pack_editable';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['table'] = 'field_data_field_national_selling_pack';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['field'] = 'field_national_selling_pack_editable';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['label'] = 'National Selling Pack';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_national_selling_pack_editable']['suppress_value'] = 1;
  /* Field: Content: Print in Publications (editable) */
  $handler->display->display_options['fields']['field_print_in_publications_editable']['id'] = 'field_print_in_publications_editable';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['field'] = 'field_print_in_publications_editable';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['label'] = 'Print in Publications';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_print_in_publications_editable']['suppress_value'] = 1;
  /* Field: Content: Choose Cost (editable) */
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['id'] = 'field_use_mcc_east_editable';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['table'] = 'field_data_field_use_mcc_east';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['field'] = 'field_use_mcc_east_editable';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_use_mcc_east_editable']['suppress_value'] = 1;
  /* Field: Content: Guaranteed Shelf Life to Retail (editable) */
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['id'] = 'field_shelf_life_retail_editable';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['table'] = 'field_data_field_shelf_life_retail';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['field'] = 'field_shelf_life_retail_editable';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_shelf_life_retail_editable']['suppress_value'] = 1;
  /* Field: Content: Requested By (editable) */
  $handler->display->display_options['fields']['field_requested_by_editable']['id'] = 'field_requested_by_editable';
  $handler->display->display_options['fields']['field_requested_by_editable']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by_editable']['field'] = 'field_requested_by_editable';
  $handler->display->display_options['fields']['field_requested_by_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_requested_by_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_requested_by_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_requested_by_editable']['suppress_value'] = 1;
  $handler->display->display_options['path'] = 'node/%/edit-products/srm-internal-info';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SRM Internal Info';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['products'] = $view;

  return $export;
}
