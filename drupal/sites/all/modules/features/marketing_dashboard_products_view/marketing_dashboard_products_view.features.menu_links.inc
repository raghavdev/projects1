<?php
/**
 * @file
 * marketing_dashboard_products_view.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function marketing_dashboard_products_view_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-unfi-main-menu_marketing:marketing-dashboard
  $menu_links['menu-unfi-main-menu_marketing:marketing-dashboard'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'marketing-dashboard',
    'router_path' => 'marketing-dashboard',
    'link_title' => 'Marketing',
    'options' => array(
      'attributes' => array(
        'title' => 'New marketing items.',
      ),
      'identifier' => 'menu-unfi-main-menu_marketing:marketing-dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Marketing');


  return $menu_links;
}
