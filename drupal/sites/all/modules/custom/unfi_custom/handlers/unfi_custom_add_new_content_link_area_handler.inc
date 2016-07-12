<?php

class add_new_content_link_area_handler extends views_handler_area {

  /**
   * Override for additional options.
   */
  function option_definition() {
    // Build off the defaults
    $options = parent::option_definition();
    // Node bundle machine name
    $options['content_type'] = array('default' => 'page');
    // Return to the page of the view
    $options['destination'] = array('default' => FALSE, 'bool' => TRUE);
    // Append the URL with $_GET variables
    $options['get_vars'] = array('default' => '');
    // Allow admins to tokenize $_GET variables
    $options['tokenize'] = array('default' => FALSE, 'bool' => TRUE);
    return $options;
  }

  /**
   * Override to provide admin UI.
   */
  function options_form(&$form, &$form_state) {
    // Build off the defaults
    parent::options_form($form, $form_state);
    // Selection box for the available node bundles
    $form['content_type'] = array(
      '#type'          => 'select',
      '#title'         => t('Content Type'),
      '#options'       => array(),
      '#default_value' => $this->options['content_type'],
      '#description'   => t(''),
    );
    // Loop through the available node bundles
    foreach (node_type_get_types() as $bundle_name => $content_type) {
      // Key the 
      $form['content_type']['#options'][$bundle_name] = $content_type->name;
    }
    // Checkbox to return to the view's page after creating the content
    $form['destination'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('Return to view'),
      '#default_value' => $this->options['destination'],
      '#description'   => t(''),
    );
    // Text area for $_GET options
    $form['get_vars'] = array(
      '#type'          => 'textarea',
      '#title'         => t('$_GET Variables'),
      '#default_value' => $this->options['get_vars'],
      '#description'   => t('One \'name=value\' pair per line.'),
    );
    // The following code was copied from the views_handler_area_text class.
    // ---------------------------------------------------------------------
    // @TODO: Refactor token handling into a base class.
    $form['tokenize'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use replacement tokens from the first row'),
      '#default_value' => $this->options['tokenize'],
    );

    // Get a list of the available fields and arguments for token replacement.
    $options = array();
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      $options[t('Fields')]["[$field]"] = $handler->ui_name();
    }

    $count = 0; // This lets us prepare the key as we want it printed.
    foreach ($this->view->display_handler->get_handlers('argument') as $arg => $handler) {
      $options[t('Arguments')]['%' . ++$count] = t('@argument title', array('@argument' => $handler->ui_name()));
      $options[t('Arguments')]['!' . $count] = t('@argument input', array('@argument' => $handler->ui_name()));
    }
    
    if (!empty($options)) {
      $output = '<p>' . t('The following tokens are available. If you would like to have the characters \'[\' and \']\' please use the html entity codes \'%5B\' or  \'%5D\' or they will get replaced with empty space.' . '</p>');
      foreach (array_keys($options) as $type) {
        if (!empty($options[$type])) {
          $items = array();
          foreach ($options[$type] as $key => $value) {
            $items[] = $key . ' == ' . check_plain($value);
          }
          $output .= theme('item_list',
            array(
              'items' => $items,
              'type' => $type
            ));
        }
      }

      $form['token_help'] = array(
        '#type' => 'fieldset',
        '#title' => t('Replacement patterns'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#value' => $output,
        '#id' => 'edit-options-token-help',
        '#dependency' => array(
          'edit-options-tokenize' => array(1),
        ),
        '#prefix' => '<div>',
        '#suffix' => '</div>',
      );
    }
    // ---------------------------------------------------------------------
  }

  /**
   * Override to build a link HTML string.
   */
  function render($empty = FALSE) {
    // Load the content info, or return blank on failure.
    if (!($type_info = node_type_get_type($this->options['content_type']))) {
      return '';
    }
    // Check if the user has access to create the content type
    if (!node_access('create', $type_info->type)) {
      return '';
    }
    // Start building variables to passed into l()
    // For some reason, node add URLs have hyphens instead of underscores
    $label   = t('Add new @n', array('@n' => $type_info->name));
    $path    = 'node/add/' . str_replace('_', '-', $this->options['content_type']);
    $options = array();
    // Convert $_GET option text to the query array
    // Start by separating each of the lines
    foreach (explode("\n", $this->options['get_vars']) as $pair_str) {
      // Separate each line into 'name', 'value' pairs
      $pair = explode('=', $pair_str);
      // Make sure there are two elements
      if (isset($pair[0]) && isset($pair[1])) {
        // Tokenize the value if desired
        if ($this->options['tokenize']) {
          $pair[1] = $this->view->style_plugin->tokenize_value($pair[1], 0);
        }
        // Store the pair in the query array
        $options['query'][$pair[0]] = $pair[1];
      }
    }
    // Store the current path as the destination in the query array
    // so that when the user finishes the form, they will return to the view
    if ($this->options['destination']) {
      $options['query']['destination'] = current_path();
    }
    // Build and return the link HTML string
    return l($label, $path, $options);
  }
}
