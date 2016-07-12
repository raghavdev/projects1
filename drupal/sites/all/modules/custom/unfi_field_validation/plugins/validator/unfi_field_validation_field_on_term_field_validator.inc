<?php
/**
 * @file
 * Field validation ean validator.
 *
 */
$plugin = array(
  'label' => t('Match against field in reference term'),
  'description' => t('Verifies that user-entered values matches against a field in a referenced taxonomy term.'),
  'handler' => array(
    'class' => 'unfi_field_validation_field_on_term_field_validator',
  ),
);

class unfi_field_validation_field_on_term_field_validator extends field_validation_validator {

  /**
   * Validate field.
   */
  public function validate() {
    $settings = $this->rule->settings;
    $entity = $this->entity;
    $term_field = $settings['term_field_name'];
    $field_name = $settings['field_name'];
    $column = $settings['column'];
    if (isset($entity->{$term_field}[$this->langcode][0]['tid'])) {
      $tids = array();
      foreach ($entity->{$term_field}[$this->langcode] as $delta => $arr) {
        $tids[] = $arr['tid'];
      }

      // Build a list of allowed values from the selected terms
      $terms = entity_load('taxonomy_term', $tids);
      $allowed_values = array();
      foreach ($terms as $term) {
        if (isset($term->{$field_name}[$this->langcode][0][$column])) {
          foreach ($term->{$field_name}[$this->langcode] as $delta => $arr) {
            if (!in_array($arr[$column], $allowed_values)) {
              $allowed_values[] = $arr[$column];
            }
          }
        }
      }

      $flag = in_array($this->value, $allowed_values);
      if (!empty($settings['reverse'])) {
        $flag = $flag ? FALSE : TRUE;
      }

      if (!$flag) {
        $this->set_error();
      }
    }
  }

  /**
   * Provide settings option
   */
  function settings_form(&$form, &$form_state) {
    $default_settings = $this->get_default_settings($form, $form_state);
    $form['settings']['term_field_name'] = array(
      '#title' => t('Term field name'),
      '#description' => t("Machine name. The taxonomy term reference field to be matched against."),
      '#type' => 'textfield',
      '#default_value' => isset($default_settings['term_field_name']) ? $default_settings['term_field_name'] : '',
    );
    $form['settings']['field_name'] = array(
      '#title' => t('Field name'),
      '#description' => t("Machine name. Name of the field to be matched against."),
      '#type' => 'textfield',
      '#default_value' => isset($default_settings['field_name']) ? $default_settings['field_name'] : '',
    );
    $form['settings']['column'] = array(
      '#title' => t('Column'),
      '#description' => t("Column of the field to be matched against."),
      '#type' => 'textfield',
      '#default_value' => isset($default_settings['column']) ? $default_settings['column'] : '',
    );
    $form['settings']['reverse'] = array(
      '#title' => t('Reverse'),
      '#description' => t("If it is checked, it means must not match the field."),
      '#type' => 'checkbox',
      '#default_value' => isset($default_settings['reverse']) ? $default_settings['reverse'] : FALSE,
    );
    parent::settings_form($form, $form_state);
  }

}
