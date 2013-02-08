<?php
/**
 * @file
 * jcplviews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jcplviews_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_arrivals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'new_arrivals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'new-arrivals';

  /* Display: All Books Carousel */
  $handler = $view->new_display('block', 'All Books Carousel', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '309';
  $handler->display->display_options['block_description'] = 'Front: New Arrivals - Books';

  /* Display: BMM: Books Carousel */
  $handler = $view->new_display('block', 'BMM: Books Carousel', 'block_3');
  $handler->display->display_options['display_description'] = 'Books new arrivals on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '309';
  $handler->display->display_options['block_description'] = 'BMM: Books Carousel';

  /* Display: Kids: Books Carousel */
  $handler = $view->new_display('block', 'Kids: Books Carousel', 'block_4');
  $handler->display->display_options['display_description'] = 'Books new arrivals on Kids page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '301';
  $handler->display->display_options['block_description'] = 'Kids: Books Carousel';

  /* Display: Teen: Books Carousel */
  $handler = $view->new_display('block', 'Teen: Books Carousel', 'block_5');
  $handler->display->display_options['display_description'] = 'Books new arrivals onTeen page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '280';
  $handler->display->display_options['block_description'] = 'Teen: Books Carousel';

  /* Display: Books Grid */
  $handler = $view->new_display('page', 'Books Grid', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books';
  $handler->display->display_options['display_description'] = 'Grid view off all Books cover art';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '309';
  $handler->display->display_options['path'] = 'books-grid';

  /* Display: BMM: Movies Carousel */
  $handler = $view->new_display('block', 'BMM: Movies Carousel', 'block_7');
  $handler->display->display_options['display_description'] = 'Movies new arrivals on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '182';
  $handler->display->display_options['block_description'] = 'BMM: Movies Carousel';

  /* Display: BMM: Music Carousel */
  $handler = $view->new_display('block', 'BMM: Music Carousel', 'block_8');
  $handler->display->display_options['display_description'] = 'Music new arrivals on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '259';
  $handler->display->display_options['block_description'] = 'BMM: Music Carousel';

  /* Display: New Arrivals feed - Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Books', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals';
  $handler->display->display_options['display_description'] = 'new arrivals for Books page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '309';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals';

  /* Display: Block New Arrivals feed - Books page */
  $handler = $view->new_display('block', 'Block New Arrivals feed - Books page', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '309';
  $handler->display->display_options['block_description'] = 'Books page: New arrivals feed';

  /* Display: Block New Arrivals feed - Movies page */
  $handler = $view->new_display('block', 'Block New Arrivals feed - Movies page', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '182';
  $handler->display->display_options['block_description'] = 'Movies page: New arrivals feed';

  /* Display: Block New Arrivals feed - Music page */
  $handler = $view->new_display('block', 'Block New Arrivals feed - Music page', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog image URL */
  $handler->display->display_options['fields']['field_catalog_image_url']['id'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['table'] = 'field_data_field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['field'] = 'field_catalog_image_url';
  $handler->display->display_options['fields']['field_catalog_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_image_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_catalog_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_image_url']['type'] = 'jcplfeeds_img';
  $handler->display->display_options['fields']['field_catalog_image_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_sable_catalog_url']['id'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['table'] = 'field_data_field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['field'] = 'field_sable_catalog_url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sable_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sable_catalog_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_sable_catalog_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_sable_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jcpl_sable_feed_item' => 'jcpl_sable_feed_item',
  );
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '259';
  $handler->display->display_options['block_description'] = 'Music page: New arrivals feed';
  $export['new_arrivals'] = $view;

  return $export;
}
