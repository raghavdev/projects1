<?php
/**
 * @file
 * supplier_portal_faq.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function supplier_portal_faq_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faq';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_faq'] = $strongarm;

  return $export;
}
