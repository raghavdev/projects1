<?php

// ...was used for initial testing, will delete some point soon...
function unfi_sp_solr_solr_connection($type) {
  $render = array();

  $page = 0;
  $limit = 100;
  $get_params = drupal_get_query_parameters();
  if (!empty($get_params['page'])) {
    $page = (int)$get_params['page'];
  }

  $content_types = array(
    'product_details' => array(
      // 'server_name'      => 'digital_core',
      'index_name'       => 'default_node_index',
      'query_parameters' => array(
        'type'    => 'product_details',
        'page'    => $page,
        'perPage' => $limit,
        // 'sort' => 'upc',
        // 'sort_dir' => 'DESC',
        // 'available' => TRUE,
        // 'sort' => 'title',
        // 'search' => array(),
      ),
      'searched_fields' => array(
        // 'title',
        // 'body:value',
        // 'field_brand',
        // 'field_brand_description',
        // 'field_brand_long_description',
        // 'field_consumer_brand_name',
        // 'field_consumer_product_name',
        // 'field_flyer_description',
        // 'field_extended_description',
        // 'field_html_description',
        // 'field_feature1',
        // 'field_feature2',
        // 'field_feature3',
        // 'field_feature4',
        // 'field_master_case_upc',
        // 'field_keywords',
        // 'upc',
        // 'title',
        // 'west_product_id',
        // 'east_product_id',
        // 'east_product_id_full',
      ),
      'return_fields' => array(
        'type',
        'title',
        // 'field_title',
        // 'body:value',
        // 'field_brand',
        // 'field_brand_description',
        // 'field_brand_long_description',
        // 'field_consumer_brand_name',
        // 'field_consumer_product_name',
        // 'field_flyer_description',
        // 'field_extended_description',
        // 'field_html_description',
        // 'field_feature1',
        // 'field_feature2',
        // 'field_feature3',
        // 'field_feature4',
        // 'field_master_case_upc',
        // 'field_keywords',
        'upc',
        // 'title',
        'west_product_id',
        'east_product_id',
        // 'east_product_id_full',
      ),
      'non_wild_fields' => array(
        // 'field_keywords',
      ),
    ),
    'brand' => array(
      'index_name'       => 'default_node_index',
      'query_parameters' => array(
        'type'    => 'brand',
        'page'    => $page,
        'perPage' => $limit,
      ),
      'return_fields' => array(
        'type',
        'title',
        'field_brandsid',
      ),
    ),
  );

  if (!in_array($type, array_keys($content_types))) {
    $type = 'product_details';
  }

  $results = simple_solr_search($content_types[$type]);

  $render['counts'] = array(
    '#theme'      => 'html_tag',
    '#tag'        => 'p',
    '#value'      => t('Total: @t <br />Count: @c', array(
      '@t' => $results['total'],
      '@c' => $results['count'],
    )),
  );

  $page = pager_default_initialize($results['total'], $limit);

  $render['pager_top'] = array('#theme' => 'pager');

  $render['table'] = array(
    '#theme'      => 'table',
    '#header'     => array(),
    '#rows'       => array(),
    '#empty'      => t('No data found in the index'),
    '#attributes' => array(),
  );

  foreach ($results['results'] as $row) {
    if (empty($render['table']['#header'])) {
      $render['table']['#header'] = array_keys($row);
    }
    $render['table']['#rows'][] = $row;
  }

  $render['pager_bottom'] = array('#theme' => 'pager');

  return $render;
}
