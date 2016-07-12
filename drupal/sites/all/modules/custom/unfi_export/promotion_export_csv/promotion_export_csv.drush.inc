<?php

/**
 * Implementation of hook_drush_command().
 */
function promotion_export_csv_drush_command() {
  $items = array();

  $items['promotion_export_csv'] = array (
    'aliases' => array (
      'promotion',
    ),
    'description' => 'Export a .csv of new items for import into the Promotion system.',
    'options' => array (
      'rebuild' => 'Rebuild the staging and log tables for the module.',
    ),
    'arguments' => array (
    ),
    'examples' => array (
      'drush promotion_export_csv' => 'Exports the .csv file that is to be used for the import in the Promotion system.',
    ),
    'drupal dependencies' => array (
      'unfi_export',
      'promotion_export_csv',
    ),
    'core' => array('7'),
  );

  return $items;
}

/**
 * Implementation of hook_drush_help().
 *
 * This function is called whenever a drush user calls
 * 'drush help <name-of-your-command>'
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function promotion_export_csv_drush_help($section) {
  switch ($section) {
    case 'drush:promotion_export_csv':
      return dt("This command can be used to manually trigger the export of a .csv export for the Promotion system.");
  }
}

/**
 * Implementation of drush_hook_COMMAND_validate().
 */
function drush_promotion_export_csv_validate() {
  // Because of a bug in the way that Drush 4 computes the name of functions to
  // call from a Drush command, we may end up getting called twice, so we just
  // don't do anything on subsequent invocations.
  static $already_run = FALSE;
  if ($already_run) {
    return;
  }
  $already_run = TRUE;
}

/**
 * Drush command callback to export a views data to a file.
 *
 * @see drush_promotion_export_csv_validate().
 */
function drush_promotion_export_csv() {
  // Because of a bug in the way that Drush 4 computes the name of functions to
  // call from a Drush command, we may end up getting called twice, so we just
  // don't do anything on subsequent invocations.
  static $already_run = FALSE;
  if ($already_run) {
    return;
  }
  $already_run = TRUE;

  // If the rebuild option is passed, drop and recreate the staging & log tables before execution.
  // This would be used if you alter the table definitions in the .install file and need to update the DB.
  if (drush_get_option('rebuild')) {
    $tables = promotion_export_csv_fetch_tables();

    foreach ($tables as $requested_name => $table_info) {
      $table_names = unfi_export_table_names($requested_name);
      unfi_export_drop_tables($table_names);
      unfi_export_create_table($requested_name, $table_info);
    }

  }

  // Execute the export.
  promotion_export_csv_execute();

}
