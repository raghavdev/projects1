<?php
/**
 * @file
 * Field validation ean validator.
 *
 */
$plugin = array(
  'label' => t('UPC'),
  'description' => t('Verifies that user-entered values are valid UPC/GTIN number.'),
  'handler' => array(
    'class' => 'field_validation_upc_validator',
  ),
);

class field_validation_upc_validator extends field_validation_validator {

  /**
   * Validate field.
   */
  public function validate() {
    $settings = $this->rule->settings;
    if ($this->value !== '' && !is_null($this->value)) {
      $val = $this->value;
      $val = str_replace('-', '', $val); //strip dashes
      if (strlen($val) > 14) {
        $this->set_error();
      }
      else {
        if (strlen($val) < 14) {
         $multiplier = strlen($val);
         $val = str_repeat('0', 14 - $multiplier) . $val;
        }
        if (!($this->upc14_valid($val))) {
          $this->set_error();
        }
      }
    }
  }

  /**
   * UPC/GTIN validate helper function.
   */
  function upc14_valid($digits) {
    $even = $digits[1] + $digits[3] + $digits[5] + $digits[7] + $digits[9] + $digits[11];
    $odd = $digits[0] + $digits[2] + $digits[4] + $digits[6] + $digits[8] + $digits[10] + $digits[12];
    $odd = $odd * 3;
    $total = $even + $odd;
    $checksum = $total % 10;
    $checksum = 10 - $checksum;

    // if $checksum is 10, it will convert to a check digit of 0
    if ($checksum == 10) {
      $checksum = 0;
    }

    return $digits[13] == $checksum;
  }

}