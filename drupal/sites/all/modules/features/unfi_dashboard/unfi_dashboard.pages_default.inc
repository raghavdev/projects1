<?php
/**
 * @file
 * unfi_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function unfi_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Supplier Company Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'supplier' => 'supplier',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ef7b81d0-2254-42b8-a945-a6c42e75c918';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a8db7f2-ac68-43e2-8c3d-b8e57b6dc533';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a8db7f2-ac68-43e2-8c3d-b8e57b6dc533';
    $display->content['new-4a8db7f2-ac68-43e2-8c3d-b8e57b6dc533'] = $pane;
    $display->panels['left'][0] = 'new-4a8db7f2-ac68-43e2-8c3d-b8e57b6dc533';
    $pane = new stdClass();
    $pane->pid = 'new-e0722b5c-1430-481b-ae91-263b402c60ff';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'supplier_contacts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e0722b5c-1430-481b-ae91-263b402c60ff';
    $display->content['new-e0722b5c-1430-481b-ae91-263b402c60ff'] = $pane;
    $display->panels['left'][1] = 'new-e0722b5c-1430-481b-ae91-263b402c60ff';
    $pane = new stdClass();
    $pane->pid = 'new-cd6b1c94-2399-42a0-a69a-8667630b8ea6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'inbox-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cd6b1c94-2399-42a0-a69a-8667630b8ea6';
    $display->content['new-cd6b1c94-2399-42a0-a69a-8667630b8ea6'] = $pane;
    $display->panels['left'][2] = 'new-cd6b1c94-2399-42a0-a69a-8667630b8ea6';
    $pane = new stdClass();
    $pane->pid = 'new-bd17e132-f808-404d-adf7-9c288ba86d2b';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'supplier_group_members';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '1',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd17e132-f808-404d-adf7-9c288ba86d2b';
    $display->content['new-bd17e132-f808-404d-adf7-9c288ba86d2b'] = $pane;
    $display->panels['right'][0] = 'new-bd17e132-f808-404d-adf7-9c288ba86d2b';
    $pane = new stdClass();
    $pane->pid = 'new-02025353-4ae5-4a68-829e-5cd3879e4a9b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'pickup_locations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '02025353-4ae5-4a68-829e-5cd3879e4a9b';
    $display->content['new-02025353-4ae5-4a68-829e-5cd3879e4a9b'] = $pane;
    $display->panels['right'][1] = 'new-02025353-4ae5-4a68-829e-5cd3879e4a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function unfi_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'welcome';
  $page->task = 'page';
  $page->admin_title = 'Welcome';
  $page->admin_description = 'The welcome screen that welcomes Supplier Portal users.';
  $page->path = 'welcome';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_welcome_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'welcome';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'dashboard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => array(
        'corner_location' => 'pane',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '3abdd072-a6b8-44af-861f-3cfd5d0dbeae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed58bb12-7f1e-4595-bca1-76551c843143';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'item_lookup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed58bb12-7f1e-4595-bca1-76551c843143';
    $display->content['new-ed58bb12-7f1e-4595-bca1-76551c843143'] = $pane;
    $display->panels['left'][0] = 'new-ed58bb12-7f1e-4595-bca1-76551c843143';
    $pane = new stdClass();
    $pane->pid = 'new-973aa6b2-c3b7-48f7-b82a-4a2b84097fe3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '973aa6b2-c3b7-48f7-b82a-4a2b84097fe3';
    $display->content['new-973aa6b2-c3b7-48f7-b82a-4a2b84097fe3'] = $pane;
    $display->panels['left'][1] = 'new-973aa6b2-c3b7-48f7-b82a-4a2b84097fe3';
    $pane = new stdClass();
    $pane->pid = 'new-16f5c658-745a-4ec9-9075-07c72dc133c1';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'my_suppliers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16f5c658-745a-4ec9-9075-07c72dc133c1';
    $display->content['new-16f5c658-745a-4ec9-9075-07c72dc133c1'] = $pane;
    $display->panels['right'][0] = 'new-16f5c658-745a-4ec9-9075-07c72dc133c1';
    $pane = new stdClass();
    $pane->pid = 'new-f8c668ee-d7c9-46bd-aee5-6868bc13b588';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'supplier_updates-supplier_updates_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f8c668ee-d7c9-46bd-aee5-6868bc13b588';
    $display->content['new-f8c668ee-d7c9-46bd-aee5-6868bc13b588'] = $pane;
    $display->panels['right'][1] = 'new-f8c668ee-d7c9-46bd-aee5-6868bc13b588';
    $pane = new stdClass();
    $pane->pid = 'new-ffa5788d-0fdc-49d6-80ba-0c34b5d02d6e';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'inbox';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 7,
              2 => 5,
              3 => 12,
              4 => 16,
              5 => 17,
              6 => 13,
              7 => 14,
              8 => 6,
              9 => 10,
              10 => 15,
              11 => 11,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'requests_admin',
      'override_title' => 1,
      'override_title_text' => 'Inbox',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ffa5788d-0fdc-49d6-80ba-0c34b5d02d6e';
    $display->content['new-ffa5788d-0fdc-49d6-80ba-0c34b5d02d6e'] = $pane;
    $display->panels['top'][0] = 'new-ffa5788d-0fdc-49d6-80ba-0c34b5d02d6e';
    $pane = new stdClass();
    $pane->pid = 'new-882dc3bb-cbee-4355-b196-7349f29a88b6';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'inbox';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
              1 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'requests_suppliers',
      'override_title' => 1,
      'override_title_text' => 'Inbox',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '882dc3bb-cbee-4355-b196-7349f29a88b6';
    $display->content['new-882dc3bb-cbee-4355-b196-7349f29a88b6'] = $pane;
    $display->panels['top'][1] = 'new-882dc3bb-cbee-4355-b196-7349f29a88b6';
    $pane = new stdClass();
    $pane->pid = 'new-4e3c4ab9-df55-435a-bd7d-d2b87311a6c3';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'inbox';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'requests_srm',
      'override_title' => 1,
      'override_title_text' => 'Inbox',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e3c4ab9-df55-435a-bd7d-d2b87311a6c3';
    $display->content['new-4e3c4ab9-df55-435a-bd7d-d2b87311a6c3'] = $pane;
    $display->panels['top'][2] = 'new-4e3c4ab9-df55-435a-bd7d-d2b87311a6c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_welcome_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'welcome';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Welcome',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome';
  $display->uuid = '6e18cf23-5c8d-4766-a9ab-fe1152091080';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-201c00e0-31a7-4dda-b493-8c1160292d05';
    $pane->panel = 'middle';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '201c00e0-31a7-4dda-b493-8c1160292d05';
    $display->content['new-201c00e0-31a7-4dda-b493-8c1160292d05'] = $pane;
    $display->panels['middle'][0] = 'new-201c00e0-31a7-4dda-b493-8c1160292d05';
    $pane = new stdClass();
    $pane->pid = 'new-1d4a8792-b577-4a13-9145-a8c2b8bdea5d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-welcome_slides-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Welcome',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1d4a8792-b577-4a13-9145-a8c2b8bdea5d';
    $display->content['new-1d4a8792-b577-4a13-9145-a8c2b8bdea5d'] = $pane;
    $display->panels['middle'][1] = 'new-1d4a8792-b577-4a13-9145-a8c2b8bdea5d';
    $pane = new stdClass();
    $pane->pid = 'new-14b6c757-525d-4689-894e-544a0e49550b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Welcome page message',
      'title' => '',
      'body' => 'The UNFI Supplier Portal is a powerful resource to help our Suppliers quickly and efficiently do business with UNFI.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'welcome-message',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14b6c757-525d-4689-894e-544a0e49550b';
    $display->content['new-14b6c757-525d-4689-894e-544a0e49550b'] = $pane;
    $display->panels['middle'][2] = 'new-14b6c757-525d-4689-894e-544a0e49550b';
    $pane = new stdClass();
    $pane->pid = 'new-dd4d8c48-39d5-484f-960b-670d82c3d069';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dd4d8c48-39d5-484f-960b-670d82c3d069';
    $display->content['new-dd4d8c48-39d5-484f-960b-670d82c3d069'] = $pane;
    $display->panels['middle'][3] = 'new-dd4d8c48-39d5-484f-960b-670d82c3d069';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['welcome'] = $page;

  return $pages;

}
