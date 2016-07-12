<?php

/**
 * Implements THEME_form_system_theme_settings_alter().
 */
function supplier_portal_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['supplier_portal'] = array(
    '#type' => 'fieldset',
    '#title' => t('Supplier_Portal settings'),
    '#description' => t('Settings specific to Supplier_Portal theme.'),
  );
  $form['supplier_portal']['display_breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle Breadcrumbs'),
    '#default_value' => theme_get_setting('display_breadcrumbs'),
    '#description' => t('If checked, breadcrumbs will not display'),
  );
  $form['supplier_portal']['supplier_portal_no_fadein_effect'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle fade-in effect'),
    '#default_value' => theme_get_setting('supplier_portal_no_fadein_effect'),
    '#description' => t('If checked, the fade-in effect will not occur.'),
  );
}
