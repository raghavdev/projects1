<?php
/**
 * @file
 * Field validation ean validator.
 *
 */
$plugin = array(
  'label' => t('Phone number (simple)'),
  'description' => t('Basic validation for format of phone number fields. Allows only numerals, dashes, spaces, parens, and plus sign. Does not validate format of any specific country.'),
  'handler' => array(
    'class' => 'field_validation_phone_validator',
  ),
);

class field_validation_phone_validator extends field_validation_validator {

  /**
   * Validate field.
   */
  public function validate() {
    $settings = $this->rule->settings;
    if ($this->value !== '' && !is_null($this->value)) {
      $val = $this->value;
      if (!($this->phone_valid($val))) {
        $this->set_error();
      }
    }
  }

  /**
   * Basic phone number validator helper function.
   */
  function phone_valid($digits) {
    return preg_match('/^\+?[0-9x \-\(\)]+$/i', $digits);
  }

}