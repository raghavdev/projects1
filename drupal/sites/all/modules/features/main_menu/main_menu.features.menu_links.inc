<?php
/**
 * @file
 * main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-unfi-main-menu_add-faq:node/add/faq
  $menu_links['menu-unfi-main-menu_add-faq:node/add/faq'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'Add faq',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_add-faq:node/add/faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_all-requests:new-item-requests
  $menu_links['menu-unfi-main-menu_all-requests:new-item-requests'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'new-item-requests',
    'router_path' => 'new-item-requests',
    'link_title' => 'All requests',
    'options' => array(
      'attributes' => array(
        'title' => 'View current requests',
      ),
      'identifier' => 'menu-unfi-main-menu_all-requests:new-item-requests',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_all-suppliers:suppliers
  $menu_links['menu-unfi-main-menu_all-suppliers:suppliers'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'suppliers',
    'router_path' => 'suppliers',
    'link_title' => 'All suppliers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_all-suppliers:suppliers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_dashboard:<front>
  $menu_links['menu-unfi-main-menu_dashboard:<front>'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_dashboard:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_help:help
  $menu_links['menu-unfi-main-menu_help:help'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'help',
    'router_path' => 'help',
    'link_title' => 'Help',
    'options' => array(
      'identifier' => 'menu-unfi-main-menu_help:help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-unfi-main-menu_log-out:user/logout
  $menu_links['menu-unfi-main-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_my-account:user
  $menu_links['menu-unfi-main-menu_my-account:user'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_new-item-request:node/add/request-form
  $menu_links['menu-unfi-main-menu_new-item-request:node/add/request-form'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'node/add/request-form',
    'router_path' => 'node/add/request-form',
    'link_title' => 'New item request',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_new-item-request:node/add/request-form',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_pack-change:node/add/pack-change
  $menu_links['menu-unfi-main-menu_pack-change:node/add/pack-change'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'node/add/pack-change',
    'router_path' => 'node/add/pack-change',
    'link_title' => 'Pack change',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_pack-change:node/add/pack-change',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-unfi-main-menu_supplier:node/add/supplier
  $menu_links['menu-unfi-main-menu_supplier:node/add/supplier'] = array(
    'menu_name' => 'menu-unfi-main-menu',
    'link_path' => 'node/add/supplier',
    'router_path' => 'node/add/supplier',
    'link_title' => 'Supplier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-unfi-main-menu_supplier:node/add/supplier',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add faq');
  t('All requests');
  t('All suppliers');
  t('Dashboard');
  t('Help');
  t('Log out');
  t('My account');
  t('New item request');
  t('Pack change');
  t('Supplier');


  return $menu_links;
}
