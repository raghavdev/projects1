<?php
/**
 * @file
 * supplier_group.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function supplier_group_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-brand-field_short_name'
  $field_instances['node-brand-field_short_name'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_short_name',
    'label' => 'Short Name',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-brand-field_sid'
  $field_instances['node-brand-field_sid'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sid',
    'label' => 'SID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'required_by_role' => array(),
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-brand-field_suppliers'
  $field_instances['node-brand-field_suppliers'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_suppliers',
    'label' => 'Suppliers',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-brand-og_group_ref'
  $field_instances['node-brand-og_group_ref'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og_pseudomember',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-supplier-field_clearvue'
  $field_instances['node-supplier-field_clearvue'] = array(
    'bundle' => 'supplier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_clearvue',
    'label' => 'Clearvue',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-supplier-field_remit_number'
  $field_instances['node-supplier-field_remit_number'] = array(
    'bundle' => 'supplier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_remit_number',
    'label' => 'Remit Number',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-supplier-group_access'
  $field_instances['node-supplier-group_access'] = array(
    'bundle' => 'supplier',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'group_access',
    'label' => 'Group visibility',
    'required' => TRUE,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
    'widget_type' => 'options_select',
  );

  // Exported field_instance: 'node-supplier-group_group'
  $field_instances['node-supplier-group_group'] = array(
    'bundle' => 'supplier',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this is an OG group.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 1,
    'entity_type' => 'node',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => FALSE,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_group_subscribe',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => TRUE,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_address'
  $field_instances['node-supplier_contact-field_address'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|supplier_contact|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'AD' => 'AD',
          'AE' => 'AE',
          'AF' => 'AF',
          'AG' => 'AG',
          'AI' => 'AI',
          'AL' => 'AL',
          'AM' => 'AM',
          'AN' => 'AN',
          'AO' => 'AO',
          'AQ' => 'AQ',
          'AR' => 'AR',
          'AS' => 'AS',
          'AT' => 'AT',
          'AU' => 'AU',
          'AW' => 'AW',
          'AX' => 'AX',
          'AZ' => 'AZ',
          'BA' => 'BA',
          'BB' => 'BB',
          'BD' => 'BD',
          'BE' => 'BE',
          'BF' => 'BF',
          'BG' => 'BG',
          'BH' => 'BH',
          'BI' => 'BI',
          'BJ' => 'BJ',
          'BL' => 'BL',
          'BM' => 'BM',
          'BN' => 'BN',
          'BO' => 'BO',
          'BQ' => 'BQ',
          'BR' => 'BR',
          'BS' => 'BS',
          'BT' => 'BT',
          'BV' => 'BV',
          'BW' => 'BW',
          'BY' => 'BY',
          'BZ' => 'BZ',
          'CA' => 'CA',
          'CC' => 'CC',
          'CD' => 'CD',
          'CF' => 'CF',
          'CG' => 'CG',
          'CH' => 'CH',
          'CI' => 'CI',
          'CK' => 'CK',
          'CL' => 'CL',
          'CM' => 'CM',
          'CN' => 'CN',
          'CO' => 'CO',
          'CR' => 'CR',
          'CU' => 'CU',
          'CV' => 'CV',
          'CW' => 'CW',
          'CX' => 'CX',
          'CY' => 'CY',
          'CZ' => 'CZ',
          'DE' => 'DE',
          'DJ' => 'DJ',
          'DK' => 'DK',
          'DM' => 'DM',
          'DO' => 'DO',
          'DZ' => 'DZ',
          'EC' => 'EC',
          'EE' => 'EE',
          'EG' => 'EG',
          'EH' => 'EH',
          'ER' => 'ER',
          'ES' => 'ES',
          'ET' => 'ET',
          'FI' => 'FI',
          'FJ' => 'FJ',
          'FK' => 'FK',
          'FM' => 'FM',
          'FO' => 'FO',
          'FR' => 'FR',
          'GA' => 'GA',
          'GB' => 'GB',
          'GD' => 'GD',
          'GE' => 'GE',
          'GF' => 'GF',
          'GG' => 'GG',
          'GH' => 'GH',
          'GI' => 'GI',
          'GL' => 'GL',
          'GM' => 'GM',
          'GN' => 'GN',
          'GP' => 'GP',
          'GQ' => 'GQ',
          'GR' => 'GR',
          'GS' => 'GS',
          'GT' => 'GT',
          'GU' => 'GU',
          'GW' => 'GW',
          'GY' => 'GY',
          'HK' => 'HK',
          'HM' => 'HM',
          'HN' => 'HN',
          'HR' => 'HR',
          'HT' => 'HT',
          'HU' => 'HU',
          'ID' => 'ID',
          'IE' => 'IE',
          'IL' => 'IL',
          'IM' => 'IM',
          'IN' => 'IN',
          'IO' => 'IO',
          'IQ' => 'IQ',
          'IR' => 'IR',
          'IS' => 'IS',
          'IT' => 'IT',
          'JE' => 'JE',
          'JM' => 'JM',
          'JO' => 'JO',
          'JP' => 'JP',
          'KE' => 'KE',
          'KG' => 'KG',
          'KH' => 'KH',
          'KI' => 'KI',
          'KM' => 'KM',
          'KN' => 'KN',
          'KP' => 'KP',
          'KR' => 'KR',
          'KW' => 'KW',
          'KY' => 'KY',
          'KZ' => 'KZ',
          'LA' => 'LA',
          'LB' => 'LB',
          'LC' => 'LC',
          'LI' => 'LI',
          'LK' => 'LK',
          'LR' => 'LR',
          'LS' => 'LS',
          'LT' => 'LT',
          'LU' => 'LU',
          'LV' => 'LV',
          'LY' => 'LY',
          'MA' => 'MA',
          'MC' => 'MC',
          'MD' => 'MD',
          'ME' => 'ME',
          'MF' => 'MF',
          'MG' => 'MG',
          'MH' => 'MH',
          'MK' => 'MK',
          'ML' => 'ML',
          'MM' => 'MM',
          'MN' => 'MN',
          'MO' => 'MO',
          'MP' => 'MP',
          'MQ' => 'MQ',
          'MR' => 'MR',
          'MS' => 'MS',
          'MT' => 'MT',
          'MU' => 'MU',
          'MV' => 'MV',
          'MW' => 'MW',
          'MX' => 'MX',
          'MY' => 'MY',
          'MZ' => 'MZ',
          'NA' => 'NA',
          'NC' => 'NC',
          'NE' => 'NE',
          'NF' => 'NF',
          'NG' => 'NG',
          'NI' => 'NI',
          'NL' => 'NL',
          'NO' => 'NO',
          'NP' => 'NP',
          'NR' => 'NR',
          'NU' => 'NU',
          'NZ' => 'NZ',
          'OM' => 'OM',
          'PA' => 'PA',
          'PE' => 'PE',
          'PF' => 'PF',
          'PG' => 'PG',
          'PH' => 'PH',
          'PK' => 'PK',
          'PL' => 'PL',
          'PM' => 'PM',
          'PN' => 'PN',
          'PR' => 'PR',
          'PS' => 'PS',
          'PT' => 'PT',
          'PW' => 'PW',
          'PY' => 'PY',
          'QA' => 'QA',
          'RE' => 'RE',
          'RO' => 'RO',
          'RS' => 'RS',
          'RU' => 'RU',
          'RW' => 'RW',
          'SA' => 'SA',
          'SB' => 'SB',
          'SC' => 'SC',
          'SD' => 'SD',
          'SE' => 'SE',
          'SG' => 'SG',
          'SH' => 'SH',
          'SI' => 'SI',
          'SJ' => 'SJ',
          'SK' => 'SK',
          'SL' => 'SL',
          'SM' => 'SM',
          'SN' => 'SN',
          'SO' => 'SO',
          'SR' => 'SR',
          'SS' => 'SS',
          'ST' => 'ST',
          'SV' => 'SV',
          'SX' => 'SX',
          'SY' => 'SY',
          'SZ' => 'SZ',
          'TC' => 'TC',
          'TD' => 'TD',
          'TF' => 'TF',
          'TG' => 'TG',
          'TH' => 'TH',
          'TJ' => 'TJ',
          'TK' => 'TK',
          'TL' => 'TL',
          'TM' => 'TM',
          'TN' => 'TN',
          'TO' => 'TO',
          'TR' => 'TR',
          'TT' => 'TT',
          'TV' => 'TV',
          'TW' => 'TW',
          'TZ' => 'TZ',
          'UA' => 'UA',
          'UG' => 'UG',
          'UM' => 'UM',
          'US' => 'US',
          'UY' => 'UY',
          'UZ' => 'UZ',
          'VA' => 'VA',
          'VC' => 'VC',
          'VE' => 'VE',
          'VG' => 'VG',
          'VI' => 'VI',
          'VN' => 'VN',
          'VU' => 'VU',
          'WF' => 'WF',
          'WS' => 'WS',
          'YE' => 'YE',
          'YT' => 'YT',
          'ZA' => 'ZA',
          'ZM' => 'ZM',
          'ZW' => 'ZW',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_contact_type'
  $field_instances['node-supplier_contact-field_contact_type'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_type',
    'label' => 'Contact Type',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_email_address'
  $field_instances['node-supplier_contact-field_email_address'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_fax'
  $field_instances['node-supplier_contact-field_fax'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_first_name'
  $field_instances['node-supplier_contact-field_first_name'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_last_name'
  $field_instances['node-supplier_contact-field_last_name'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_mobile'
  $field_instances['node-supplier_contact-field_mobile'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mobile',
    'label' => 'Mobile',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_phone'
  $field_instances['node-supplier_contact-field_phone'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Format phone number, ex: (123) 555-7890 x1234',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_primary_contact'
  $field_instances['node-supplier_contact-field_primary_contact'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_primary_contact',
    'label' => 'Primary Contact',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-field_region'
  $field_instances['node-supplier_contact-field_region'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_region',
    'label' => 'Regions',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-supplier_contact-og_group_ref'
  $field_instances['node-supplier_contact-og_group_ref'] = array(
    'bundle' => 'supplier_contact',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Supplier',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 0,
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'status' => TRUE,
        ),
      ),
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        16 => 0,
        17 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og_pseudomember',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'taxonomy_term-states_prov-field_code'
  $field_instances['taxonomy_term-states_prov-field_code'] = array(
    'bundle' => 'states_prov',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_code',
    'label' => 'Code',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 2,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-states_prov-field_country'
  $field_instances['taxonomy_term-states_prov-field_country'] = array(
    'bundle' => 'states_prov',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Clearvue');
  t('Code');
  t('Contact Type');
  t('Country');
  t('Determine if this is an OG group.');
  t('Email');
  t('Fax');
  t('First Name');
  t('Format phone number, ex: (123) 555-7890 x1234');
  t('Group');
  t('Group visibility');
  t('Groups audience');
  t('Last Name');
  t('Mobile');
  t('Phone');
  t('Primary Contact');
  t('Regions');
  t('Remit Number');
  t('SID');
  t('Short Name');
  t('Supplier');
  t('Suppliers');

  return $field_instances;
}
