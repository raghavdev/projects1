<?php
/**
 * @file
 * unfi_request_form.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function unfi_request_form_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'New Item Request Form',
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
              'request_form' => 'request_form',
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
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c95e6690-a152-4056-b892-bea980d90232';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f8a18f9-78fc-482f-9a96-87a096b61483';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-basic_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f8a18f9-78fc-482f-9a96-87a096b61483';
    $display->content['new-3f8a18f9-78fc-482f-9a96-87a096b61483'] = $pane;
    $display->panels['middle'][0] = 'new-3f8a18f9-78fc-482f-9a96-87a096b61483';
    $pane = new stdClass();
    $pane->pid = 'new-1f08b52a-d43d-4066-a0bf-ed387899f032';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-item_details';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1f08b52a-d43d-4066-a0bf-ed387899f032';
    $display->content['new-1f08b52a-d43d-4066-a0bf-ed387899f032'] = $pane;
    $display->panels['middle'][1] = 'new-1f08b52a-d43d-4066-a0bf-ed387899f032';
    $pane = new stdClass();
    $pane->pid = 'new-1ea70f60-472e-44f8-bb47-14235dbf0ae1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-origin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1ea70f60-472e-44f8-bb47-14235dbf0ae1';
    $display->content['new-1ea70f60-472e-44f8-bb47-14235dbf0ae1'] = $pane;
    $display->panels['middle'][2] = 'new-1ea70f60-472e-44f8-bb47-14235dbf0ae1';
    $pane = new stdClass();
    $pane->pid = 'new-1ab99d5c-3181-4950-87b3-877f4907a3e6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-coding';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1ab99d5c-3181-4950-87b3-877f4907a3e6';
    $display->content['new-1ab99d5c-3181-4950-87b3-877f4907a3e6'] = $pane;
    $display->panels['middle'][3] = 'new-1ab99d5c-3181-4950-87b3-877f4907a3e6';
    $pane = new stdClass();
    $pane->pid = 'new-88d67b9b-80d8-4480-8a12-c8151a72d1df';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-east_distributor_costs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '88d67b9b-80d8-4480-8a12-c8151a72d1df';
    $display->content['new-88d67b9b-80d8-4480-8a12-c8151a72d1df'] = $pane;
    $display->panels['middle'][4] = 'new-88d67b9b-80d8-4480-8a12-c8151a72d1df';
    $pane = new stdClass();
    $pane->pid = 'new-a2207dba-541a-4c77-9061-ca47c91d98e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-west_distributor_costs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a2207dba-541a-4c77-9061-ca47c91d98e8';
    $display->content['new-a2207dba-541a-4c77-9061-ca47c91d98e8'] = $pane;
    $display->panels['middle'][5] = 'new-a2207dba-541a-4c77-9061-ca47c91d98e8';
    $pane = new stdClass();
    $pane->pid = 'new-9f2303a5-86e9-4f0a-b19f-50d8f40af4c0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-certifications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9f2303a5-86e9-4f0a-b19f-50d8f40af4c0';
    $display->content['new-9f2303a5-86e9-4f0a-b19f-50d8f40af4c0'] = $pane;
    $display->panels['middle'][6] = 'new-9f2303a5-86e9-4f0a-b19f-50d8f40af4c0';
    $pane = new stdClass();
    $pane->pid = 'new-4399fce9-1a27-4b03-ae4e-8a5a5782f4cb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-additives';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4399fce9-1a27-4b03-ae4e-8a5a5782f4cb';
    $display->content['new-4399fce9-1a27-4b03-ae4e-8a5a5782f4cb'] = $pane;
    $display->panels['middle'][7] = 'new-4399fce9-1a27-4b03-ae4e-8a5a5782f4cb';
    $pane = new stdClass();
    $pane->pid = 'new-3bca7788-f03a-48f6-9871-53ad5e4f7b34';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-dietary_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3bca7788-f03a-48f6-9871-53ad5e4f7b34';
    $display->content['new-3bca7788-f03a-48f6-9871-53ad5e4f7b34'] = $pane;
    $display->panels['middle'][8] = 'new-3bca7788-f03a-48f6-9871-53ad5e4f7b34';
    $pane = new stdClass();
    $pane->pid = 'new-59070676-1f9d-468b-9e7a-853bc759ad46';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-non_food_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '59070676-1f9d-468b-9e7a-853bc759ad46';
    $display->content['new-59070676-1f9d-468b-9e7a-853bc759ad46'] = $pane;
    $display->panels['middle'][9] = 'new-59070676-1f9d-468b-9e7a-853bc759ad46';
    $pane = new stdClass();
    $pane->pid = 'new-af790a0a-bfbd-43c7-b24b-2d599364daad';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-shelf_life';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'af790a0a-bfbd-43c7-b24b-2d599364daad';
    $display->content['new-af790a0a-bfbd-43c7-b24b-2d599364daad'] = $pane;
    $display->panels['middle'][10] = 'new-af790a0a-bfbd-43c7-b24b-2d599364daad';
    $pane = new stdClass();
    $pane->pid = 'new-4675199f-e2ba-42e9-930d-71a4c1f6c454';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-expiration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '4675199f-e2ba-42e9-930d-71a4c1f6c454';
    $display->content['new-4675199f-e2ba-42e9-930d-71a4c1f6c454'] = $pane;
    $display->panels['middle'][11] = 'new-4675199f-e2ba-42e9-930d-71a4c1f6c454';
    $pane = new stdClass();
    $pane->pid = 'new-8df8bce6-9a15-4032-9134-31c249ba8804';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-beverages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '8df8bce6-9a15-4032-9134-31c249ba8804';
    $display->content['new-8df8bce6-9a15-4032-9134-31c249ba8804'] = $pane;
    $display->panels['middle'][12] = 'new-8df8bce6-9a15-4032-9134-31c249ba8804';
    $pane = new stdClass();
    $pane->pid = 'new-d9e8cca7-1ef0-4282-b2aa-af7322921651';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-packaging_specs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'd9e8cca7-1ef0-4282-b2aa-af7322921651';
    $display->content['new-d9e8cca7-1ef0-4282-b2aa-af7322921651'] = $pane;
    $display->panels['middle'][13] = 'new-d9e8cca7-1ef0-4282-b2aa-af7322921651';
    $pane = new stdClass();
    $pane->pid = 'new-4360c3cb-c423-41d8-b6ce-74bc73645ead';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-warehouse_locations_east';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '4360c3cb-c423-41d8-b6ce-74bc73645ead';
    $display->content['new-4360c3cb-c423-41d8-b6ce-74bc73645ead'] = $pane;
    $display->panels['middle'][14] = 'new-4360c3cb-c423-41d8-b6ce-74bc73645ead';
    $pane = new stdClass();
    $pane->pid = 'new-15209436-0976-4afd-9456-4f6ecf30f698';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-warehouse_locations_west';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '15209436-0976-4afd-9456-4f6ecf30f698';
    $display->content['new-15209436-0976-4afd-9456-4f6ecf30f698'] = $pane;
    $display->panels['middle'][15] = 'new-15209436-0976-4afd-9456-4f6ecf30f698';
    $pane = new stdClass();
    $pane->pid = 'new-b19fc8cd-7c66-4282-995d-23e059697d5b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-vendor_warehouse_locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'b19fc8cd-7c66-4282-995d-23e059697d5b';
    $display->content['new-b19fc8cd-7c66-4282-995d-23e059697d5b'] = $pane;
    $display->panels['middle'][16] = 'new-b19fc8cd-7c66-4282-995d-23e059697d5b';
    $pane = new stdClass();
    $pane->pid = 'new-02cfb7a3-1514-4404-95e1-3b88fea746bb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '02cfb7a3-1514-4404-95e1-3b88fea746bb';
    $display->content['new-02cfb7a3-1514-4404-95e1-3b88fea746bb'] = $pane;
    $display->panels['middle'][17] = 'new-02cfb7a3-1514-4404-95e1-3b88fea746bb';
    $pane = new stdClass();
    $pane->pid = 'new-5e50e4f0-35a9-40f7-8284-cf329c7c87d3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-marketing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '5e50e4f0-35a9-40f7-8284-cf329c7c87d3';
    $display->content['new-5e50e4f0-35a9-40f7-8284-cf329c7c87d3'] = $pane;
    $display->panels['middle'][18] = 'new-5e50e4f0-35a9-40f7-8284-cf329c7c87d3';
    $pane = new stdClass();
    $pane->pid = 'new-c96d3f6a-c4bb-4ecd-8754-911fac1bf22e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-promotions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = 'c96d3f6a-c4bb-4ecd-8754-911fac1bf22e';
    $display->content['new-c96d3f6a-c4bb-4ecd-8754-911fac1bf22e'] = $pane;
    $display->panels['middle'][19] = 'new-c96d3f6a-c4bb-4ecd-8754-911fac1bf22e';
    $pane = new stdClass();
    $pane->pid = 'new-cb4977f7-63fe-440d-970d-a5a33b7b2d03';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-unfi_internal_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = 'cb4977f7-63fe-440d-970d-a5a33b7b2d03';
    $display->content['new-cb4977f7-63fe-440d-970d-a5a33b7b2d03'] = $pane;
    $display->panels['middle'][20] = 'new-cb4977f7-63fe-440d-970d-a5a33b7b2d03';
    $pane = new stdClass();
    $pane->pid = 'new-8b171856-12c0-4263-b736-3fda525aefd7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'New Item Publication Fees',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b171856-12c0-4263-b736-3fda525aefd7';
    $display->content['new-8b171856-12c0-4263-b736-3fda525aefd7'] = $pane;
    $display->panels['right_above'][0] = 'new-8b171856-12c0-4263-b736-3fda525aefd7';
    $pane = new stdClass();
    $pane->pid = 'new-2eeb2d49-0238-4ff0-bc42-33a834537e7a';
    $pane->panel = 'top';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2eeb2d49-0238-4ff0-bc42-33a834537e7a';
    $display->content['new-2eeb2d49-0238-4ff0-bc42-33a834537e7a'] = $pane;
    $display->panels['top'][0] = 'new-2eeb2d49-0238-4ff0-bc42-33a834537e7a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
