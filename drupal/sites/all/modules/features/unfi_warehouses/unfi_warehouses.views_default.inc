<?php
/**
 * @file
 * unfi_warehouses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unfi_warehouses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'warehouses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Warehouses';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_region',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Warehouse ID */
  $handler->display->display_options['fields']['field_warehouse_id']['id'] = 'field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['table'] = 'field_data_field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['field'] = 'field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['label'] = '';
  $handler->display->display_options['fields']['field_warehouse_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: State (field_state) */
  $handler->display->display_options['sorts']['field_state_tid']['id'] = 'field_state_tid';
  $handler->display->display_options['sorts']['field_state_tid']['table'] = 'field_data_field_state';
  $handler->display->display_options['sorts']['field_state_tid']['field'] = 'field_state_tid';
  /* Contextual filter: Content: Regions (field_region) */
  $handler->display->display_options['arguments']['field_region_target_id']['id'] = 'field_region_target_id';
  $handler->display->display_options['arguments']['field_region_target_id']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_target_id']['field'] = 'field_region_target_id';
  $handler->display->display_options['arguments']['field_region_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_region_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_region_target_id']['default_argument_options']['argument'] = '10';
  $handler->display->display_options['arguments']['field_region_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_target_id']['summary_options']['items_per_page'] = '25';
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
    'warehouse' => 'warehouse',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_warehouse_id' => 'field_warehouse_id',
    'field_region' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_warehouse_id' => 'field_warehouse_id',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_city], ';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '([title])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Warehouse ID */
  $handler->display->display_options['fields']['field_warehouse_id']['id'] = 'field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['table'] = 'field_data_field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['field'] = 'field_warehouse_id';
  $handler->display->display_options['fields']['field_warehouse_id']['label'] = '';
  $handler->display->display_options['fields']['field_warehouse_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_warehouse_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: City (field_city) */
  $handler->display->display_options['sorts']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['sorts']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['sorts']['field_city_value']['field'] = 'field_city_value';
  $export['warehouses'] = $view;

  return $export;
}
