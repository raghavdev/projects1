<?php

class unfi_custom_plugin_argument extends views_plugin_argument_default {

  /**
   * Returns the current or associated node's group ID.
   */
  function get_argument() {
    // add form; the group ID appears in the query string
    $get_params = drupal_get_query_parameters();
    if (
      !empty($get_params[OG_AUDIENCE_FIELD])
      && is_numeric($get_params[OG_AUDIENCE_FIELD])
    ) {
      return (int) $get_params[OG_AUDIENCE_FIELD];
    }
    $entity = NULL;
    $allowed_entity_types = array('node', 'request'); // TODO: configuration
    // edit form; get the group ID from the existing object
    foreach ($allowed_entity_types as $allowed_entity_type) {
      $entity = menu_get_object($allowed_entity_type);
      if (!empty($entity)) {
        break;
      }
    }
    // menu_get_object requires the load function from the menu item
    // since New Item Requests use forms built by Views there is no assumed
    // load function
    if (!$entity) {
      $path_parts = explode('/', current_path());
      if (
        !empty($path_parts[1])
        && in_array($path_parts[0], $allowed_entity_types)
      ) {
        $entity = entity_load_single($path_parts[0], $path_parts[1]);
      }
      // If the entity still hasn't loaded, allow a custom action to do so
      // see case: "unfisp.dev/promotions/123"
      if (empty($entity) && count($path_parts) >= 2) {
        drupal_alter('unfi_custom_plugin_argument_load_entity', $entity, $path_parts, $this);
      }
    }
    if (
      $entity
      && !empty($entity->{OG_AUDIENCE_FIELD}[LANGUAGE_NONE][0]['target_id'])
    ) {
      // TODO: better language assumption
      return $entity->{OG_AUDIENCE_FIELD}[LANGUAGE_NONE][0]['target_id'];
    }
    // Get the group IDs relevant for the acting user, and return them
    // concatenated.
    if ($group_ids = og_get_groups_by_user(NULL, 'node')) {
      return implode('+', $group_ids);
    }
    // If the user has the UNFI Pseudo-members permission, return NULL
    // this is to force the fail of the default argument's validation,
    // which could then be set to return all if validation fails,
    // which would ONLY be if the user has this permission
    if (user_access('view all group content')) {
      return NULL;
    }
    // Return a number that will never be used as an ID
    return -1;
  }

}