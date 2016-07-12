<?php
/**
 * @file
 * autoassignroleconfig.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function autoassignroleconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_active';
  $strongarm->value = '1';
  $export['autoassignrole_user_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_description';
  $strongarm->value = '';
  $export['autoassignrole_user_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_fieldset_title';
  $strongarm->value = '';
  $export['autoassignrole_user_fieldset_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_multiple';
  $strongarm->value = '0';
  $export['autoassignrole_user_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_required';
  $strongarm->value = '1';
  $export['autoassignrole_user_required'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_roles';
  $strongarm->value = array(
    9 => '9',
    3 => '3',
    10 => 0,
    11 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    6 => 0,
  );
  $export['autoassignrole_user_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_selection';
  $strongarm->value = '0';
  $export['autoassignrole_user_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_sort';
  $strongarm->value = 'SORT_WEIGHT';
  $export['autoassignrole_user_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_title';
  $strongarm->value = 'Select Your Role';
  $export['autoassignrole_user_title'] = $strongarm;

  return $export;
}
