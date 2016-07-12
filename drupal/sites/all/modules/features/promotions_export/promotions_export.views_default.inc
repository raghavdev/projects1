<?php
/**
 * @file
 * promotions_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function promotions_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_item_request_promotions_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Item Request Promotions Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_item_target_id';
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Inner Pack */
  $handler->display->display_options['fields']['field_inner_pack']['id'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['table'] = 'field_data_field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['field'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_inner_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Master Case Pack */
  $handler->display->display_options['fields']['field_mc_pack']['id'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['table'] = 'field_data_field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['field'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_mc_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['relationship'] = 'field_request_item_target_id';
  /* Field: Content: New Product Discount */
  $handler->display->display_options['fields']['field_new_product_discount']['id'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['table'] = 'field_data_field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['field'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['relationship'] = 'field_request_item_target_id';
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
  $handler->display->display_options['fields']['field_new_product_discount_type']['relationship'] = 'field_request_item_target_id';
  /* Field: Content: UNFI Only Approved Manufacturer Chargeback */
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['id'] = 'field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['table'] = 'field_data_field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['field'] = 'field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['relationship'] = 'field_request_item_target_id';
  /* Field: Content: UNFI Contribution */
  $handler->display->display_options['fields']['field_unfi_contribution']['id'] = 'field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['table'] = 'field_data_field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['field'] = 'field_unfi_contribution';
  $handler->display->display_options['fields']['field_unfi_contribution']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_unfi_contribution']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Pre-90 Day Discount? */
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['id'] = 'field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['table'] = 'field_data_field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['field'] = 'field_pre_90_day_discount_';
  /* Field: Content: Pre-90 Order Dates */
  $handler->display->display_options['fields']['field_pre_90_order_dates']['id'] = 'field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['table'] = 'field_data_field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['field'] = 'field_pre_90_order_dates';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_pre_90_order_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: UNFI Buy Dates */
  $handler->display->display_options['fields']['field_unfi_buy_dates']['id'] = 'field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['table'] = 'field_data_field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['field'] = 'field_unfi_buy_dates';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_unfi_buy_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Is this item a shipper? */
  $handler->display->display_options['fields']['field_shipper']['id'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['table'] = 'field_data_field_shipper';
  $handler->display->display_options['fields']['field_shipper']['field'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_shipper']['element_label_colon'] = FALSE;
  /* Field: Content: Units per shipper */
  $handler->display->display_options['fields']['field_shipper_unit_total']['id'] = 'field_shipper_unit_total';
  $handler->display->display_options['fields']['field_shipper_unit_total']['table'] = 'field_data_field_shipper_unit_total';
  $handler->display->display_options['fields']['field_shipper_unit_total']['field'] = 'field_shipper_unit_total';
  $handler->display->display_options['fields']['field_shipper_unit_total']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['field_shipper_unit_total']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Request Item */
  $handler = $view->new_display('views_data_export', 'Request Item', 'request_item_csv_data');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'new_item_request_promotions_export:shipper_components_csv_data';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['path'] = 'request/%/promotions_and_shipper_data.csv';

  /* Display: Shipper components */
  $handler = $view->new_display('views_data_export', 'Shipper components', 'shipper_components_csv_data');
  $handler->display->display_options['display_comment'] = 'This CSV only contains Shipper Components data. It is embedded in the Request Item CSV and should not be linked to directly.';
  $handler->display->display_options['display_description'] = 'This is embedded in the Request Item CSV and should not be linked to directly.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Shipper Components (field_shipper_components) */
  $handler->display->display_options['relationships']['field_shipper_components_value']['id'] = 'field_shipper_components_value';
  $handler->display->display_options['relationships']['field_shipper_components_value']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['relationships']['field_shipper_components_value']['field'] = 'field_shipper_components_value';
  $handler->display->display_options['relationships']['field_shipper_components_value']['label'] = 'field_shipper_components';
  $handler->display->display_options['relationships']['field_shipper_components_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_shipper_components_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['label'] = 'Product UPC';
  /* Field: Field collection item: UPC */
  $handler->display->display_options['fields']['field_upc']['id'] = 'field_upc';
  $handler->display->display_options['fields']['field_upc']['table'] = 'field_data_field_upc';
  $handler->display->display_options['fields']['field_upc']['field'] = 'field_upc';
  $handler->display->display_options['fields']['field_upc']['relationship'] = 'field_shipper_components_value';
  $handler->display->display_options['fields']['field_upc']['label'] = 'Shipper UPC';
  /* Field: Field collection item: UNFI Item Number */
  $handler->display->display_options['fields']['field_unfi_item_number']['id'] = 'field_unfi_item_number';
  $handler->display->display_options['fields']['field_unfi_item_number']['table'] = 'field_data_field_unfi_item_number';
  $handler->display->display_options['fields']['field_unfi_item_number']['field'] = 'field_unfi_item_number';
  $handler->display->display_options['fields']['field_unfi_item_number']['relationship'] = 'field_shipper_components_value';
  $handler->display->display_options['fields']['field_unfi_item_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Product Description */
  $handler->display->display_options['fields']['field_product_description']['id'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['table'] = 'field_data_field_product_description';
  $handler->display->display_options['fields']['field_product_description']['field'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['relationship'] = 'field_shipper_components_value';
  $handler->display->display_options['fields']['field_product_description']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Size */
  $handler->display->display_options['fields']['field_size_shipper']['id'] = 'field_size_shipper';
  $handler->display->display_options['fields']['field_size_shipper']['table'] = 'field_data_field_size_shipper';
  $handler->display->display_options['fields']['field_size_shipper']['field'] = 'field_size_shipper';
  $handler->display->display_options['fields']['field_size_shipper']['relationship'] = 'field_shipper_components_value';
  $handler->display->display_options['fields']['field_size_shipper']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Units of Measure */
  $handler->display->display_options['fields']['field_units_of_measure']['id'] = 'field_units_of_measure';
  $handler->display->display_options['fields']['field_units_of_measure']['table'] = 'field_data_field_units_of_measure';
  $handler->display->display_options['fields']['field_units_of_measure']['field'] = 'field_units_of_measure';
  $handler->display->display_options['fields']['field_units_of_measure']['relationship'] = 'field_shipper_components_value';
  /* Field: Field collection item: Quantity */
  $handler->display->display_options['fields']['field_quantity']['id'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['table'] = 'field_data_field_quantity';
  $handler->display->display_options['fields']['field_quantity']['field'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['relationship'] = 'field_shipper_components_value';
  $handler->display->display_options['fields']['field_quantity']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'request/%/shipper-components.csv';
  $export['new_item_request_promotions_export'] = $view;

  return $export;
}
