<?php
/**
 * @file
 * unfi_request_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function unfi_request_form_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_badic_info_tab|node|request_form|form';
  $field_group->group_name = 'group_badic_info_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_tabs';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '43',
    'children' => array(
      0 => 'field_product_category',
      1 => 'og_group_ref',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_badic_info_tab|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|request_form|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_sales_agreement',
      2 => 'field_requested_by',
      3 => 'field_brand',
      4 => 'field_product_category',
      5 => 'title',
      6 => 'products',
      7 => 'workflow',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Basic Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic_info|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_page|node|request_form|form';
  $field_group->group_name = 'group_basic_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pages';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '41',
    'children' => array(
      0 => 'group_basic_tabs',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_tabs|node|request_form|form';
  $field_group->group_name = 'group_basic_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_page';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '42',
    'children' => array(
      0 => 'workflow',
      1 => 'group_badic_info_tab',
      2 => 'group_expiration_group',
      3 => 'group_branding_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-basic-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_basic_tabs|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beverage_page|node|request_form|form';
  $field_group->group_name = 'group_beverage_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Beverage',
    'weight' => '24',
    'children' => array(
      0 => 'field_baltimore_beverage_tax',
      1 => 'field_beverage_container',
      2 => 'field_bottle_color',
      3 => 'field_chicago_water_tax',
      4 => 'field_container_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_beverage_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branding_tab|node|request_form|form';
  $field_group->group_name = 'group_branding_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_tabs';
  $field_group->data = array(
    'label' => 'Brand(s)',
    'weight' => '45',
    'children' => array(
      0 => 'field_brand',
      1 => 'field_catalog_brand',
      2 => 'field_east_brand',
      3 => 'field_west_brand',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_branding_tab|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certificates_inner|node|request_form|form';
  $field_group->group_name = 'group_certificates_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates';
  $field_group->data = array(
    'label' => 'Certificates Inner',
    'weight' => '20',
    'children' => array(
      0 => 'group_kosher_certs',
      1 => 'group_fair_trade_certs',
      2 => 'group_organic_certs',
      3 => 'group_gluten_certs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Certificates Inner',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-certificates-inner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_certificates_inner|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certificates|node|request_form|form';
  $field_group->group_name = 'group_certificates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Certificates',
    'weight' => '1',
    'children' => array(
      0 => 'group_certs_inner',
      1 => 'group_certificates_inner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Certificates',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'certificate-wrapper',
        'description' => 'Please upload the certificates for all products in this request.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_certificates|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_page|node|request_form|form';
  $field_group->group_name = 'group_details_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pages';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '43',
    'children' => array(
      0 => 'group_tabs',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-page',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expiration_group|node|request_form|form';
  $field_group->group_name = 'group_expiration_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_tabs';
  $field_group->data = array(
    'label' => 'Expiration',
    'weight' => '44',
    'children' => array(
      0 => 'field_closed_code_life_dating',
      1 => 'field_open_code_life_dating',
      2 => 'field_type_of_code_life_dating',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_expiration_group|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fair_trade_certs|node|request_form|form';
  $field_group->group_name = 'group_fair_trade_certs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates_inner';
  $field_group->data = array(
    'label' => '',
    'weight' => '22',
    'children' => array(
      0 => 'field_fair_trade_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'certificates',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fair_trade_certs|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gluten_certs|node|request_form|form';
  $field_group->group_name = 'group_gluten_certs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates_inner';
  $field_group->data = array(
    'label' => '',
    'weight' => '24',
    'children' => array(
      0 => 'field_gluten_free_certification',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'certificates',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gluten_certs|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kosher_certs|node|request_form|form';
  $field_group->group_name = 'group_kosher_certs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates_inner';
  $field_group->data = array(
    'label' => '',
    'weight' => '21',
    'children' => array(
      0 => 'field_kosher_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'certificates',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kosher_certs|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organic_certs|node|request_form|form';
  $field_group->group_name = 'group_organic_certs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates_inner';
  $field_group->data = array(
    'label' => '',
    'weight' => '23',
    'children' => array(
      0 => 'field_organic_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'certificates',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organic_certs|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pages|node|request_form|form';
  $field_group->group_name = 'group_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pages',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_page',
      1 => 'group_details_page',
      2 => 'group_products_page',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-pages field-group-multipage-group',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $export['group_pages|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pickup_locations_page|node|request_form|form';
  $field_group->group_name = 'group_pickup_locations_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Pick Up Locations',
    'weight' => '21',
    'children' => array(
      0 => 'field_assigned_pick_location',
      1 => 'field_assigned_pick_location_w',
      2 => 'field_pick_up_locations',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_pickup_locations_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_products_page|node|request_form|form';
  $field_group->group_name = 'group_products_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pages';
  $field_group->data = array(
    'label' => 'Products',
    'weight' => '44',
    'children' => array(
      0 => 'products',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_products_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promotions_page|node|request_form|form';
  $field_group->group_name = 'group_promotions_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Promotions',
    'weight' => '22',
    'children' => array(
      0 => 'field_intro_promo_months',
      1 => 'field_need_by_date',
      2 => 'field_new_product_discount',
      3 => 'field_new_product_discount_type',
      4 => 'field_pre_90_day_discount_',
      5 => 'field_pre_90_order_dates',
      6 => 'field_unfi_buy_dates',
      7 => 'field_unfi_contribution',
      8 => 'field_unfi_only_approved_mcb',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_promotions_page|node|request_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|request_form|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details_page';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '15',
    'children' => array(
      0 => 'group_beverage_page',
      1 => 'group_pickup_locations_page',
      2 => 'group_promotions_page',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|request_form|form'] = $field_group;

  return $export;
}
