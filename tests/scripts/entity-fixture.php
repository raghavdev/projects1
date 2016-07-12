<?php
/**
 * @file
 * Exports an entity as a fixture file.
 *
 * Use with drush to export a given entity as a json file that will be used as a
 * template for creating entities of the same type and bundle in your tests.
 *
 * Example usage:
 *   drush php-script --script-path=../tests/scripts entity-fixture.php --type=node --id=3
 */

$entity_type = drush_get_option('type', 'node');
$entity_id = drush_get_option('id', NULL);
$export_path = drush_get_option('export_path', realpath('../tests/fixtures/'));

if (empty($entity_type) || empty($entity_id)) {
  drush_print('Usage: drush php-script entity-fixture.php --type=node --id=3');
  exit(1);
}

$entities = entity_load($entity_type, array($entity_id));
$entity = current($entities);

// Get the bundle
list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);

$info = entity_get_info($entity_type);

// Remove the id and revision entity keys
if (isset($info['entity keys']['id'])) {
  $id_key = $info['entity keys']['id'];
  unset($entity->{$id_key});
}

if (isset($info['entity keys']['revision'])) {
  $revision_key = $info['entity keys']['revision'];
  unset($entity->{$revision_key});
}

// Clean up fields for fixture data. The DrupalContext automatically expands
// fields to LANGUAGE_NONE arrays. We do the opposite in our exported fixture.
$instances = field_info_instances($entity_type, $bundle);
if (isset($entity->language)) {
  $lang = $entity->language;
}
else {
  $lang = LANGUAGE_NONE;
}
foreach ($instances as $field_name => $instance_config) {
  $field_config = field_info_field($field_name);
  // Strip language
  if (isset($entity->{$field_name}[$lang][0])) {
    $value = $entity->{$field_name}[$lang][0];
    $entity->{$field_name} = $value;
  }
  else if (isset($entity->{$field_name}[LANGUAGE_NONE][0])) {
    $value = $entity->{$field_name}[LANGUAGE_NONE][0];
    $entity->{$field_name} = $value;
  }

  // The DrupalContext does special handling for taxonomy terms and dates and
  // breaks on arrays
  if ($field_config['module'] == 'date') {
    if (isset($entity->{$field_name})) {
      $value = $entity->{$field_name};
      if (is_array($value)) {
        $entity->{$field_name} = implode(',', $value);
      }
    }
  }
  else if ($field_config['module'] == 'taxonomy') {
    if (isset($entity->{$field_name})) {
      $value = $entity->{$field_name};
      if (is_array($value) && !empty($value)) {
        $term_names = db_select('taxonomy_term_data', 't')
          ->fields('t', array('name'))
          ->condition('t.tid', $value)
          ->execute()
          ->fetchCol();
        $entity->{$field_name} = implode(',', $term_names);
      }
    }
  }

  // Remove any empty values
  if (empty($entity->{$field_name})) {
    unset($entity->{$field_name});
  }
}

// Export the entity as json
$export_dir = $export_path . '/' . $entity_type;
if (!file_exists($export_dir)) {
  mkdir($export_dir, 2777, TRUE);
}
$export_path = $export_dir . '/' . $bundle . '.json';
file_put_contents($export_path, json_encode($entity));
