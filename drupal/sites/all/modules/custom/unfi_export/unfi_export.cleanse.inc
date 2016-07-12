<?php

/**
 * Functions for cleaning field values before insert into the database staging tables.
 */



/**
 * General purpose text cleaning to prep for import.
 */
function unfi_export_clean_string($values, $max_chars=255, $uppercase=TRUE) {
  // Take first value and trim whitespace.
  if (array_key_exists(0, $values)) {
    $string = trim($values[0]);
  }
  else {
    return '';
  }

  // todo: We likely need to strip out any non-standard ascii codes here. ಠ_ಠ

  // Check if the string is empty.
  if (empty($string)) {
    // If zero return as zero, otherwise return empty string.
    if ($string === 0 || $string === '0' || $string === '0.0') {
      return $string;
    }
    else {
      return '';
    }
  }

  // Truncate to max characters restriction.
  if ($max_chars && strlen($string) > $max_chars) {
    $string = substr($string, 0, $max_chars);
  }

  // Set to all uppercase.
  if ($uppercase) {
    $string = strtoupper($string);
  }

  return $string;
}

/**
 * Properly clean UPC codes for import into the core business systems.
 */
function unfi_export_clean_upc($values, $max_chars=13) {
  // Take first value and trim whitespace.
  if (array_key_exists(0, $values)) {
    $upc = trim($values[0]);
  }
  else {
    return '';
  }

  // Strip out any dashes and spaces.
  $upc = preg_replace('/[^0-9]/i', '', $upc);

  // Take out the check digit.
  $upc = substr($upc, 0, -1);

  $cur_len = strlen($upc);
  if ($cur_len < $max_chars) {
    // Left pad zeros as needed.
    $upc = str_pad($upc, $max_chars, '0', STR_PAD_LEFT);
  }

  return $upc;
}

/**
 * Take the size and add the units.
 */
function unfi_export_size_with_units($size_vals, $unit_vals) {
  if (array_key_exists(0, $size_vals)) {
    $size = (float) $size_vals[0];
  }
  else {
    $size = '';
  }
  if (array_key_exists(0, $unit_vals)) {
    $units = $unit_vals[0];
  }
  else {
    $units = '';
  }

  $unit_short_strings = array(
    'COUNT' => 'CNT',
    'PACK' => 'PK',
    'LITER' => 'LTR',
    'PIECE' => 'PC',
    'EACH' => 'EA',
  );
  return trim($size . ' ' . str_replace(array_keys($unit_short_strings), array_values($unit_short_strings), $units));
}

/**
 * Convert a value to a boolean (Y or N)
 */
function unfi_export_clean_yes_no($values, $default = 'N', $yes = 'Y', $no = 'N') {
  if (array_key_exists(0, $values)) {
    return ($values[0]) ? $yes : $no;
  }
  return $default;
}

/**
 * Checks if item has a specific value and return (Y or N)
 */
function unfi_export_clean_has_value_yes_no($values, $check, $yes = 'Y', $no = 'N') {
  return in_array($check, $values) ? $yes : $no;
}

/**
 * Converts Freight protection level values to a single character.
 */
function unfi_export_clean_temp_control($values) {
  $ret = '';
  if (array_key_exists(0, $values)) {
    $value = trim($values[0]);
  }

  // @todo figure out what maps to 'G'
  $map = array(
    'Chill' => 'C',
    'Dry' => 'D',
    'Frozen' => 'F',
    'Grain Room' => 'G',
  );

  if (isset($map[$value])) {
    $ret = $map[$value];
  }

  return $ret;
}

/**
 * Return the provided value for a field.
 */
function unfi_export_fake_field($values, $ret = '') {
  return $ret;
}

/**
 * Return a field from the related taxonomy term.
 */
function unfi_export_term_field($tids, $field_name, $default = '', $callback = NULL, $callback_args = array()) {
  return unfi_export_entity_field($tids, 'taxonomy_term', $field_name, $default, $callback, $callback_args);
}

/**
 * Return a field from the related node.
 */
function unfi_export_node_field($nids, $field_name, $default = '', $callback = NULL, $callback_args = array()) {
  return unfi_export_entity_field($nids, 'node', $field_name, $default, $callback, $callback_args);
}

/**
 * Return a field from the related node.
 */
function unfi_export_entity_field($ids, $entity_type, $field_name, $default = '', $callback = NULL, $callback_args = array()) {
  $values = array();
  if (!empty($ids)) {
    $entities = entity_load($entity_type, $ids);
    foreach ($entities as $entity) {
      if (isset($entity->{$field_name})) {
        $values = array_merge($values, unfi_export_flatten_value($entity->{$field_name}));
      }
    }
  }

  if (isset($callback) && function_exists($callback)) {
    array_unshift($callback_args, $values);
    return call_user_func_array($callback, $callback_args);
  }

  return (isset($values[0])) ? $values[0] : $default;
}

/**
 * If empty, default to another field.
 *
 * @param array $values
 *   The values from the 'map_to' field
 * @param array $default_values
 *   The values from the 'map_extra_fields' field. Only works with one extra field.
 * @param array $default_callbacks
 *   An array of callback functions and their arguments. Function names are the
 *   keys of the array and an array of arguments are the values. Each successive
 *   function takes the return from the previous function as it's first argument.
 *
 *   Example:
 *     $default_callbacks = array(
 *       'unfi_export_clean_upc' => array(), // $ret = unfi_export_clean_upc($default_values);
 *       'substr' => array(-5), // return substr($ret, -5);
 *     );
 */
function unfi_export_default_other_field($values, $default_values, $default_callbacks = array(), $extra_callbacks = array()) {
  $value = NULL;
  if (isset($values[0])) {
    $value = trim($values[0]);
  }

  if (empty($value)) {
    $value = $default_values;
    foreach ($default_callbacks as $callback => $args) {
      if (function_exists($callback)) {
        array_unshift($args, $value);
        $value = call_user_func_array($callback, $args);
      }
    }
  }
  else {
    $value = array($value);
    foreach ($extra_callbacks as $callback => $args) {
      if (function_exists($callback)) {
        array_unshift($args, $value);
        $value = call_user_func_array($callback, $args);
      }
    }
  }

  return $value;
}

/**
 * Return a formatted date.
 */
function unfi_export_clean_date($values, $format, $default = NULL) {
  $ret = $default;

  if (!empty($values[0])) {
    // Not using Drupal's format_date() since dates in the exports will never
    // need to be translated and should be in the default timezone.
    $ret = date($format, strtotime($values[0]));
  }

  return $ret;
}

/**
 * Multiply two or more fields.
 */
function unfi_export_multiply() {
  $ret = NULL;

  $args = func_get_args();
  if (count($args) < 2) {
    return $ret;
  }

  $ret = 1;
  foreach ($args as $arg) {
    if (array_key_exists(0, $arg) && is_numeric($arg[0])) {
      $ret *= $arg[0];
    }
  }

  return $ret;
}

/**
 * Implode fields with a simple separator.
 */
function unfi_export_implode_fields() {
  $ret = NULL;

  $args = func_get_args();
  $separator = array_pop($args);

  $vals = array();
  foreach ($args as $arg) {
    if (array_key_exists(0, $arg)) {
      $vals[] = $arg[0];
    }
  }

  if (!empty($vals)) {
    $ret = implode($separator, $vals);
  }

  return $ret;
}

/**
 *
 */
function unfi_export_clean_master_case_cost($selector, $fob_values, $del_values) {
  if (array_key_exists(0, $selector)) {
    $selector = $selector[0];
  }
  else {
    $selector = NULL;
  }
  if (isset($fob_values[0])) {
    $fob = (float) $fob_values[0];
  }
  else {
    $fob = NULL;
  }
  if (isset($del_values[0])) {
    $del = (float) $del_values[0];
  }
  else {
    $del = NULL;
  }

  switch ($selector) {
    case 'mcc_fob':
      return $fob;
    case 'mcc_del':
      return $del;
  }
  return NULL;
}

/**
 *
 */
function unfi_export_clean_list_field($raws, $field_name, $glue = ',', $default = '', $override_list = array()) {
  $field_data = field_info_field($field_name);

  if (!empty($override_list)) {
    $values = array_intersect_key($override_list, array_flip($raws));
  }
  elseif (!empty($field_data['settings']['allowed_values'])) {
    // @todo: what if there is an 'allowed_values_function' (it will require passing instances and entities)
    $values = array_intersect_key($field_data['settings']['allowed_values'], array_flip($raws));
  }
  else {
    $values = $raws;
  }

  if (!empty($values)) {
    return implode($glue, $values);
  }
  return $default;
}
