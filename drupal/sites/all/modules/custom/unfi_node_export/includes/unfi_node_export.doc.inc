<?php

/**
 * Implements unfi_node_export_EXTENSION_file().
 * Basic HTML can be used to write *.doc files.
 */
function unfi_node_export_build_doc_file($node, $variables) {
  global $base_url;
  // Store export variables in the node so they persist for the rest of the request
  $node->unfi_node_export_build_file = $variables;
  // So this will be the point where I will break from the organic approach
  // but I would like to make this more abstract at some point.
  // TODO: hook_possibility(): node_export_pre_node_view

  // Build a full filepath including name and extension
  $filepath = $variables['stream'] . $variables['directory'] . '/' . $variables['filename'] . '.' . $variables['extension'];
  // TODO: header and footer could be customizable, but remember to do it securely
  // Initialize with just basic HTML header and footer
  $head = '<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /></head><body>';
  $foot = '</body></html>';
  // Build render array of node
  $node_view = node_view($node, 'full');
  // TODO: Might need set theme_funcs per theme?
  // TODO: add this to the configuration page
  // Enquire about which theme function to use for the node rendering
  // Remember that double underscores allow for falling back basic core themes
  // (like node, comment, links, etc) on many points through out the rendering
  $theme_func = variable_get('unfi_export_node_doc_theme_func', '');
  // If there is an alternate theme function set
  if (!empty($theme_func) && $theme_func != 'node') {
    // Apply theme function
    $node_view['#theme'] = $theme_func;
  }
  // Empty the contextual links
  $node_view['#contextual_links'] = array();
  // TODO: hook_possibility(): node_export_post_node_view
  // Convert image fields to basic link files
  unfi_node_export_convert_image_fields($node_view);
  // TODO: hook_possibility(): node_export_post_node_view
  /// If this is a request_form
  if ($node->type == 'request_form') {
    // Load the products views
    $view = views_get_view('products');
    $displays = array_keys($view->display);
    foreach ($displays as $display_id) {
      // Don't display the edit page displays or that master display
      if (strpos($display_id, 'edit_') !== 0 && $display_id != 'default') {
        $view->set_display($display_id);
        $node_view['products_' . $display_id]['#markup'] = '<h4>' . $view->get_title() . '</h4>' . $view->preview($display_id, array($node->nid));
        // Ensure the display is rebuilt
        $view->destroy();
      }
    }
  }
  // Render the node
  $render = render($node_view);
  // TODO: hook_possibility(): node_export_pre_regex to make any changes to the node
  //                           and/or to provide additional preg_replace args
  //                           Note: append the defaults, so that custom regex pairs
  //                           are processed first
  // Set up regular expressions to match & replace
  $reg_ex_match = array('#<a\s(.*?)href="/(.*?)"(.*?)>(.*?)</a>#');
  $replacement  = array('$4'); // Start by assuming links were not allowed
  // If the links are wanted in the render
  if ($variables['links']) {
    // Rebuild the link with the full URL
    $replacement[0] = '<a $1href="' . $base_url . '/$2"$3>$4</a>';
  }
  // Process the regex on the node's HTML and append with the header and footer
  $render = preg_replace($reg_ex_match, $replacement, $head . $render . $foot);
  // Write the rendered HTML to the file
  $result = file_put_contents($filepath, $render);
  // If that failed for some reason
  if (!$result) {
    return FALSE;
  }
  // Otherwise, confirm with the filepath
  return $filepath;
}

/**
 * Implements hook_preproces_node_EXTENSION().
 */
function unfi_node_export_preprocess_node_doc(&$variables) {
  // Load the user account that created the node
  $account = user_load($variables['uid']);
  // Query for the node's URI
  $uri = entity_uri('node', $variables['node']);
  // Set the URI to include the base URL
  $uri['options']['absolute'] = TRUE;
  // Force the title to be displayed
  $variables['page'] = FALSE;
  // Remove any link to the user
  $variables['name'] = check_plain($account->name);
  // Rebuild the node's URL
  $variables['node_url'] = url($uri['path'], $uri['options']);
  // Rebuild the submitted statement without the link to the user
  $variables['submitted'] = t('Submitted by !username on !datetime', array(
    '!username' => $variables['name'],
    '!datetime' => $variables['date'],
  ));
}

/**
 * Forces image field render arrays to file download links
 */
function unfi_node_export_convert_image_fields(&$node_view) {
  // Declare theme functions to target
  $target_themes = array(
    'image_formatter',
  );
  // Loop through the node view
  foreach ($node_view as $key => &$field) {
    // Check validity
    if (
      strpos($key, 'field_') !== 0 // Is not field
      || empty($field[0]['#theme']) // Render array doesn't exists
      || !in_array($field[0]['#theme'], $target_themes) // Doesn't matched
      || empty($field[0]['#item']['fid']) // No file ID exists
    ) {
      continue;
    }
    // Loop through the items to be rendered
    foreach ($field['#items'] as $key => $item) {
      // Force to be themed by the file download
      $field[$key] = array(
        '#theme' => 'download_file_formatter_direct_download',
        '#items' => array($item),
      );
    }
  }
}
