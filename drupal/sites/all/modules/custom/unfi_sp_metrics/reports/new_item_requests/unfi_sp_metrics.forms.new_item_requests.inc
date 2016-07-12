<?php

/*
 * ==== NEW ITEM REQUESTS =====
 */

function unfi_sp_metrics___new_item_requests__form(&$form, &$form_state) {
  $date = new DateTime();
  $today = array(
    'year'  => (int) $date->format('Y'),
    'month' => (int) $date->format('m'),
    'day'   => (int) $date->format('j'),
  );

  $timerange = array(
    0       => t('none'),
    'year'  => t('Year'),
    'month' => t('Month'),
    'day'   => t('Dates'),
  );
  $form['timerange'] = array(
    '#type'          => 'select',
    '#title'         => t('Time Range'),
    '#options'       => $timerange,
    '#default_value' => 'month',
  );

  $years = array();
  for ($i = 2013; $i <= $today['year'] + 1; $i++) {
    $years[$i] = $i;
  }
  $months = array();
  for ($i = 1; $i <= 12; $i++) {
    $date->setDate($today['year'], $i, 1);
    $months[$i] = $date->format('F');
  }
  $days = array();
  for ($i = 1; $i <= 31; $i++) {
    $days[$i] = $i;
  }

  $form['year'] = array(
    '#type'          => 'select',
    '#title'         => t('Year'),
    '#options'       => $years,
    '#default_value' => $today['year'],
    '#states'        => array(
      'invisible' => array(
        ':input[name="timerange"]' => array('value' => '0'),
      ),
    ),
  );

  $form['month'] = array(
    '#type'          => 'select',
    '#title'         => t('Month'),
    '#options'       => $months,
    '#default_value' => $today['month'],
    '#states'        => array(
      'invisible' => array(
        array(
          array(':input[name="timerange"]' => array('value' => '0')),
          'or',
          array(':input[name="timerange"]' => array('value' => 'year')),
        ),
      ),
    ),
  );

  $form['day'] = array(
    '#type'          => 'select',
    '#title'         => t('Day'),
    '#options'       => $days,
    '#default_value' => $today['day'],
    '#states'        => array(
      'visible' => array(
        ':input[name="timerange"]' => array('value' => 'day'),
      ),
    ),
  );

  $form['end_year'] = array(
    '#type'          => 'select',
    '#title'         => t('End Year'),
    '#options'       => $years,
    '#default_value' => $today['year'],
    '#states'        => array(
      'visible' => array(
        ':input[name="timerange"]' => array('value' => 'day'),
      ),
    ),
  );

  $form['end_month'] = array(
    '#type'          => 'select',
    '#title'         => t('End Month'),
    '#options'       => $months,
    '#default_value' => $today['month'],
    '#states'        => array(
      'visible' => array(
        ':input[name="timerange"]' => array('value' => 'day'),
      ),
    ),
  );

  $form['end_day'] = array(
    '#type'          => 'select',
    '#title'         => t('End Day'),
    '#options'       => $days,
    '#default_value' => $today['day'],
    '#states'        => array(
      'visible' => array(
        ':input[name="timerange"]' => array('value' => 'day'),
      ),
    ),
  );
}

function unfi_sp_metrics___new_item_requests__form_submit($form, &$form_state) {
  $job_context = array();

  if (!empty($form_state['values']['timerange'])) {
    $start_date = new DateTime();
    $start_date->modify('midnight');
    $start_date->setDate(
      $form_state['values']['year'],
      $form_state['values']['month'],
      ($form_state['values']['timerange'] == 'day' ? $form_state['values']['day'] : 1)
    );
    $end_date = clone $start_date;

    switch ($form_state['values']['timerange']) {
      case 'year':
        $start_date->modify('1/1');
        $end_date->modify('1/1');
        $end_date->modify('+1 years');
        $end_date->modify('-1 seconds');
        break;
      case 'month':
        $start_date->modify('first day of this month');
        $end_date->modify('first day of next month');
        $end_date->modify('-1 seconds');
        break;
      case 'day':
        $end_date->setDate(
          $form_state['values']['end_year'],
          $form_state['values']['end_month'],
          $form_state['values']['end_day']
        );
        $end_date->setTime(23, 59, 59);
        break;
    }

    $job_context['timerange'] = array(
      'type'  => $form_state['values']['timerange'],
      'start' => $start_date->getTimestamp(),
      'end'   => $end_date->getTimestamp(),
    );
  }

  $form_state['unfi_sp_metrics']['new_item_requests'] = unfi_sp_metrics_build_report_context('unfi_sp_metrics', 'new_item_requests', $job_context);
}
