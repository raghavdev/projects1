<?php
/**
 * @file
 * marketing_dashboard_products_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marketing_dashboard_products_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'marketing_dashboard_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marketing Dashboard Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_print_in_publications_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_brand_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_ubs_number_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_wbs_number_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'stamp' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'stamp_1' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_intro_promo_months_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'plain_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'field_unit_upc' => 'field_unit_upc',
    'title' => 'title',
    'field_case_pack' => 'field_case_pack',
    'field_unit_of_measure' => 'field_unit_of_measure',
    'field_size' => 'field_size',
    'field_intro_promo_months' => 'field_intro_promo_months',
    'field_print_in_publications' => 'field_print_in_publications',
    'field_brand' => 'field_brand',
    'field_warehouses_west' => 'field_warehouses_west',
    'field_primary_image' => 'field_primary_image',
    'nid' => 'nid',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
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
    'title' => array(
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
    'field_unit_of_measure' => array(
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
    'field_intro_promo_months' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_print_in_publications' => array(
      'sortable' => 0,
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
    'field_warehouses_west' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_primary_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'field_request_form_target_id';
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
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['label'] = 'Pack Size';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Product Image */
  $handler->display->display_options['fields']['field_primary_image']['id'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['table'] = 'field_data_field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['field'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_primary_image']['type'] = 'direct_download_icon';
  $handler->display->display_options['fields']['field_primary_image']['settings'] = array(
    'img_style' => '',
  );
  $handler->display->display_options['fields']['field_primary_image']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Print in Publications (field_print_in_publications) */
  $handler->display->display_options['filters']['field_print_in_publications_value']['id'] = 'field_print_in_publications_value';
  $handler->display->display_options['filters']['field_print_in_publications_value']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['filters']['field_print_in_publications_value']['field'] = 'field_print_in_publications_value';
  $handler->display->display_options['filters']['field_print_in_publications_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_print_in_publications_value']['group'] = 1;
  $handler->display->display_options['filters']['field_print_in_publications_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_print_in_publications_value']['expose']['operator_id'] = 'field_print_in_publications_value_op';
  $handler->display->display_options['filters']['field_print_in_publications_value']['expose']['label'] = 'Print in Publications';
  $handler->display->display_options['filters']['field_print_in_publications_value']['expose']['operator'] = 'field_print_in_publications_value_op';
  $handler->display->display_options['filters']['field_print_in_publications_value']['expose']['identifier'] = 'field_print_in_publications_value';
  $handler->display->display_options['filters']['field_print_in_publications_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['label'] = 'Print in Publications';
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['identifier'] = 'field_print_in_publications_value';
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_print_in_publications_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Yes',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'No',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Workflow node: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  /* Filter criterion: Content: Brand (field_brand) */
  $handler->display->display_options['filters']['field_brand_value']['id'] = 'field_brand_value';
  $handler->display->display_options['filters']['field_brand_value']['table'] = 'field_data_field_brand';
  $handler->display->display_options['filters']['field_brand_value']['field'] = 'field_brand_value';
  $handler->display->display_options['filters']['field_brand_value']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['filters']['field_brand_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_brand_value']['group'] = 1;
  $handler->display->display_options['filters']['field_brand_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_value']['expose']['operator_id'] = 'field_brand_value_op';
  $handler->display->display_options['filters']['field_brand_value']['expose']['label'] = 'Brand';
  $handler->display->display_options['filters']['field_brand_value']['expose']['operator'] = 'field_brand_value_op';
  $handler->display->display_options['filters']['field_brand_value']['expose']['identifier'] = 'field_brand_value';
  $handler->display->display_options['filters']['field_brand_value']['expose']['remember_roles'] = array(
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
    18 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: East Item Number (field_ubs_number) */
  $handler->display->display_options['filters']['field_ubs_number_value']['id'] = 'field_ubs_number_value';
  $handler->display->display_options['filters']['field_ubs_number_value']['table'] = 'field_data_field_ubs_number';
  $handler->display->display_options['filters']['field_ubs_number_value']['field'] = 'field_ubs_number_value';
  $handler->display->display_options['filters']['field_ubs_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ubs_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ubs_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ubs_number_value']['expose']['operator_id'] = 'field_ubs_number_value_op';
  $handler->display->display_options['filters']['field_ubs_number_value']['expose']['label'] = 'East Item Number';
  $handler->display->display_options['filters']['field_ubs_number_value']['expose']['operator'] = 'field_ubs_number_value_op';
  $handler->display->display_options['filters']['field_ubs_number_value']['expose']['identifier'] = 'field_ubs_number_value';
  $handler->display->display_options['filters']['field_ubs_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: West Item Number (field_wbs_number) */
  $handler->display->display_options['filters']['field_wbs_number_value']['id'] = 'field_wbs_number_value';
  $handler->display->display_options['filters']['field_wbs_number_value']['table'] = 'field_data_field_wbs_number';
  $handler->display->display_options['filters']['field_wbs_number_value']['field'] = 'field_wbs_number_value';
  $handler->display->display_options['filters']['field_wbs_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_wbs_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_wbs_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wbs_number_value']['expose']['operator_id'] = 'field_wbs_number_value_op';
  $handler->display->display_options['filters']['field_wbs_number_value']['expose']['label'] = 'West Item Number';
  $handler->display->display_options['filters']['field_wbs_number_value']['expose']['operator'] = 'field_wbs_number_value_op';
  $handler->display->display_options['filters']['field_wbs_number_value']['expose']['identifier'] = 'field_wbs_number_value';
  $handler->display->display_options['filters']['field_wbs_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Workflow node: Current time */
  $handler->display->display_options['filters']['stamp']['id'] = 'stamp';
  $handler->display->display_options['filters']['stamp']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['stamp']['field'] = 'stamp';
  $handler->display->display_options['filters']['stamp']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['filters']['stamp']['operator'] = '>=';
  $handler->display->display_options['filters']['stamp']['group'] = 1;
  $handler->display->display_options['filters']['stamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['stamp']['expose']['operator_id'] = 'stamp_op';
  $handler->display->display_options['filters']['stamp']['expose']['label'] = 'Archived Date From';
  $handler->display->display_options['filters']['stamp']['expose']['operator'] = 'stamp_op';
  $handler->display->display_options['filters']['stamp']['expose']['identifier'] = 'stamp';
  $handler->display->display_options['filters']['stamp']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Workflow node: Current time */
  $handler->display->display_options['filters']['stamp_1']['id'] = 'stamp_1';
  $handler->display->display_options['filters']['stamp_1']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['stamp_1']['field'] = 'stamp';
  $handler->display->display_options['filters']['stamp_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['filters']['stamp_1']['operator'] = '<=';
  $handler->display->display_options['filters']['stamp_1']['group'] = 1;
  $handler->display->display_options['filters']['stamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['stamp_1']['expose']['operator_id'] = 'stamp_1_op';
  $handler->display->display_options['filters']['stamp_1']['expose']['label'] = 'Archived Date To';
  $handler->display->display_options['filters']['stamp_1']['expose']['operator'] = 'stamp_1_op';
  $handler->display->display_options['filters']['stamp_1']['expose']['identifier'] = 'stamp_1';
  $handler->display->display_options['filters']['stamp_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Intro Promo Months -  start date (field_intro_promo_months) */
  $handler->display->display_options['filters']['field_intro_promo_months_value']['id'] = 'field_intro_promo_months_value';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['field'] = 'field_intro_promo_months_value';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['group'] = 1;
  $handler->display->display_options['filters']['field_intro_promo_months_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_intro_promo_months_value']['expose']['operator_id'] = 'field_intro_promo_months_value_op';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['expose']['label'] = 'Intro Promo Month -  Start Date';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['expose']['operator'] = 'field_intro_promo_months_value_op';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['expose']['identifier'] = 'field_intro_promo_months_value';
  $handler->display->display_options['filters']['field_intro_promo_months_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_intro_promo_months_value']['granularity'] = 'month';

  /* Display: page:product dashboard */
  $handler = $view->new_display('page', 'page:product dashboard', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc_1']['id'] = 'field_unit_upc_1';
  $handler->display->display_options['fields']['field_unit_upc_1']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc_1']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc_1']['alter']['path'] = 'node/[nid_1]';
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc']['alter']['path'] = 'node/[nid_1]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['label'] = '';
  $handler->display->display_options['fields']['field_case_pack']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_case_pack']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['label'] = '';
  $handler->display->display_options['fields']['field_unit_of_measure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unit_of_measure']['element_label_colon'] = FALSE;
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['label'] = 'Pack Size';
  $handler->display->display_options['fields']['field_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_size']['alter']['text'] = '[field_case_pack]/[field_size] [field_unit_of_measure]';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['label'] = 'Promo Month';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'yyyy_mm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: Content: UNFI West */
  $handler->display->display_options['fields']['field_warehouses_west']['id'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['field'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['label'] = 'West distribution';
  $handler->display->display_options['fields']['field_warehouses_west']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_warehouses_west']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_warehouses_west']['empty'] = 'No';
  $handler->display->display_options['fields']['field_warehouses_west']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_warehouses_west']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_warehouses_west']['delta_offset'] = '0';
  /* Field: Content: Product Image */
  $handler->display->display_options['fields']['field_primary_image']['id'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['table'] = 'field_data_field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['field'] = 'field_primary_image';
  $handler->display->display_options['fields']['field_primary_image']['alter']['text'] = '<a href="/download/file/fid/[field_primary_image-fid]"><img src="/sites/all/themes/supplier_portal/images/unf-image.png"></a>';
  $handler->display->display_options['fields']['field_primary_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_primary_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_primary_image']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'CSV Export';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<img src="/sites/all/modules/contrib/views_data_export/images/csv.png" alt="CSV" title="CSV">';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'market-dashboard/[nid]/csv';
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = 'All SRMS role people linked to supplier';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'marketing-dashboard';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_form_target_id']['id'] = 'field_request_form_target_id';
  $handler->display->display_options['relationships']['field_request_form_target_id']['table'] = 'field_data_field_request_form';
  $handler->display->display_options['relationships']['field_request_form_target_id']['field'] = 'field_request_form_target_id';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_request_form_target_id';
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc']['alter']['text'] = '\'[field_unit_upc]';
  /* Field: Content: West Item Number */
  $handler->display->display_options['fields']['field_wbs_number']['id'] = 'field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['table'] = 'field_data_field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['field'] = 'field_wbs_number';
  /* Field: Content: East Item Number */
  $handler->display->display_options['fields']['field_ubs_number']['id'] = 'field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['table'] = 'field_data_field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['field'] = 'field_ubs_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['exclude'] = TRUE;
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['label'] = 'Pack Size';
  $handler->display->display_options['fields']['field_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_size']['alter']['text'] = '[field_case_pack]/[field_size] [field_unit_of_measure]';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients']['id'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['table'] = 'field_data_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['field'] = 'field_ingredients';
  /* Field: Content: RCM Category */
  $handler->display->display_options['fields']['field_rcm_category']['id'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['field'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_rcm_category']['settings'] = array(
    'separator' => '  >>  ',
  );
  /* Field: Content: UNFI East */
  $handler->display->display_options['fields']['field_warehouses_east']['id'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['table'] = 'field_data_field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['field'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_east']['delta_offset'] = '0';
  /* Field: Content: UNFI West */
  $handler->display->display_options['fields']['field_warehouses_west']['id'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['field'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west']['delta_offset'] = '0';
  /* Field: Content: Is this item a shipper? */
  $handler->display->display_options['fields']['field_shipper']['id'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['table'] = 'field_data_field_shipper';
  $handler->display->display_options['fields']['field_shipper']['field'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['label'] = 'Shipper';
  $handler->display->display_options['fields']['field_shipper']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_shipper']['settings'] = array(
    'format' => 'custom',
    'custom_on' => 'Y',
    'custom_off' => 'N',
    'reverse' => 0,
  );
  /* Field: Content: Shipper Components */
  $handler->display->display_options['fields']['field_shipper_components']['id'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['field'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shipper_components']['alter']['text'] = '<?php if([field_shipper] == "No") { print [field_shipper_components] = ""; } ?>';
  $handler->display->display_options['fields']['field_shipper_components']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_shipper_components']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_shipper_components']['delta_offset'] = '0';
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['label'] = 'Promo Start';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'yyyy_mm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months_1']['id'] = 'field_intro_promo_months_1';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['label'] = 'Promo End';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['settings'] = array(
    'format_type' => 'yyyy_mm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: New Product Discount */
  $handler->display->display_options['fields']['field_new_product_discount']['id'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['table'] = 'field_data_field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['field'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['label'] = 'Discount';
  $handler->display->display_options['fields']['field_new_product_discount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Product Category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_product_category']['label'] = 'Department';
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = 'All SRMS role people linked to supplier';
  $handler->display->display_options['fields']['gid']['separator'] = '';
  $handler->display->display_options['path'] = 'market-dashboard/%/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item UPC */
  $handler->display->display_options['fields']['field_unit_upc']['id'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['table'] = 'field_data_field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['field'] = 'field_unit_upc';
  $handler->display->display_options['fields']['field_unit_upc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit_upc']['alter']['text'] = '\'[field_unit_upc]';
  /* Field: Content: West Item Number */
  $handler->display->display_options['fields']['field_wbs_number']['id'] = 'field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['table'] = 'field_data_field_wbs_number';
  $handler->display->display_options['fields']['field_wbs_number']['field'] = 'field_wbs_number';
  /* Field: Content: East Item Number */
  $handler->display->display_options['fields']['field_ubs_number']['id'] = 'field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['table'] = 'field_data_field_ubs_number';
  $handler->display->display_options['fields']['field_ubs_number']['field'] = 'field_ubs_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Case Pack */
  $handler->display->display_options['fields']['field_case_pack']['id'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['table'] = 'field_data_field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['field'] = 'field_case_pack';
  $handler->display->display_options['fields']['field_case_pack']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_case_pack']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit of Measure */
  $handler->display->display_options['fields']['field_unit_of_measure']['id'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['table'] = 'field_data_field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['field'] = 'field_unit_of_measure';
  $handler->display->display_options['fields']['field_unit_of_measure']['exclude'] = TRUE;
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['label'] = 'Pack Size';
  $handler->display->display_options['fields']['field_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_size']['alter']['text'] = '[field_case_pack]/[field_size] [field_unit_of_measure]';
  $handler->display->display_options['fields']['field_size']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients']['id'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['table'] = 'field_data_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['field'] = 'field_ingredients';
  /* Field: Content: RCM Category */
  $handler->display->display_options['fields']['field_rcm_category']['id'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['table'] = 'field_data_field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['field'] = 'field_rcm_category';
  $handler->display->display_options['fields']['field_rcm_category']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_rcm_category']['settings'] = array(
    'separator' => '  >>  ',
  );
  /* Field: Content: UNFI East */
  $handler->display->display_options['fields']['field_warehouses_east']['id'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['table'] = 'field_data_field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['field'] = 'field_warehouses_east';
  $handler->display->display_options['fields']['field_warehouses_east']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_east']['delta_offset'] = '0';
  /* Field: Content: UNFI West */
  $handler->display->display_options['fields']['field_warehouses_west']['id'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['table'] = 'field_data_field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['field'] = 'field_warehouses_west';
  $handler->display->display_options['fields']['field_warehouses_west']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_warehouses_west']['delta_offset'] = '0';
  /* Field: Content: Is this item a shipper? */
  $handler->display->display_options['fields']['field_shipper']['id'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['table'] = 'field_data_field_shipper';
  $handler->display->display_options['fields']['field_shipper']['field'] = 'field_shipper';
  $handler->display->display_options['fields']['field_shipper']['label'] = 'Shipper';
  $handler->display->display_options['fields']['field_shipper']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_shipper']['settings'] = array(
    'format' => 'custom',
    'custom_on' => 'Y',
    'custom_off' => 'N',
    'reverse' => 0,
  );
  /* Field: Content: Shipper Components */
  $handler->display->display_options['fields']['field_shipper_components']['id'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['table'] = 'field_data_field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['field'] = 'field_shipper_components';
  $handler->display->display_options['fields']['field_shipper_components']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shipper_components']['alter']['text'] = '<?php if([field_shipper] == "No") { print [field_shipper_components] = ""; } ?>';
  $handler->display->display_options['fields']['field_shipper_components']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_shipper_components']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_shipper_components']['delta_offset'] = '0';
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months']['id'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months']['label'] = 'Promo Starts';
  $handler->display->display_options['fields']['field_intro_promo_months']['settings'] = array(
    'format_type' => 'yyyy_mm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Intro Promo Months */
  $handler->display->display_options['fields']['field_intro_promo_months_1']['id'] = 'field_intro_promo_months_1';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['table'] = 'field_data_field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['field'] = 'field_intro_promo_months';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['label'] = 'Promo End';
  $handler->display->display_options['fields']['field_intro_promo_months_1']['settings'] = array(
    'format_type' => 'yyyy_mm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: New Product Discount */
  $handler->display->display_options['fields']['field_new_product_discount']['id'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['table'] = 'field_data_field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['field'] = 'field_new_product_discount';
  $handler->display->display_options['fields']['field_new_product_discount']['label'] = 'Discount';
  $handler->display->display_options['fields']['field_new_product_discount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Print in Publications */
  $handler->display->display_options['fields']['field_print_in_publications']['id'] = 'field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['table'] = 'field_data_field_print_in_publications';
  $handler->display->display_options['fields']['field_print_in_publications']['field'] = 'field_print_in_publications';
  /* Field: Content: Product Category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['relationship'] = 'field_request_form_target_id';
  $handler->display->display_options['fields']['field_product_category']['label'] = 'Department';
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_request_form_target_id';
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = 'All SRMS role people linked to supplier';
  $handler->display->display_options['fields']['gid']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'market-dashboard-csv-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['marketing_dashboard_products'] = $view;

  return $export;
}
