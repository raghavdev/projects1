<?php
/**
 * @file
 * pick_up_location.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pick_up_location_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_numbers|node|pick_up_location|form';
  $field_group->group_name = 'group_account_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pick_up_location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Account Numbers',
    'weight' => '14',
    'children' => array(
      0 => 'field_supplier_id_east',
      1 => 'field_supplier_id_west',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account-numbers field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_account_numbers|node|pick_up_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|pick_up_location|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pick_up_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'horizontal tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_account_numbers',
      1 => 'group_warehouse_details',
      2 => 'group_warehouse_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|pick_up_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warehouse_details|node|pick_up_location|form';
  $field_group->group_name = 'group_warehouse_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pick_up_location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Warehouse Details',
    'weight' => '13',
    'children' => array(
      0 => 'field_appointment_required',
      1 => 'field_special_instructions',
      2 => 'field_hours',
      3 => 'field_freight_form',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-warehouse-details field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_warehouse_details|node|pick_up_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warehouse_info|node|pick_up_location|form';
  $field_group->group_name = 'group_warehouse_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pick_up_location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Warehouse Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_address',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-warehouse-info field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_warehouse_info|node|pick_up_location|form'] = $field_group;

  return $export;
}
