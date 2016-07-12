<?php
/**
 * @file
 * unfi_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unfi_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'inbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'inbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inbox';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'View All';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'name' => 'name',
    'created' => 'created',
    'title' => 'title',
    'field_brand' => 'field_brand',
    'field_requested_by' => 'field_requested_by',
    'nid_1' => 'nid_1',
    'stamp' => 'stamp',
    'sid' => 'sid',
    'ops' => 'ops',
    'uid' => 'uid',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_brand' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_requested_by' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'stamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_replace',
      'aggr_par_column' => 'test',
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'ops' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'views_bulk_operations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no requests in your inbox.';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['relationships']['field_request_form_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Flags: lock_request */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'lock_request';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['num_products']['id'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['table'] = 'products_in_request';
  $handler->display->display_options['fields']['num_products']['field'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['label'] = 'Items';
  $handler->display->display_options['fields']['num_products']['hide_empty'] = TRUE;
  /* Field: Workflow current: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Locked';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'By';
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Workflow node: Current state */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'unfi_dashboard_inbox_workflow';
  $handler->display->display_options['arguments']['sid']['default_argument_options']['glue'] = ',';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['sid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow node: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'group';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Remit Number (field_remit_number) */
  $handler->display->display_options['filters']['field_remit_number_value']['id'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['filters']['field_remit_number_value']['field'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_remit_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['operator_id'] = 'field_remit_number_value_op';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['label'] = 'Remit Number';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['operator'] = 'field_remit_number_value_op';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['identifier'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    15 => 0,
    10 => 0,
    11 => 0,
  );

  /* Display: Inbox - Suppliers/Brokers */
  $handler = $view->new_display('page', 'Inbox - Suppliers/Brokers', 'requests_suppliers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inbox';
  $handler->display->display_options['display_description'] = 'Filtered by Workflow States & User Groups';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'inbox';
  $handler->display->display_options['menu']['title'] = 'My requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Inbox - Admins */
  $handler = $view->new_display('page', 'Inbox - Admins', 'requests_admin');
  $handler->display->display_options['display_description'] = 'Filtered by Workflow States';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['relationships']['field_request_form_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Flags: lock_request */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'lock_request';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  /* Relationship: Content: RCM Category (field_rcm_category) */
  $handler->display->display_options['relationships']['field_rcm_category_tid']['id'] = 'field_rcm_category_tid';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['field'] = 'field_rcm_category_tid';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['label'] = 'rcm';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Taxonomy term: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'field_rcm_category_tid';
  $handler->display->display_options['fields']['field_category']['label'] = 'RCM Category';
  /* Field: Taxonomy term: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['relationship'] = 'field_rcm_category_tid';
  $handler->display->display_options['fields']['field_department']['label'] = 'RCM Dept.';
  /* Field: Workflow node: Current time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['stamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Workflow node: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['label'] = 'Promo Month';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Locked by';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Workflow node: Current state */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'unfi_dashboard_inbox_workflow';
  $handler->display->display_options['arguments']['sid']['default_argument_options']['glue'] = ',';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['sid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'inbox-admin';
  $handler->display->display_options['menu']['title'] = 'All requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Inbox- SRMs */
  $handler = $view->new_display('page', 'Inbox- SRMs', 'requests_srm');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inbox';
  $handler->display->display_options['display_description'] = 'Filtered by Workflow States and Group';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['relationships']['field_request_form_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Flags: lock_request */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'lock_request';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Workflow node: Current time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['stamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Workflow node: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Locked by';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Workflow node: Current state */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'unfi_dashboard_inbox_workflow';
  $handler->display->display_options['arguments']['sid']['default_argument_options']['glue'] = ',';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['sid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'inbox';
  $handler->display->display_options['menu']['title'] = 'My requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All Requests - Admin */
  $handler = $view->new_display('page', 'All Requests - Admin', 'all_requests_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Requests';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['relationships']['field_request_form_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Flags: lock_request */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'lock_request';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  /* Relationship: Content: RCM Category (field_rcm_category) */
  $handler->display->display_options['relationships']['field_rcm_category_tid']['id'] = 'field_rcm_category_tid';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['field'] = 'field_rcm_category_tid';
  $handler->display->display_options['relationships']['field_rcm_category_tid']['label'] = 'rcm_category';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Taxonomy term: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'field_rcm_category_tid';
  $handler->display->display_options['fields']['field_category']['label'] = 'RCM Category';
  /* Field: Taxonomy term: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['relationship'] = 'field_rcm_category_tid';
  $handler->display->display_options['fields']['field_department']['label'] = 'RCM Dept.';
  /* Field: Workflow node: Current time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['stamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Workflow node: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['label'] = 'Promo Months';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Locked by';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'all-requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All Requests - Suppliers/Brokers */
  $handler = $view->new_display('page', 'All Requests - Suppliers/Brokers', 'all_requests_suppliers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Requests';
  $handler->display->display_options['display_description'] = 'Filtered by User Groups';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Workflow node: Current time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['stamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Workflow node: Current state */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['sid_1']['label'] = 'Status';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Urgent */
  $handler->display->display_options['fields']['field_urgent']['id'] = 'field_urgent';
  $handler->display->display_options['fields']['field_urgent']['table'] = 'field_data_field_urgent';
  $handler->display->display_options['fields']['field_urgent']['field'] = 'field_urgent';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'all-requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All Requests - SRMs */
  $handler = $view->new_display('page', 'All Requests - SRMs', 'all_requests_srms');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Requests';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Filtered by Group';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['label'] = 'request';
  $handler->display->display_options['relationships']['field_request_form_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Flags: lock_request */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'lock_request';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: Requested By */
  $handler->display->display_options['fields']['field_requested_by']['id'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['table'] = 'field_data_field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['field'] = 'field_requested_by';
  $handler->display->display_options['fields']['field_requested_by']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_requested_by']['label'] = 'Requestor';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Items';
  /* Field: Workflow node: Current time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['stamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Workflow node: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Lock request';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'Locked by';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'all-requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-unfi-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['inbox'] = $view;

  $view = new view();
  $view->name = 'item_lookup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Item Lookup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Item Lookup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    12 => '12',
    13 => '13',
    14 => '14',
    11 => '11',
    7 => '7',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Enter an Item UPC and click on Apply to see results';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'plain_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'og_group_ref' => 'og_group_ref',
    'sid' => 'sid',
    'created' => 'created',
    'stamp' => 'stamp',
    'field_unit_upc' => 'field_unit_upc',
    'group_group' => 'group_group',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
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
    'group_group' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Items with that UPC';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['id'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['field'] = 'reverse_field_request_form_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow current: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Submitted';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Status Change';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['fields']['field_unit_upc']['label'] = '';
  $handler->display->display_options['fields']['field_unit_upc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc']['element_label_colon'] = FALSE;
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = '';
  $handler->display->display_options['fields']['group_group']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_group']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Item UPC (field_unit_upc) */
  $handler->display->display_options['filters']['field_unit_upc_value']['id'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['filters']['field_unit_upc_value']['field'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['filters']['field_unit_upc_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_unit_upc_value']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_upc_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['operator_id'] = 'field_unit_upc_value_op';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['label'] = 'Item UPC';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['operator'] = 'field_unit_upc_value_op';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['identifier'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Workflow current: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    'ANY' => 'ANY',
  );

  /* Display: UPC Lookup */
  $handler = $view->new_display('panel_pane', 'UPC Lookup', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Lookup items by UPC';
  $export['item_lookup'] = $view;

  $view = new view();
  $view->name = 'my_suppliers';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'My Suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Suppliers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'my_supplier_pick_up_locations_export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: My Suppliers */
  $handler = $view->new_display('panel_pane', 'My Suppliers', 'my_suppliers_pane');
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: My Supplier Contacts Export */
  $handler = $view->new_display('views_data_export', 'My Supplier Contacts Export', 'my_supplier_contacts_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Supplier Contacts';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download Contacts as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Supplier node to the User\'s membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Node membership from Group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_node']['label'] = 'Content node from its membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Contact Type */
  $handler->display->display_options['fields']['field_contact_type']['id'] = 'field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['table'] = 'field_data_field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['field'] = 'field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_contact_type']['delta_offset'] = '0';
  /* Field: Content: Primary Contact */
  $handler->display->display_options['fields']['field_primary_contact']['id'] = 'field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['table'] = 'field_data_field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['field'] = 'field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['relationship'] = 'og_membership_related_node';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'og_membership_related_node';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Mobile */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Regions */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_region']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: Address - Company */
  $handler->display->display_options['fields']['field_address_organisation_name']['id'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_organisation_name']['field'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_organisation_name']['label'] = 'Company';
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address 1';
  /* Field: Content: Address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_address_premise']['id'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_premise']['field'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_premise']['label'] = 'Address 2';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State / Province';
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'Postal code';
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Remit Number */
  $handler->display->display_options['fields']['field_remit_number']['id'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['field'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplier_contact' => 'supplier_contact',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'supplier' => 'supplier',
  );
  $handler->display->display_options['path'] = 'suppliers/%/my_supplier_contacts.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'my_suppliers_pane' => 'my_suppliers_pane',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: My Supplier Vendor Warehouse Locations Export */
  $handler = $view->new_display('views_data_export', 'My Supplier Vendor Warehouse Locations Export', 'my_supplier_pick_up_locations_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Supplier Vendor Warehouse Locations';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download Vendor Warehouse Locations as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Supplier node to the User\'s membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Node membership from Group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_node']['label'] = 'Content node from its membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Address - Company */
  $handler->display->display_options['fields']['field_address_organisation_name']['id'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_organisation_name']['field'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_organisation_name']['label'] = 'Company';
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address 1';
  /* Field: Content: Address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_address_premise']['id'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_premise']['field'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_premise']['label'] = 'Address 2';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State / Province';
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'Postal code';
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Receiving Hours */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Appointment Required */
  $handler->display->display_options['fields']['field_appointment_required']['id'] = 'field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['table'] = 'field_data_field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['field'] = 'field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Special Instructions */
  $handler->display->display_options['fields']['field_special_instructions']['id'] = 'field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['table'] = 'field_data_field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['field'] = 'field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Remit Number */
  $handler->display->display_options['fields']['field_remit_number']['id'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['field'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
  $handler->display->display_options['sorts']['title_1']['table'] = 'node';
  $handler->display->display_options['sorts']['title_1']['field'] = 'title';
  $handler->display->display_options['sorts']['title_1']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pick_up_location' => 'pick_up_location',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'supplier' => 'supplier',
  );
  $handler->display->display_options['path'] = 'suppliers/%/my_supplier_vendor_warehouse_locations.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'my_suppliers_pane' => 'my_suppliers_pane',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['my_suppliers'] = $view;

  $view = new view();
  $view->name = 'supplier_group_members';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'Supplier Group Members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
    'og_roles' => 'og_roles',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_roles' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: OG membership: OG user roles in group */
  $handler->display->display_options['fields']['og_roles']['id'] = 'og_roles';
  $handler->display->display_options['fields']['og_roles']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_roles']['field'] = 'og_roles';
  $handler->display->display_options['fields']['og_roles']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['og_roles']['label'] = 'Roles in group';
  $handler->display->display_options['fields']['og_roles']['empty'] = 'Member';
  /* Sort criterion: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 members';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'OG members';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $export['supplier_group_members'] = $view;

  $view = new view();
  $view->name = 'supplier_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supplier Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supplier Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'og_group_ref' => 'og_group_ref',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No changes have been made to your suppliers\' information.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Flags: notify_srm_of_changes */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'notify_srm_of_changes';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Flags: Flagged time */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['timestamp']['label'] = 'When';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'pick_up_location' => 'pick_up_location',
  );

  /* Display: Supplier Updates */
  $handler = $view->new_display('panel_pane', 'Supplier Updates', 'supplier_updates_pane');
  $export['supplier_updates'] = $view;

  $view = new view();
  $view->name = 'suppliers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Suppliers';
  $handler->display->display_options['use_more_always'] = FALSE;
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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Remit Number */
  $handler->display->display_options['fields']['field_remit_number']['id'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['field'] = 'field_remit_number';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'supplier' => 'supplier',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Remit Number (field_remit_number) */
  $handler->display->display_options['filters']['field_remit_number_value']['id'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['filters']['field_remit_number_value']['field'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['operator_id'] = 'field_remit_number_value_op';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['label'] = 'Remit Number';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['operator'] = 'field_remit_number_value_op';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['identifier'] = 'field_remit_number_value';
  $handler->display->display_options['filters']['field_remit_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'A';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'upper';
  $handler->display->display_options['path'] = 'suppliers';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['validate']['fail'] = 'summary';
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Contacts export */
  $handler = $view->new_display('views_data_export', 'Contacts export', 'contacts_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download Contacts as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Supplier -> OGM';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_node']['label'] = 'OGM -> Contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Contact Type */
  $handler->display->display_options['fields']['field_contact_type']['id'] = 'field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['table'] = 'field_data_field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['field'] = 'field_contact_type';
  $handler->display->display_options['fields']['field_contact_type']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_contact_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_type']['delta_offset'] = '0';
  /* Field: Content: Primary Contact */
  $handler->display->display_options['fields']['field_primary_contact']['id'] = 'field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['table'] = 'field_data_field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['field'] = 'field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_primary_contact']['element_label_colon'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Mobile */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_mobile']['element_label_colon'] = FALSE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Regions */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: Address - Company */
  $handler->display->display_options['fields']['field_address_organisation_name']['id'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_organisation_name']['field'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_organisation_name']['label'] = 'Company';
  $handler->display->display_options['fields']['field_address_organisation_name']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address 1';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_address_premise']['id'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_premise']['field'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_premise']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_address_premise']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State / Province';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'Postal code';
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Remit Number */
  $handler->display->display_options['fields']['field_remit_number']['id'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['field'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'supplier' => 'supplier',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'supplier_contact' => 'supplier_contact',
  );
  $handler->display->display_options['path'] = 'suppliers/all_contacts.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'suppliers';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Vendor Warehouse Locations export */
  $handler = $view->new_display('views_data_export', 'Vendor Warehouse Locations export', 'pick_up_locations_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download Contacts as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Supplier -> OGM';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_node']['label'] = 'OGM -> Warehouse';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Warehouse';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Address - Company */
  $handler->display->display_options['fields']['field_address_organisation_name']['id'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_organisation_name']['field'] = 'field_address_organisation_name';
  $handler->display->display_options['fields']['field_address_organisation_name']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_organisation_name']['label'] = 'Company';
  $handler->display->display_options['fields']['field_address_organisation_name']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address 1';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_address_premise']['id'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_premise']['field'] = 'field_address_premise';
  $handler->display->display_options['fields']['field_address_premise']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_premise']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_address_premise']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State / Province';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'Postal code';
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Receiving Hours */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Appointment Required */
  $handler->display->display_options['fields']['field_appointment_required']['id'] = 'field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['table'] = 'field_data_field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['field'] = 'field_appointment_required';
  $handler->display->display_options['fields']['field_appointment_required']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Special Instructions */
  $handler->display->display_options['fields']['field_special_instructions']['id'] = 'field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['table'] = 'field_data_field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['field'] = 'field_special_instructions';
  $handler->display->display_options['fields']['field_special_instructions']['relationship'] = 'og_membership_related_node';
  /* Field: Content: Remit Number */
  $handler->display->display_options['fields']['field_remit_number']['id'] = 'field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['table'] = 'field_data_field_remit_number';
  $handler->display->display_options['fields']['field_remit_number']['field'] = 'field_remit_number';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'supplier' => 'supplier',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'pick_up_location' => 'pick_up_location',
  );
  $handler->display->display_options['path'] = 'suppliers/all_vendor_warehouse_locations.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'suppliers';
  $handler->display->display_options['segment_size'] = '100';
  $export['suppliers'] = $view;

  $view = new view();
  $view->name = 'welcome_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Welcome Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Welcome';
  $handler->display->display_options['css_class'] = 'welcome-slides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_welcome_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_welcome_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['random'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Welcome Slides */
  $handler->display->display_options['fields']['field_welcome_slides']['id'] = 'field_welcome_slides';
  $handler->display->display_options['fields']['field_welcome_slides']['table'] = 'field_data_field_welcome_slides';
  $handler->display->display_options['fields']['field_welcome_slides']['field'] = 'field_welcome_slides';
  $handler->display->display_options['fields']['field_welcome_slides']['label'] = '';
  $handler->display->display_options['fields']['field_welcome_slides']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_welcome_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_welcome_slides']['settings'] = array(
    'image_style' => 'welcome_slides',
    'image_link' => '',
  );
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
    'welcome_slides' => 'welcome_slides',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $export['welcome_slides'] = $view;

  return $export;
}
