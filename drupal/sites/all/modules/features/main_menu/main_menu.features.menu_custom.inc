<?php
/**
 * @file
 * main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-unfi-main-menu.
  $menus['menu-unfi-main-menu'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'title' => 'UNFI Main Menu',
    'description' => 'Main menu for UNFI Supplier Portal, combining some earlier menus',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu for UNFI Supplier Portal, combining some earlier menus');
  t('UNFI Main Menu');


  return $menus;
}
