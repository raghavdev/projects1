<?php
// $Id: views_handler_field_field_matrix.inc,v 1.1.2.1 2011/01/18 10:10:05 aaron1234nz Exp $

/**
 * A field that displays fields.
 */
class matrix_handler_field_field extends views_handler_field_field {
  function row_list() {
    $field = $this->definition['field_info'];
    if ($field['type'] == 'matrix_text' && $field['settings']['spreadsheet_style'] == 1) {
      for ($i = 1; $i<= $field['settings']['rows_count']; $i++) {
        $output[$i] = $i;
      }
    }
    elseif ($field['type'] == 'matrix_custom') {
      $settings = unserialize($field['settings']['settings']);
      foreach ($settings['rows'] as $row_id => $row) {
        $output[$row_id] = t('@title (Row @i)', array('@title' => $row['title'], '@i' => $row_id));
      }
    }
    else {
      for ($i = 1; $i<= $field['settings']['rows_count']; $i++) {
        $output[$i] =  t('Row @i', array('@i' => $i));
      }
    }
    array_unshift($output, t('None'));
    return $output;
  }
  
  function col_list() {
    $field = $this->definition['field_info'];
    if ($field['type'] == 'matrix_text' && $field['settings']['spreadsheet_style'] == 1) {
      for ($i = 1; $i<= $field['settings']['cols_count']; $i++) {
        $output[$i] = matrix_make_letter($i);
      }
    }
    elseif ($field['type'] == 'matrix_custom') {
      $settings = unserialize($field['settings']['settings']);
      foreach ($settings['cols'] as $col_id => $col) {
        $output[$row_id] = t('@title (Column @i)', array('@title' => $col['title'], '@i' => $col_id));
      }
    }
    else {
      for ($i = 1; $i<= $field['settings']['cols_count']; $i++) {
        $output[$i] =  t('Column @i', array('@i' => $i));
      }
    }
    array_unshift($output, t('None'));
    return $output;
  }
  
  function option_definition() {
    $options = parent::option_definition();

    $options['row'] = array(
      'default' => 0,
    );
    $options['col'] = array(
      'default' => 0,
    );
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    unset($form['delta']);
    $form['message'] = array(
      '#type' => 'markup',
      '#markup' => t('To only show one value (rather than the entire matrix) choose the cell below.'),
    );
    $form['row'] = array(
      '#title' => t('Row'),
      '#type' => 'select',
      '#options' => $this->row_list(),
      '#default_value' => $this->options['row'],
      '#description' => t('The row to select the data from'),
    );
    $form['col'] = array(
      '#title' => t('Column'),
      '#type' => 'select',
      '#options' => $this->col_list(),
      '#default_value' => $this->options['col'],
      '#description' => t('The col to select the data from'),
    );    

  }

  function render($values) {
    if (isset($values->_field_data[$this->field_alias])) {
      // Prepare arguments for rendering based on the objects cached in the
      // pre-render phase and the display options for this field.
      $entity_type = $values->_field_data[$this->field_alias]['entity_type'];
      $entity = $values->_field_data[$this->field_alias]['entity'];
      $display_entity = clone $entity;
      $langcode = $this->field_language();

      // The field we are trying to display is empty, or doesn't exist on
      // this entity.
      if (empty($display_entity->{$this->definition['field_name']})) {
        return '';
      }

      // The user wants to render only one value from a multivalue field.
      // The Field API doesn't support this, so we just hack out the
      // values we don't want to render.
      if ($this->options['row'] > 0 && $this->options['col'] > 0) {
            dsm($this->options);
        $row = (int) $this->options['row'];
        $col = (int) $this->options['col'];
        $raw = $display_entity->{$this->definition['field_name']}[$langcode];
        foreach ($raw as $delta => $cell) {
          $data[$cell['row']][$cell['col']][] = $cell['value'];
        }
        
        if (count($data[$row][$col]) > 1) {
          $display_entity->{$this->definition['field_name']}[$langcode] = array(theme('item_list', array('items' => $data[$row][$col])));
        }
        else {
          $display_entity->{$this->definition['field_name']}[$langcode] = array($data[$row][$col][0]);
        }
      }

      $display = array(
        'type' => $this->options['type'],
        'settings' => $this->options['settings'],
        'label' => 'hidden',
      );

      $render_array = field_view_field($entity_type, $display_entity, $this->definition['field_name'], $display, $langcode);
      return drupal_render($render_array);
    }
    else {
      return '';
    }
  }
}
