<?php
/**
 * @file
 * autoassignroleconfig.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function autoassignroleconfig_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}