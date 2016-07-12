<?php
/**
 * @file
 * supplier_group.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function supplier_group_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Supplier Contact Fax';
  $rule->name = 'supplier_contact_fax';
  $rule->field_name = 'field_fax';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'supplier_contact';
  $rule->validator = 'field_validation_phone_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Fax number accepts only numerals, spaces, dashes, parentheses, and the plus sign.';
  $export['supplier_contact_fax'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Supplier Contact Mobile Phone';
  $rule->name = 'supplier_contact_mobile_phone';
  $rule->field_name = 'field_mobile';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'supplier_contact';
  $rule->validator = 'field_validation_phone_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Phone number fields accept only numerals, spaces, dashes, parentheses, and the plus sign.';
  $export['supplier_contact_mobile_phone'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Supplier Contact Phone';
  $rule->name = 'supplier_contact_phone';
  $rule->field_name = 'field_phone';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'supplier_contact';
  $rule->validator = 'field_validation_phone_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
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
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Phone number fields accept only numerals, spaces, dashes, parentheses, and the plus sign.';
  $export['supplier_contact_phone'] = $rule;

  return $export;
}
