<?php
/**
 * @file
 * unfi_product.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function unfi_product_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
