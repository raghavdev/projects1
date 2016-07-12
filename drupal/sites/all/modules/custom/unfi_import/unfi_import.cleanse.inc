<?php

/**
 * Functions for cleaning field values before insert into the drupal fields.
 */


/**
 * General purpose text cleaning to prep for import.
 */
function unfi_import_clean_string($string, $max_chars=255, $uppercase=FALSE) {
  // Trim whitespace.
  $string = trim($string);

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
 * Ensures that a value is a numeric value.
 */
function unfi_import_ensure_numeric($string, $clean_string=TRUE) {
  if ($clean_string) {
    $string = unfi_import_clean_string($string);
  }

  if (!is_numeric($string)) {
    return NULL;
  }

  return $string;
}

/**
 * Numeric with left padded zeros.
 */
function unfi_import_numeric_left_pad($string, $padded_length=0, $pad_with='0') {

  $string = trim($string);
  $string = preg_replace("/[^0-9]/",'',$string);
  if ($padded_length) {
    $string = str_pad($string, $padded_length, $pad_with, STR_PAD_LEFT);
  }

  return $string;
}
