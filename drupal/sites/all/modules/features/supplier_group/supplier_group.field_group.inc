<?php
/**
 * @file
 * supplier_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function supplier_group_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_tab|node|supplier_contact|form';
  $field_group->group_name = 'group_address_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabset';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '14',
    'children' => array(
      0 => 'field_address',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address-tab field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_address_tab|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info_tab|node|supplier_contact|form';
  $field_group->group_name = 'group_contact_info_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabset';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_email_address',
      1 => 'group_contact_name',
      2 => 'group_numbers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info-tab field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contact_info_tab|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|supplier_contact|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '1',
    'children' => array(
      0 => 'field_fax',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_mobile',
      4 => 'field_phone',
      5 => 'field_address',
      6 => 'field_email_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact details',
      'instance_settings' => array(
        'classes' => 'twocolumn',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|node|supplier_contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_name|node|supplier_contact|form';
  $field_group->group_name = 'group_contact_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info_tab';
  $field_group->data = array(
    'label' => 'Contact Name',
    'weight' => '19',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-contact-name field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_name|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_type_tab|node|supplier_contact|form';
  $field_group->group_name = 'group_contact_type_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabset';
  $field_group->data = array(
    'label' => 'Contact Type',
    'weight' => '13',
    'children' => array(
      0 => 'field_contact_type',
      1 => 'field_primary_contact',
      2 => 'field_region',
      3 => 'og_group_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-type-tab field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contact_type_tab|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_type|node|supplier_contact|default';
  $field_group->group_name = 'group_contact_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact type',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_type',
      1 => 'field_primary_contact',
      2 => 'field_region',
      3 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact type',
      'instance_settings' => array(
        'classes' => 'twocolumn',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_type|node|supplier_contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|node|supplier|form';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_core_information';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '0',
    'children' => array(
      0 => 'field_supplier_contacts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contacts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contacts|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_information|node|supplier|default';
  $field_group->group_name = 'group_core_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core information',
    'weight' => '1',
    'children' => array(
      0 => 'field_protection_level',
      1 => 'field_protect_from',
      2 => 'field_allowance_type',
      3 => 'field_brands',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Core information',
      'instance_settings' => array(
        'classes' => 'group-core-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_core_information|node|supplier|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_information|node|supplier|form';
  $field_group->group_name = 'group_core_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core information',
    'weight' => '1',
    'children' => array(
      0 => 'field_remit_number',
      1 => 'field_supplier_id_east',
      2 => 'field_supplier_id_west',
      3 => 'title',
      4 => 'group_supplier_pu_locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Core information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-core-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_core_information|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|supplier_contact|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'field-group-div fluid-width',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_main|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|node|supplier_contact|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'field-group-div fluid-width',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_name|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_numbers|node|supplier_contact|form';
  $field_group->group_name = 'group_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info_tab';
  $field_group->data = array(
    'label' => '',
    'weight' => '20',
    'children' => array(
      0 => 'field_fax',
      1 => 'field_mobile',
      2 => 'field_phone',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'field-group-div fluid-width',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_numbers|node|supplier_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remit|node|supplier|default';
  $field_group->group_name = 'group_remit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Remit',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Remit',
      'instance_settings' => array(
        'classes' => 'group-remit field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_remit|node|supplier|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remit|node|supplier|form';
  $field_group->group_name = 'group_remit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_core_information';
  $field_group->data = array(
    'label' => 'Remit',
    'weight' => '-1',
    'children' => array(
      0 => 'field_remit_address',
      1 => 'field_remit_city',
      2 => 'field_remit_number',
      3 => 'field_remit_postal_code',
      4 => 'field_remit_to_name',
      5 => 'field_state_prov',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Remit',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-remit field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_remit|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_contacts|node|supplier|form';
  $field_group->group_name = 'group_supplier_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_core_information';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '1',
    'children' => array(
      0 => 'field_contacts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contacts',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-supplier-contacts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_supplier_contacts|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_pu_locations|node|supplier|default';
  $field_group->group_name = 'group_supplier_pu_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendor Warehouse Locations',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplier-pu-locations field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_supplier_pu_locations|node|supplier|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_pu_locations|node|supplier|form';
  $field_group->group_name = 'group_supplier_pu_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_core_information';
  $field_group->data = array(
    'label' => 'Vendor Warehouse Locations',
    'weight' => '-1',
    'children' => array(
      0 => 'field_pick_up_locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplier-pu-locations field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_supplier_pu_locations|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabset|node|supplier_contact|form';
  $field_group->group_name = 'group_tabset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs set',
    'weight' => '0',
    'children' => array(
      0 => 'group_address_tab',
      1 => 'group_contact_info_tab',
      2 => 'group_contact_type_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabset field-group-htabs',
      ),
    ),
  );
  $export['group_tabset|node|supplier_contact|form'] = $field_group;

  return $export;
}
