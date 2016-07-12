<?php

use \Holiday\America;
use \Holiday\Holiday;

class UNFIholiday extends America {
  /**
   * The template method to be used in the between calculation.
   *
   * Returns an array of Holidays.
   *
   * @see between()
   *
   * @param int $year The year to get the holidays for.
   * @return array
   */
  protected function getHolidays($year) {
    // TODO, it'd be more performant to cache holidays per year, yes?
    $exclude_list    = variable_get('unfi_sp_metrics_holidays_exclude', array());
    $additional_list = variable_get('unfi_sp_metrics_holidays_additional', array());
    $exclude_by_name = array_keys(array_intersect($exclude_list, array('name')));
    $exclude_by_date = array_keys(array_intersect($exclude_list, array('date')));
    $holidays        = parent::getHolidays($year);
    // Default Holidays:
//        'Christmas'
//        'Thanksgiving Day'
//        'New Year\'s Day'
//        'Independence Day'
//        'Veterans Day'
//        'Columbus Day'
//        'Labor Day'
//        'Memorial Day'
//        'President\'s Day'
//        'Martin Luther King, Jr. Day'
//        'Christmas Eve'
//        'Thanksgiving Adam' (changing to 'Thanksgiving Observed' below)
    foreach ($additional_list as $name => $modifier) {
      $holidays[] = new Holiday(new DateTime(format_string($modifier, array('@year' => $year)), $this->timezone), $name, $this->timezone);
    }
    foreach ($holidays as $index => &$holiday) {
      if ($holiday->name == 'Thanksgiving Adam') {
        $holiday->name = 'Thanksgiving Observed';
      }
      if (
        in_array($holiday->name, $exclude_by_name)
        || in_array($holiday->format('Y-m-d'), $exclude_by_date)
      ) {
        unset($holidays[$index]);
        continue;
      }
    }
    return $holidays;
  }
}
