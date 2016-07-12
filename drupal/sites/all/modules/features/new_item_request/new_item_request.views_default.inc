<?php
/**
 * @file
 * new_item_request.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function new_item_request_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_item_requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Item Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Item Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'View All';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'og_group_ref' => 'og_group_ref',
    'sid_1' => 'sid_1',
    'comment' => 'comment',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'sid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
  $handler->display->display_options['empty']['area']['content'] = 'No New Item Requests were found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Requests';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Supplier */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow current: Current state */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['label'] = 'Status';
  /* Field: Workflow current: Current comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = 'comment';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Submitted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Status Change';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: New Item Request Lock: Is Locked */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['not'] = 0;
  /* Contextual filter: Workflow current: Current state */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'unfi_workflow_inbox';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['sid']['break_phrase'] = TRUE;
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
    'new_item_request' => 'new_item_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
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
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
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
  );

  /* Display: UNFI Admins */
  $handler = $view->new_display('page', 'UNFI Admins', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'approval-queue';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    4 => '4',
    5 => '5',
    6 => '6',
    12 => '12',
    13 => '13',
    14 => '14',
    11 => '11',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['path'] = 'new-item-requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'New Item Requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Suppliers/Brokers */
  $handler = $view->new_display('page', 'Suppliers/Brokers', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'approval-queue';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Workflow current: Current state */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'unfi_workflow_inbox';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['sid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'new-item-requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'New Item Requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Coder Lookup */
  $handler = $view->new_display('panel_pane', 'Coder Lookup', 'coder_lookup');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Item Lookup';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    12 => '12',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'og_group_ref' => 'og_group_ref',
    'title_1' => 'title_1',
    'field_unit_upc' => 'field_unit_upc',
    'field_size' => 'field_size',
    'field_unit_of_measure' => 'field_size',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
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
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_upc' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_unit_of_measure' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_item_target_id']['id'] = 'field_request_item_target_id';
  $handler->display->display_options['relationships']['field_request_item_target_id']['table'] = 'field_data_field_request_item';
  $handler->display->display_options['relationships']['field_request_item_target_id']['field'] = 'field_request_item_target_id';
  $handler->display->display_options['relationships']['field_request_item_target_id']['label'] = 'field_request_item';
  $handler->display->display_options['relationships']['field_request_item_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Supplier */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Product Description';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['relationship'] = 'field_request_item_target_id';
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
  $handler->display->display_options['fields']['field_unit_of_measure']['label'] = '';
  $handler->display->display_options['fields']['field_unit_of_measure']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'new_item_request' => 'new_item_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    6 => '6',
    34 => '34',
    35 => '35',
  );
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
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
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  /* Filter criterion: Content: Item UPC (field_unit_upc) */
  $handler->display->display_options['filters']['field_unit_upc_value']['id'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['filters']['field_unit_upc_value']['field'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['relationship'] = 'field_request_item_target_id';
  $handler->display->display_options['filters']['field_unit_upc_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_unit_upc_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['operator_id'] = 'field_unit_upc_value_op';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['label'] = 'Item UPC';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['operator'] = 'field_unit_upc_value_op';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['identifier'] = 'field_unit_upc_value';
  $handler->display->display_options['filters']['field_unit_upc_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
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
  );
  $export['new_item_requests'] = $view;

  return $export;
}
