<?php
/**
 * @file
 * item_request_form_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function item_request_form_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_entity_reference_filter_form';
  $view->description = 'Used by Request Item to display Vendor Warehouse Locations for selection';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact entity reference filter form';
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
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No contacts found. You must create at least one contact before creating a Vendor Warehouse Location.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'unfi_custom_group_ref';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2953',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contact_type';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['contact_entity_reference_filter_form'] = $view;

  $view = new view();
  $view->name = 'new_item_requests_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Item Requests Form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Item Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'View All';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'created' => 'created',
    'title' => 'title',
    'field_brand' => 'field_brand',
    'field_requested_by' => 'field_requested_by',
    'num_products' => 'num_products',
    'sid_1' => 'sid_1',
    'comment' => 'comment',
    'changed' => 'changed',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requested_by' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'num_products' => array(
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
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
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
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  /* Relationship: New Item Request Lock: Locked by */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'nir_lock';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
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
  /* Field: Content: Number of items in a request */
  $handler->display->display_options['fields']['num_products']['id'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['table'] = 'products_in_request';
  $handler->display->display_options['fields']['num_products']['field'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['label'] = 'Items';
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
  /* Field: New Item Request Lock: Is Locked */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Locked';
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
    'request_form' => 'request_form',
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  /* Relationship: New Item Request Lock: Locked by */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'nir_lock';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
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
  /* Field: Content: Number of items in a request */
  $handler->display->display_options['fields']['num_products']['id'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['table'] = 'products_in_request';
  $handler->display->display_options['fields']['num_products']['field'] = 'num_products';
  $handler->display->display_options['fields']['num_products']['label'] = 'Items';
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
  /* Field: New Item Request Lock: Is Locked */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Locked';
  $handler->display->display_options['fields']['timestamp']['not'] = 0;
  /* Field: New Item Request Lock: Locked by */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'nir_lock';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
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
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'access denied';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['id'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['field'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['label'] = 'Product';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Groups audience */
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
  $handler->display->display_options['fields']['field_unit_upc']['relationship'] = 'reverse_field_request_form_node';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['relationship'] = 'reverse_field_request_form_node';
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
  $handler->display->display_options['fields']['field_unit_of_measure']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['fields']['field_unit_of_measure']['label'] = '';
  $handler->display->display_options['fields']['field_unit_of_measure']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_request_form_node';
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
    'request_form' => 'request_form',
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
  $export['new_item_requests_form'] = $view;

  $view = new view();
  $view->name = 'request_form_promotions_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Request Form Promotions Export';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['id'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['field'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['label'] = 'Product';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['required'] = TRUE;
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
  $handler->display->display_options['fields']['field_case_pack']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Inner Pack */
  $handler->display->display_options['fields']['field_inner_pack']['id'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['table'] = 'field_data_field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['field'] = 'field_inner_pack';
  $handler->display->display_options['fields']['field_inner_pack']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['fields']['field_inner_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Master Case Pack */
  $handler->display->display_options['fields']['field_mc_pack']['id'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['table'] = 'field_data_field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['field'] = 'field_mc_pack';
  $handler->display->display_options['fields']['field_mc_pack']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['fields']['field_mc_pack']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['relationship'] = 'reverse_field_request_form_node';
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
  $handler->display->display_options['fields']['field_unit_of_measure']['relationship'] = 'reverse_field_request_form_node';
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
  /* Field: Content: UNFI Only Approved Manufacturer Chargeback */
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['id'] = 'field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['table'] = 'field_data_field_unfi_only_approved_mcb';
  $handler->display->display_options['fields']['field_unfi_only_approved_mcb']['field'] = 'field_unfi_only_approved_mcb';
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
  /* Field: Content: Pre-90 Day Discount? */
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['id'] = 'field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['table'] = 'field_data_field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['field'] = 'field_pre_90_day_discount_';
  $handler->display->display_options['fields']['field_pre_90_day_discount_']['relationship'] = 'field_request_item_target_id';
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
    'request_form' => 'request_form',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';

  /* Display: Request Item */
  $handler = $view->new_display('views_data_export', 'Request Item', 'request_item_csv_data');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'request_form_promotions_export:shipper_components_csv_data';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['path'] = 'request/%/promotions_and_shipper_data.csv';

  /* Display: Shipper components */
  $handler = $view->new_display('views_data_export', 'Shipper components', 'shipper_components_csv_data');
  $handler->display->display_options['display_comment'] = 'This CSV only contains Shipper Components data. It is embedded in the Request Item CSV and should not be linked to directly.';
  $handler->display->display_options['display_description'] = 'This is embedded in the Request Item CSV and should not be linked to directly.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['id'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['field'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['reverse_field_request_form_node']['required'] = TRUE;
  /* Relationship: Content: Shipper Components (field_shipper_components) */
  $handler->display->display_options['relationships']['field_shipper_components_value']['id'] = 'field_shipper_components_value';
  $handler->display->display_options['relationships']['field_shipper_components_value']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['relationships']['field_shipper_components_value']['field'] = 'field_shipper_components_value';
  $handler->display->display_options['relationships']['field_shipper_components_value']['relationship'] = 'reverse_field_request_form_node';
  $handler->display->display_options['relationships']['field_shipper_components_value']['label'] = 'field_shipper_components';
  $handler->display->display_options['relationships']['field_shipper_components_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_shipper_components_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: UPC */
  $handler->display->display_options['fields']['field_upc']['id'] = 'field_upc';
  $handler->display->display_options['fields']['field_upc']['table'] = 'field_data_field_upc';
  $handler->display->display_options['fields']['field_upc']['field'] = 'field_upc';
  $handler->display->display_options['fields']['field_upc']['relationship'] = 'field_shipper_components_value';
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
  $export['request_form_promotions_export'] = $view;

  return $export;
}
