<?php
/**
 * @file
 * new_item_request.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function new_item_request_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_am_i_melting|node|request_item|default';
  $field_group->group_name = 'group_am_i_melting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => '',
    'weight' => '20',
    'children' => array(
      0 => 'field_shelf_life_at_dock',
      1 => 'field_shelf_life_at_prod',
      2 => 'field_shelf_life_retail',
      3 => 'field_enrobed_in_chocolate_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-am-i-melting field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_am_i_melting|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_am_i_melting|node|request_item|form';
  $field_group->group_name = 'group_am_i_melting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => '',
    'weight' => '174',
    'children' => array(
      0 => 'field_enrobed_in_chocolate_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-am-i-melting field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_am_i_melting|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attribute_lists|node|request_item|form';
  $field_group->group_name = 'group_attribute_lists';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '15',
    'children' => array(
      0 => 'field_contains_attributes',
      1 => 'field_dietary_preference_attribu',
      2 => 'field_fat_content_attributes',
      3 => 'field_major_allergen_attributes',
      4 => 'field_other_attributes',
      5 => 'field_processing_attributes',
      6 => 'field_salt_content_attributes',
      7 => 'field_specialty',
      8 => 'field_sweetener_attributes',
      9 => 'field_free_of_attributes',
      10 => 'field_ethnic_attributes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Attributes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-attribute-lists field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_attribute_lists|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes_list|node|request_item|default';
  $field_group->group_name = 'group_attributes_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_attributes';
  $field_group->data = array(
    'label' => 'Attributes Lists',
    'weight' => '2',
    'children' => array(
      0 => 'field_contains_attributes',
      1 => 'field_dietary_preference_attribu',
      2 => 'field_fat_content_attributes',
      3 => 'field_major_allergen_attributes',
      4 => 'field_other_attributes',
      5 => 'field_processing_attributes',
      6 => 'field_salt_content_attributes',
      7 => 'field_specialty',
      8 => 'field_sweetener_attributes',
      9 => 'field_third_party_certificates',
      10 => 'field_free_of_attributes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Attributes Lists',
      'instance_settings' => array(
        'classes' => 'group-attributes-list field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_attributes_list|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|node|request_item|default';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '17',
    'children' => array(
      0 => 'field_contains_attributes',
      1 => 'field_dietary_preference_attribu',
      2 => 'field_fat_content_attributes',
      3 => 'field_major_allergen_attributes',
      4 => 'field_other_attributes',
      5 => 'field_processing_attributes',
      6 => 'field_salt_content_attributes',
      7 => 'field_specialty',
      8 => 'field_sweetener_attributes',
      9 => 'field_free_of_attributes',
      10 => 'field_ethnic_attributes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Attributes',
      'instance_settings' => array(
        'classes' => 'group-attributes field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_attributes|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|node|request_item|form';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '8',
    'children' => array(
      0 => 'group_attribute_lists',
      1 => 'group_certifications',
      2 => 'group_warehouse',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Attributes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-attributes field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_attributes|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beverages|node|request_item|default';
  $field_group->group_name = 'group_beverages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beverages',
    'weight' => '18',
    'children' => array(
      0 => 'field_beverage_container',
      1 => 'field_bottle_color',
      2 => 'field_container_type',
      3 => 'field_baltimore_beverage_tax',
      4 => 'field_chicago_water_tax',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Beverages',
      'instance_settings' => array(
        'classes' => 'group-beverages field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_beverages|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beverages|node|request_item|form';
  $field_group->group_name = 'group_beverages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beverages',
    'weight' => '16',
    'children' => array(
      0 => 'field_beverage_container',
      1 => 'field_bottle_color',
      2 => 'field_container_type',
      3 => 'field_baltimore_beverage_tax',
      4 => 'field_chicago_water_tax',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Beverages',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-beverages field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_beverages|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case|node|request_item|default';
  $field_group->group_name = 'group_case';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Master Case',
    'weight' => '155',
    'children' => array(
      0 => 'field_case_height',
      1 => 'field_case_length',
      2 => 'field_case_weight',
      3 => 'field_case_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Master Case',
      'instance_settings' => array(
        'classes' => 'group-case field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_case|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case|node|request_item|form';
  $field_group->group_name = 'group_case';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Master Case',
    'weight' => '134',
    'children' => array(
      0 => 'field_case_height',
      1 => 'field_case_length',
      2 => 'field_case_weight',
      3 => 'field_case_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_case|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certifications|node|request_item|default';
  $field_group->group_name = 'group_certifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Certifications',
    'weight' => '15',
    'children' => array(
      0 => 'field_fair_trade',
      1 => 'field_fair_trade_certificate',
      2 => 'field_kosher_certificate',
      3 => 'field_organic_certificate',
      4 => 'field_third_party_certificates',
      5 => 'field_gluten_free',
      6 => 'field_gluten_free_certification',
      7 => 'field_kosher',
      8 => 'field_nop_organic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Certifications',
      'instance_settings' => array(
        'classes' => 'group-certifications field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_certifications|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certifications|node|request_item|form';
  $field_group->group_name = 'group_certifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Certifications',
    'weight' => '13',
    'children' => array(
      0 => 'group_fair_trade',
      1 => 'group_gluten_free',
      2 => 'group_kosher_certificate',
      3 => 'group_organic',
      4 => 'group_third_party_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Certifications',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-certifications field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_certifications|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clean_ingredients|node|request_item|form';
  $field_group->group_name = 'group_clean_ingredients';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => 'Clean Ingredients',
    'weight' => '6',
    'children' => array(
      0 => 'field_clean_ingredients',
      1 => 'field_clean_ingredients_certific',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-clean-ingredients field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_clean_ingredients|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core|node|request_item|default';
  $field_group->group_name = 'group_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_part_number',
      1 => 'field_brand',
      2 => 'field_product_category',
      3 => 'field_product_labels',
      4 => 'field_requested_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Item Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-core field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_core|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core|node|request_item|form';
  $field_group->group_name = 'group_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item Details',
    'weight' => '1',
    'children' => array(
      0 => 'group_item_details',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Item Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_core|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_del_east|node|request_item|default';
  $field_group->group_name = 'group_del_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => 'Delivered',
    'weight' => '150',
    'children' => array(
      0 => 'field_case_cost_del_east',
      1 => 'field_unit_cost_del_east',
      2 => 'field_unit_retail_del_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Delivered',
      'instance_settings' => array(
        'classes' => 'group-del-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_del_east|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_del_west|node|request_item|default';
  $field_group->group_name = 'group_del_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => 'Delivered',
    'weight' => '114',
    'children' => array(
      0 => 'field_case_cost_del_west',
      1 => 'field_unit_cost_del_west',
      2 => 'field_unit_retail_del_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Delivered',
      'instance_settings' => array(
        'classes' => 'group-del-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_del_west|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delivered_east|node|request_item|form';
  $field_group->group_name = 'group_delivered_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => 'Delivered',
    'weight' => '10',
    'children' => array(
      0 => 'field_case_cost_del_east',
      1 => 'field_unit_cost_del_east',
      2 => 'field_unit_retail_del_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_delivered_east|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delivered_west|node|request_item|form';
  $field_group->group_name = 'group_delivered_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => 'Delivered',
    'weight' => '117',
    'children' => array(
      0 => 'field_case_cost_del_west',
      1 => 'field_unit_cost_del_west',
      2 => 'field_unit_retail_del_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_delivered_west|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dist_east|node|request_item|default';
  $field_group->group_name = 'group_dist_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Distributor Costs East',
    'weight' => '8',
    'children' => array(
      0 => 'group_del_east',
      1 => 'group_fob_east',
      2 => 'group_pricing_sheet_and_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Distributor Costs East',
      'instance_settings' => array(
        'classes' => 'group-dist-east field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dist_east|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dist_east|node|request_item|form';
  $field_group->group_name = 'group_dist_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Distributor Costs East',
    'weight' => '5',
    'children' => array(
      0 => 'group_delivered_east',
      1 => 'group_east_fob',
      2 => 'group_notes_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Distributor Costs East',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dist-east field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dist_east|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dist_west|node|request_item|default';
  $field_group->group_name = 'group_dist_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Distributor Costs West',
    'weight' => '10',
    'children' => array(
      0 => 'group_del_west',
      1 => 'group_fob_west',
      2 => 'group_pricing_and_notes_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Distributor Costs West',
      'instance_settings' => array(
        'classes' => 'group-dist-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dist_west|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dist_west|node|request_item|form';
  $field_group->group_name = 'group_dist_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Distributor Costs West',
    'weight' => '6',
    'children' => array(
      0 => 'group_delivered_west',
      1 => 'group_notes_west',
      2 => 'group_west_fob',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Distributor Costs West',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-delivered-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dist_west|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_east_fob|node|request_item|form';
  $field_group->group_name = 'group_east_fob';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => 'Freight On Board',
    'weight' => '9',
    'children' => array(
      0 => 'field_case_cost_fob_east',
      1 => 'field_unit_cost_fob_east',
      2 => 'field_unit_retail_fob_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_east_fob|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_east_pick_up_location|node|request_item|default';
  $field_group->group_name = 'group_east_pick_up_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'East Pick Up Location',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'East Pick Up Location',
      'instance_settings' => array(
        'classes' => 'group-east-pick-up-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_east_pick_up_location|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fair_trade|node|request_item|form';
  $field_group->group_name = 'group_fair_trade';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => '',
    'weight' => '144',
    'children' => array(
      0 => 'field_fair_trade',
      1 => 'field_fair_trade_certificate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fair_trade|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fob_east|node|request_item|default';
  $field_group->group_name = 'group_fob_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => 'Freight On Board',
    'weight' => '149',
    'children' => array(
      0 => 'field_case_cost_fob_east',
      1 => 'field_unit_cost_fob_east',
      2 => 'field_unit_retail_fob_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freight On Board',
      'instance_settings' => array(
        'classes' => 'group-fob-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fob_east|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fob_west|node|request_item|default';
  $field_group->group_name = 'group_fob_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => 'Freight On Board',
    'weight' => '113',
    'children' => array(
      0 => 'field_case_cost_fob_west',
      1 => 'field_unit_cost_fob_west',
      2 => 'field_unit_retail_fob_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freight On Board',
      'instance_settings' => array(
        'classes' => 'group-fob-west field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fob_west|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_freight_protection|node|request_item|default';
  $field_group->group_name = 'group_freight_protection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => 'Freight Protection',
    'weight' => '21',
    'children' => array(
      0 => 'field_freight_protection_level',
      1 => 'field_freight_protection_from',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freight Protection',
      'instance_settings' => array(
        'classes' => 'group-freight-protection field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_freight_protection|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_freight_protection|node|request_item|form';
  $field_group->group_name = 'group_freight_protection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => 'Freight Protection',
    'weight' => '172',
    'children' => array(
      0 => 'field_freight_protection_level',
      1 => 'field_freight_protection_from',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freight Protection',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-freight-protection field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_freight_protection|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gluten_free|node|request_item|form';
  $field_group->group_name = 'group_gluten_free';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => '',
    'weight' => '145',
    'children' => array(
      0 => 'field_gluten_free',
      1 => 'field_gluten_free_certification',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gluten_free|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_costs|node|request_item|default';
  $field_group->group_name = 'group_item_costs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item Costs Per Region',
    'weight' => '3',
    'children' => array(
      0 => 'field_item_costs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Item Costs Per Region',
      'instance_settings' => array(
        'classes' => 'group-item-costs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_item_costs|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_costs|node|request_item|form';
  $field_group->group_name = 'group_item_costs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_item_costs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-item-costs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_item_costs|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_details|node|request_item|form';
  $field_group->group_name = 'group_item_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_core';
  $field_group->data = array(
    'label' => '',
    'weight' => '57',
    'children' => array(
      0 => 'field_part_number',
      1 => 'field_brand',
      2 => 'field_product_category',
      3 => 'field_product_labels',
      4 => 'field_requested_by',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-item-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_item_details|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kosher_certificate|node|request_item|form';
  $field_group->group_name = 'group_kosher_certificate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => '',
    'weight' => '143',
    'children' => array(
      0 => 'field_kosher_certificate',
      1 => 'field_kosher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kosher_certificate|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kosher|node|request_item|form';
  $field_group->group_name = 'group_kosher';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => 'Kosher',
    'weight' => '3',
    'children' => array(
      0 => 'field_kosher',
      1 => 'field_kosher_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-kosher field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_kosher|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marketing|node|request_item|default';
  $field_group->group_name = 'group_marketing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Marketing',
    'weight' => '19',
    'children' => array(
      0 => 'field_primary_image',
      1 => 'field_print_in_publications',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Marketing',
      'instance_settings' => array(
        'classes' => 'group-marketing field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_marketing|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marketing|node|request_item|form';
  $field_group->group_name = 'group_marketing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Marketing',
    'weight' => '17',
    'children' => array(
      0 => 'field_primary_image',
      1 => 'field_print_in_publications',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Marketing',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-marketing field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_marketing|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc_packing|node|request_item|default';
  $field_group->group_name = 'group_misc_packing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Pallet Configuration',
    'weight' => '156',
    'children' => array(
      0 => 'field_high',
      1 => 'field_tie',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pallet Configuration',
      'instance_settings' => array(
        'classes' => 'group-misc-packing field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_misc_packing|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc_packing|node|request_item|form';
  $field_group->group_name = 'group_misc_packing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Pallet Configuration',
    'weight' => '135',
    'children' => array(
      0 => 'field_high',
      1 => 'field_tie',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_misc_packing|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_non_gmo_attribute|node|request_item|form';
  $field_group->group_name = 'group_non_gmo_attribute';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '22',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_non_gmo_attribute|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_non_gmo|node|request_item|form';
  $field_group->group_name = 'group_non_gmo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => 'Non-GMO',
    'weight' => '4',
    'children' => array(
      0 => 'field_non_gmo',
      1 => 'field_non_gmo_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-non-gmo field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_non_gmo|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes_east|node|request_item|form';
  $field_group->group_name = 'group_notes_east';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => '',
    'weight' => '11',
    'children' => array(
      0 => 'field_notes_east',
      1 => 'field_pricing_sheet',
      2 => 'field_use_mcc_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_notes_east|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes_west|node|request_item|form';
  $field_group->group_name = 'group_notes_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => '',
    'weight' => '118',
    'children' => array(
      0 => 'field_notes_west',
      1 => 'field_pricing_sheet_west',
      2 => 'field_use_mcc_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_notes_west|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organic|node|request_item|form';
  $field_group->group_name = 'group_organic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => '',
    'weight' => '142',
    'children' => array(
      0 => 'field_organic_certificate',
      1 => 'field_nop_organic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organic|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origin_2|node|request_item|form';
  $field_group->group_name = 'group_origin_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_origin';
  $field_group->data = array(
    'label' => '',
    'weight' => '153',
    'children' => array(
      0 => 'field_country_of_origin',
      1 => 'field_state_providence_of_origin',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_origin_2|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origin|node|request_item|default';
  $field_group->group_name = 'group_origin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Origin',
    'weight' => '14',
    'children' => array(
      0 => 'field_country_of_origin',
      1 => 'field_state_providence_of_origin',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Origin',
      'instance_settings' => array(
        'classes' => 'group-origin field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_origin|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origin|node|request_item|form';
  $field_group->group_name = 'group_origin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Origin',
    'weight' => '12',
    'children' => array(
      0 => 'field_country_of_origin',
      1 => 'field_state_providence_of_origin',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Origin',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-origin field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_origin|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_package|node|request_item|default';
  $field_group->group_name = 'group_package';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => '',
    'weight' => '151',
    'children' => array(
      0 => 'field_package_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-package field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_package|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_package|node|request_item|form';
  $field_group->group_name = 'group_package';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => '',
    'weight' => '131',
    'children' => array(
      0 => 'field_package_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_package|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_packing|node|request_item|default';
  $field_group->group_name = 'group_packing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Specifications',
    'weight' => '12',
    'children' => array(
      0 => 'group_case',
      1 => 'group_misc_packing',
      2 => 'group_package',
      3 => 'group_pack',
      4 => 'group_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Specifications',
      'instance_settings' => array(
        'classes' => 'group-packing field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_packing|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_packing|node|request_item|form';
  $field_group->group_name = 'group_packing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Specifications',
    'weight' => '10',
    'children' => array(
      0 => 'group_case',
      1 => 'group_misc_packing',
      2 => 'group_package',
      3 => 'group_pack',
      4 => 'group_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Specifications',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-packing field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_packing|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pack|node|request_item|default';
  $field_group->group_name = 'group_pack';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Inner Pack',
    'weight' => '154',
    'children' => array(
      0 => 'field_pack_height',
      1 => 'field_pack_length',
      2 => 'field_pack_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inner Pack',
      'instance_settings' => array(
        'classes' => 'group-pack field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pack|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pack|node|request_item|form';
  $field_group->group_name = 'group_pack';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Inner Pack',
    'weight' => '133',
    'children' => array(
      0 => 'field_pack_height',
      1 => 'field_pack_length',
      2 => 'field_pack_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_pack|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pick_up_locations|node|request_item|form';
  $field_group->group_name = 'group_pick_up_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendor Warehouse Locations',
    'weight' => '4',
    'children' => array(
      0 => 'field_pick_up_locations',
      1 => 'field_assigned_pick_location',
      2 => 'field_assigned_pick_location_w',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vendor Warehouse Locations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pick-up-locations field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pick_up_locations|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pick_up_location|node|request_item|default';
  $field_group->group_name = 'group_pick_up_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendor Warehouse Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_east_pick_up_location',
      1 => 'field_west_pick_up_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vendor Warehouse Location',
      'instance_settings' => array(
        'classes' => 'group-pick-up-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pick_up_location|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pricing_and_notes_west|node|request_item|default';
  $field_group->group_name = 'group_pricing_and_notes_west';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => '',
    'weight' => '115',
    'children' => array(
      0 => 'field_notes_west',
      1 => 'field_pricing_sheet_west',
      2 => 'field_use_mcc_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pricing_and_notes_west|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pricing_sheet_and_notes|node|request_item|default';
  $field_group->group_name = 'group_pricing_sheet_and_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dist_east';
  $field_group->data = array(
    'label' => '',
    'weight' => '151',
    'children' => array(
      0 => 'field_notes_east',
      1 => 'field_pricing_sheet',
      2 => 'field_use_mcc_east',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pricing_sheet_and_notes|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_information|node|request_item|default';
  $field_group->group_name = 'group_product_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Information',
    'weight' => '16',
    'children' => array(
      0 => 'field_ingredients',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Information',
      'instance_settings' => array(
        'classes' => 'group-product-information field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_information|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_information|node|request_item|form';
  $field_group->group_name = 'group_product_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Information',
    'weight' => '14',
    'children' => array(
      0 => 'field_ingredients',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-product-information field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_information|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promotions|node|request_item|default';
  $field_group->group_name = 'group_promotions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotions',
    'weight' => '21',
    'children' => array(
      0 => 'field_new_product_discount_type',
      1 => 'field_unfi_buy_dates',
      2 => 'field_pre_90_day_discount_',
      3 => 'field_pre_90_order_dates',
      4 => 'field_unfi_contribution',
      5 => 'field_new_product_discount',
      6 => 'field_unfi_only_approved_mcb',
      7 => 'field_intro_promo_months',
      8 => 'field_need_by_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Promotions',
      'instance_settings' => array(
        'classes' => 'group-promotions field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promotions|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promotions|node|request_item|form';
  $field_group->group_name = 'group_promotions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotions',
    'weight' => '19',
    'children' => array(
      0 => 'field_new_product_discount_type',
      1 => 'field_unfi_buy_dates',
      2 => 'field_pre_90_day_discount_',
      3 => 'field_pre_90_order_dates',
      4 => 'field_unfi_contribution',
      5 => 'field_new_product_discount',
      6 => 'field_unfi_only_approved_mcb',
      7 => 'field_intro_promo_months',
      8 => 'field_need_by_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Promotions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-promotions field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promotions|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_random_weight|node|request_item|default';
  $field_group->group_name = 'group_random_weight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Random Weight',
    'weight' => '11',
    'children' => array(
      0 => 'field_random_weight',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Random Weight',
      'instance_settings' => array(
        'classes' => 'group-random-weight field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_random_weight|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_random_weight|node|request_item|form';
  $field_group->group_name = 'group_random_weight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_random_weight',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-random-weight field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_random_weight|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rcm|node|request_item|default';
  $field_group->group_name = 'group_rcm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retail Category Management',
    'weight' => '20',
    'children' => array(
      0 => 'field_rcm_category',
      1 => 'field_flavor',
      2 => 'field_form',
      3 => 'field_type',
      4 => 'field_ethnic_cultural',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Retail Category Management',
      'instance_settings' => array(
        'classes' => 'group-rcm field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rcm|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rcm|node|request_item|form';
  $field_group->group_name = 'group_rcm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retail Category Management',
    'weight' => '18',
    'children' => array(
      0 => 'field_rcm_category',
      1 => 'field_flavor',
      2 => 'field_form',
      3 => 'field_type',
      4 => 'field_ethnic_cultural',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Retail Category Management',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rcm field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rcm|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remainder|node|request_item|default';
  $field_group->group_name = 'group_remainder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '17',
    'children' => array(
      0 => 'field_gluten_free',
      1 => 'field_gluten_free_certification',
      2 => 'field_beverage_container',
      3 => 'field_bottle_color',
      4 => 'field_container_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-remainder field-group-div clearfix',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_remainder|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shelf_life_details|node|request_item|form';
  $field_group->group_name = 'group_shelf_life_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '169',
    'children' => array(
      0 => 'field_closed_code_life_dating',
      1 => 'field_open_code_life_dating',
      2 => 'field_type_of_code_life_dating',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shelf_life_details|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shelf_life_duration|node|request_item|form';
  $field_group->group_name = 'group_shelf_life_duration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => '',
    'weight' => '170',
    'children' => array(
      0 => 'field_shelf_life_at_dock',
      1 => 'field_shelf_life_at_prod',
      2 => 'field_shelf_life_retail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'field-group-div group-shelf-life-duration',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shelf_life_duration|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shelf_life|node|request_item|default';
  $field_group->group_name = 'group_shelf_life';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shelf Life',
    'weight' => '13',
    'children' => array(
      0 => 'group_am_i_melting',
      1 => 'group_freight_protection',
      2 => 'group_shelf_list_details',
      3 => 'group_temp_zone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shelf Life',
      'instance_settings' => array(
        'classes' => 'group-shelf-life field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shelf_life|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shelf_life|node|request_item|form';
  $field_group->group_name = 'group_shelf_life';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shelf Life',
    'weight' => '11',
    'children' => array(
      0 => 'group_am_i_melting',
      1 => 'group_freight_protection',
      2 => 'group_shelf_life_details',
      3 => 'group_shelf_life_duration',
      4 => 'group_temp_zone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shelf Life',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-shelf-life field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shelf_life|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shelf_list_details|node|request_item|default';
  $field_group->group_name = 'group_shelf_list_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => '',
    'weight' => '19',
    'children' => array(
      0 => 'field_closed_code_life_dating',
      1 => 'field_open_code_life_dating',
      2 => 'field_type_of_code_life_dating',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-shelf-list-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shelf_list_details|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipper_components|node|request_item|form';
  $field_group->group_name = 'group_shipper_components';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shipper Components',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-shipper-components field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_shipper_components|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipper|node|request_item|default';
  $field_group->group_name = 'group_shipper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shipper',
    'weight' => '22',
    'children' => array(
      0 => 'field_shipper',
      1 => 'field_shipper_components',
      2 => 'field_shipper_unit_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shipper',
      'instance_settings' => array(
        'classes' => 'group-shipper field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shipper|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipper|node|request_item|form';
  $field_group->group_name = 'group_shipper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shipper',
    'weight' => '20',
    'children' => array(
      0 => 'field_shipper',
      1 => 'field_shipper_components',
      2 => 'field_shipper_unit_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shipper',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-shipper field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shipper|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipping|node|request_item|default';
  $field_group->group_name = 'group_shipping';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shipping',
    'weight' => '3',
    'children' => array(
      0 => 'field_case_pack',
      1 => 'field_inner_pack',
      2 => 'field_mc_pack',
      3 => 'field_random_weight',
      4 => 'field_size',
      5 => 'field_unit_of_measure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shipping',
      'instance_settings' => array(
        'classes' => 'group-shipping field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shipping|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipping|node|request_item|form';
  $field_group->group_name = 'group_shipping';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pack and Size',
    'weight' => '3',
    'children' => array(
      0 => 'field_case_pack',
      1 => 'field_inner_pack',
      2 => 'field_mc_pack',
      3 => 'field_random_weight',
      4 => 'field_size',
      5 => 'field_unit_of_measure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pack and Size',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-shipping field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shipping|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_specialty|node|request_item|form';
  $field_group->group_name = 'group_specialty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => 'Specialty',
    'weight' => '7',
    'children' => array(
      0 => 'field_specialty',
      1 => 'field_specialty_certificate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-specialty field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_specialty|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temp_zone|node|request_item|default';
  $field_group->group_name = 'group_temp_zone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => 'Temperature',
    'weight' => '22',
    'children' => array(
      0 => 'field_temp_zone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Temperature',
      'instance_settings' => array(
        'classes' => 'group-temp-zone field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_temp_zone|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temp_zone|node|request_item|form';
  $field_group->group_name = 'group_temp_zone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_shelf_life';
  $field_group->data = array(
    'label' => 'Temperature',
    'weight' => '173',
    'children' => array(
      0 => 'field_temp_zone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Temperature',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-temp-zone field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_temp_zone|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_party_certificate|node|request_item|form';
  $field_group->group_name = 'group_third_party_certificate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certifications';
  $field_group->data = array(
    'label' => '',
    'weight' => '146',
    'children' => array(
      0 => 'field_third_party_certificates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_third_party_certificate|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unfi_internal|node|request_item|default';
  $field_group->group_name = 'group_unfi_internal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UNFI Internal',
    'weight' => '0',
    'children' => array(
      0 => 'field_exclusive',
      1 => 'field_east_category',
      2 => 'field_west_category',
      3 => 'field_west_dept',
      4 => 'field_west_subheader_catalog',
      5 => 'field_ubs_number',
      6 => 'field_warehouse_group',
      7 => 'field_east_brand',
      8 => 'field_west_brand',
      9 => 'field_national_selling_pack',
      10 => 'field_catalog_brand',
      11 => 'field_east_catalog_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'UNFI Internal',
      'instance_settings' => array(
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
  $export['group_unfi_internal|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unfi_internal|node|request_item|form';
  $field_group->group_name = 'group_unfi_internal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UNFI Internal',
    'weight' => '0',
    'children' => array(
      0 => 'field_exclusive',
      1 => 'field_east_category',
      2 => 'field_west_category',
      3 => 'field_ubs_number',
      4 => 'field_warehouse_group',
      5 => 'field_west_dept',
      6 => 'field_west_subheader_catalog',
      7 => 'field_catalog_brand',
      8 => 'field_east_brand',
      9 => 'field_east_catalog_header',
      10 => 'field_national_selling_pack',
      11 => 'field_west_brand',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-unfi-internal field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_unfi_internal|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit|node|request_item|default';
  $field_group->group_name = 'group_unit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Item',
    'weight' => '153',
    'children' => array(
      0 => 'field_unit_height',
      1 => 'field_unit_length',
      2 => 'field_unit_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Item',
      'instance_settings' => array(
        'classes' => 'group-unit field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_unit|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit|node|request_item|form';
  $field_group->group_name = 'group_unit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_packing';
  $field_group->data = array(
    'label' => 'Item',
    'weight' => '132',
    'children' => array(
      0 => 'field_unit_height',
      1 => 'field_unit_length',
      2 => 'field_unit_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_unit|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upc|node|request_item|default';
  $field_group->group_name = 'group_upc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UPC',
    'weight' => '2',
    'children' => array(
      0 => 'field_case_upc',
      1 => 'field_pack_upc',
      2 => 'field_unit_upc',
      3 => 'field_mc_upc_same_as_item_upc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'UPC',
      'instance_settings' => array(
        'classes' => 'group-upc field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_upc|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upc|node|request_item|form';
  $field_group->group_name = 'group_upc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UPC',
    'weight' => '2',
    'children' => array(
      0 => 'field_case_upc',
      1 => 'field_pack_upc',
      2 => 'field_unit_upc',
      3 => 'field_mc_upc_same_as_item_upc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'UPC',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-upc field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_upc|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warehouse|node|request_item|default';
  $field_group->group_name = 'group_warehouse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Warehouse',
    'weight' => '11',
    'children' => array(
      0 => 'field_warehouses_east',
      1 => 'field_warehouses_west',
      2 => 'field_warehouses_select',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Warehouse',
      'instance_settings' => array(
        'classes' => 'group-warehouse field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_warehouse|node|request_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warehouse|node|request_item|form';
  $field_group->group_name = 'group_warehouse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Warehouse',
    'weight' => '9',
    'children' => array(
      0 => 'field_warehouses_east',
      1 => 'field_warehouses_west',
      2 => 'field_warehouses_select',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Warehouse',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-warehouse field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_warehouse|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_west_fob|node|request_item|form';
  $field_group->group_name = 'group_west_fob';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dist_west';
  $field_group->data = array(
    'label' => 'Freight On Board',
    'weight' => '116',
    'children' => array(
      0 => 'field_case_cost_fob_west',
      1 => 'field_unit_cost_fob_west',
      2 => 'field_unit_retail_fob_west',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_west_fob|node|request_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_west_pick_up_location|node|request_item|default';
  $field_group->group_name = 'group_west_pick_up_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'request_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'West Pick Up Location',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'West Pick Up Location',
      'instance_settings' => array(
        'classes' => 'group-west-pick-up-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_west_pick_up_location|node|request_item|default'] = $field_group;

  return $export;
}
