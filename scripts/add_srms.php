<?php

/**
 * This is a quick & dirty script to load in the SRM users from a .csv file.
 *
 * File assumes the following columns:
 * Full Name
 * Email
 *
 * Will check if email already exists, will create a new user if not.
 */

// Insert countries
if (($handle = fopen('../scripts/srms.csv', 'r')) !== FALSE) {
  while (($data = fgetcsv($handle, 10000, ",")) !== FALSE) {
    if (empty($data[0]) || empty($data[1])) {
      continue;
    }

    // Check if already a user, only add if not.
    $query = db_select('users', 'u')
      ->fields('u', array('uid'))
      ->condition('u.mail', $data[1]);
    $result = $query->execute();
    if ($result->fetchField()) {
      continue;
    }

    //This will generate a random password.
    $password = 'W!y9' . user_password(8);

    // Split the full name into first and last.
    list($fname, $lname) = explode(' ', $data[0]);

    // Create the new user.
    $new_user = array(
      'name' => $data[1],
      'pass' => $password,
      'mail' => $data[1],
      'status' => 1,
      'timezone' => 'America/New_York',
      'signature_format' => 'plain_text',
      'init' => $data[1],
      'roles' => array(
        8 => 'SRM',
      ),
      'field_first_name' => array(LANGUAGE_NONE => array(0 => array('value' => $fname))),
      'field_last_name' => array(LANGUAGE_NONE => array(0 => array('value' => $lname))),
    );
    $account= user_save(NULL, $new_user);

    print('CREATED: ' . $data[1] . "\r\n");

  }
  fclose($handle);
}
