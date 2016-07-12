<?php

// Find and hang on to the vocab id for the countries taxonomy.
$query = db_select('taxonomy_vocabulary', 'tv')
  ->fields('tv', array('vid'))
  ->condition('tv.machine_name', 'country');
$result = $query->execute();
$country_vocab = $result->fetchField();

// Insert countries
if (($handle = fopen('../scripts/countries.csv', 'r')) !== FALSE) {
  while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
    // Check if already in the taxonomy, only add if not.
    $query = db_select('taxonomy_term_data', 'td')
      ->fields('td', array('tid'))
      ->condition('td.name', $data[4])
      ->condition('td.vid', $country_vocab);
    $result = $query->execute();
    if (!$result->fetchField()) {
      $term = new stdClass();
      $term->name = $data[4];
      $term->vid = $country_vocab;
      $term->field_code['und'][0]['value'] = $data[0];
      $term->field_code_a3['und'][0]['value'] = $data[1];
      $term->field_code_n3['und'][0]['value'] = $data[2];
      $term->field_global_region['und'][0]['value'] = $data[3];
      taxonomy_term_save($term);
      print($term->tid . '---');
    }
  }
  fclose($handle);
}

// Find and hang on to the vocab id for the states taxonomy.
$query = db_select('taxonomy_vocabulary', 'tv')
  ->fields('tv', array('vid'))
  ->condition('tv.machine_name', 'states_prov');
$result = $query->execute();
$states_vocab = $result->fetchField();

// Insert states
if (($handle = fopen('../scripts/states.csv', 'r')) !== FALSE) {
  while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
    // Check if already in the taxonomy, only add if not.
    $query = db_select('taxonomy_term_data', 'td')
      ->fields('td', array('tid'))
      ->condition('td.name', $data[0])
      ->condition('td.vid', $states_vocab);
    $result = $query->execute();
    if (!$result->fetchField()) {
      // Find the country term
      $query = db_select('taxonomy_term_data', 'td');
      $query->join('field_data_field_code', 'c', 'c.entity_id = td.tid');
      $query->fields('td', array('tid'))
        ->condition('c.field_code_value', $data[2])
        ->condition('c.bundle', 'country');
      $result = $query->execute();
      $country_id = $result->fetchField();
      if ($country_id) {
        $term = new stdClass();
        $term->name = $data[0];
        $term->vid = $states_vocab;
        $term->field_code['und'][0]['value'] = $data[1];
        $term->field_country['und'][0]['tid'] = $country_id;
        taxonomy_term_save($term);
        print($term->tid . '|||');
      }
    }
  }
  fclose($handle);
}
