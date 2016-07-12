<?php

/**
 * Implements hook_html_head_alter().
 */
function supplier_portal_html_head_alter(&$head_elements) {
  $head_elements['viewport'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width,initial-scale=1,maximum-scale=1,user-scalable=0'),
  );
}

/**
 * Override or insert variables into the page template.
 */
function supplier_portal_process_page(&$vars) {
  if (theme_get_setting('display_breadcrumbs') == 1) {
    unset($vars['breadcrumb']);
  }

  // Insert #secondary tabs right above content so we can have nice vertical menus.
  $secondary_tabs = $vars['tabs'];
  unset($vars['tabs']['#secondary']);
  unset($secondary_tabs['#primary']);
  $vars['page']['content']['system_main']['main']['#prefix'] = render($secondary_tabs);
}

/**
 * Display the list of available node types for node creation.
 */
function supplier_portal_node_add_list($variables) {
  $content = $variables['content'];
  $output = '';
  if ($content) {
    $output = '<ul class="admin-list">';
    foreach ($content as $item) {
      $output .= '<li class="clearfix">';
      $output .= '<span class="label">' . l($item['title'], $item['href'], $item['localized_options']) . '</span>';
      $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  else {
    $output = '<p>' . t('You have not created any content types yet. Go to the <a href="@create-content">content type creation page</a> to add a new content type.', array('@create-content' => url('admin/structure/types/add'))) . '</p>';
  }
  return $output;
}

/**
 * Overrides theme_admin_block_content().
 *
 * Use unordered list markup in both compact and extended mode.
 */
function supplier_portal_admin_block_content($variables) {
  $content = $variables['content'];
  $output = '';
  if (!empty($content)) {
    $output = system_admin_compact_mode() ? '<ul class="admin-list compact">' : '<ul class="admin-list">';
    foreach ($content as $item) {
      $output .= '<li class="leaf">';
      $output .= l($item['title'], $item['href'], $item['localized_options']);
      if (isset($item['description']) && !system_admin_compact_mode()) {
        $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
      }
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * Override of theme_tablesort_indicator().
 *
 * Use our own image versions, so they show up as black and not gray on gray.
 */
function supplier_portal_tablesort_indicator($variables) {
  $style = $variables['style'];
  $theme_path = drupal_get_path('theme', 'supplier_portal');
  if ($style == 'asc') {
    return theme('image', array('path' => $theme_path . '/images/arrow-asc.png', 'alt' => t('sort ascending'), 'width' => 13, 'height' => 13, 'title' => t('sort ascending')));
  }
  else {
    return theme('image', array('path' => $theme_path . '/images/arrow-desc.png', 'alt' => t('sort descending'), 'width' => 13, 'height' => 13, 'title' => t('sort descending')));
  }
}

/**
 * Implements hook_css_alter().
 */
function supplier_portal_css_alter(&$css) {
  // Use Supplier_Portal's jQuery UI styles instead of the defaults.
  $jquery = array('core', 'dialog', 'tabs', 'theme');
  foreach($jquery as $module) {
    if (isset($css['misc/ui/jquery.ui.' . $module . '.css'])) {
      $css['misc/ui/jquery.ui.' . $module . '.css']['data'] = drupal_get_path('theme', 'supplier_portal') . '/styles/jquery.ui.' . $module . '.css';
    }
  }

  // If the media module is installed, Replace it with Supplier_Portal's.
  if (module_exists('media')) {
    $media_path = drupal_get_path('module', 'media') . '/css/media.css';
    if(isset($css[$media_path])) {
      $css[$media_path]['data'] = drupal_get_path('theme', 'supplier_portal') . '/styles/media.css';
    }
  }
}
/**
 * Implements hook_views_data_export_feed_icon().
 * Replaces the default CSV icon with custom text for the Supplier\
 * Contacts export button on the All Suppliers list page.
 */
function supplier_portal_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => true, 'attributes' => array('class' => 'csv-export'));
  if ($query) {
      $url_options['query'] = $query;
  }
  $link_text = '';
  $image = theme('image', array('path' => $image_path, 'alt' => $text, 'title' => $text));
  // For certain data exports, append with text
  if ($url == 'suppliers/all_contacts.csv') {
    $link_text = t('Download All Contacts');
  }
  elseif ($url == 'suppliers/all_vendor_warehouse_locations.csv') {
    $link_text = t('Download All Vendor Warehouse Locations');
  }
  elseif (strpos($url, 'my_supplier_contacts.csv') !== FALSE) {
    $link_text = t('Download All Your Supplier Contacts');
  }
  elseif (strpos($url, 'my_supplier_vendor_warehouse_locations.csv') !== FALSE) {
    $link_text = t('Download All Your Supplier Vendor Warehouse Locations');
  }
  // Wrapping in a DIV for the case that there may be multiple data exports for the same view
  // this would caused them to be displayed on individual lines instead of being a run-on
  // TODO: could be given class(es)
  return '<DIV>' . l($image . $link_text, $url, $url_options) . '</DIV>';
}

/**
* Implements hook_form_FORM_ID_alter().
*/
function supplier_portal_form_user_login_block_alter(&$form) {

  // Remove the default "register" and "forgot password" links provided by Drupal.
  // (they will be added in a different location later.)
  unset($form['links']);

  $form['name']['#prefix'] = '<div class="form-container">';

  // Set a weight for form actions so other elements can be placed
  // beneath them.
  $form['actions']['#weight'] = 5;
  $form['actions']['#suffix'] = '</div>';

  // Don't allow the browser to store the password, because some guy issued a security audit and said this was bad, even though it actually reduces security to do this. 
  $form['pass']['#attributes']['autocomplete'] = 'off';

  // new password link.
  $form['links-container'] = array(
    '#type' => 'container',
    '#weight' => 6,
  );
  $form['links-container']['request_password'] = array(
    '#markup' => l(t('Forgot password?'), 'user/password', array('attributes' => array('title' => t('Request new password via e-mail.')))),
    '#weight' => 9,
  );

  $form['links-container']['help_request'] = array(
    '#markup' => l(t('Need help with something?'), 'http://unfidigital.zendesk.com', array('attributes' => array('title' => t('Help for all of your other questions.')))),
    '#weight' => 11,
  );

  // New sign up link
  if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
    $form['links-container']['signup'] = array(
      '#markup' => l(t('Create new account'), 'user/register', array('attributes' => array('id' => 'create-new-account', 'title' => t('Create a new user account.')))),
      '#weight' => 10,
    );
  }
}

// Change title on Supplier Contact node pages
function supplier_portal_preprocess_page(&$vars) {
  if (!empty($vars['node']) && in_array($vars['node']->type, array('supplier_contact'))) {
    $url_comp = explode('/', request_uri());
    if (!empty($url_comp[3]) == 'edit') {
      $vars['title'] = t('Edit Contact');
     } else {
       $vars['title'] = t('View Contact');
    }
  }
}

// Add class to page based on user role
function supplier_portal_preprocess_html(&$vars) {
  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'role-' . drupal_html_class($role);
  }
}
