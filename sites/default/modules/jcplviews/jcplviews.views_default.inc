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

  /* Display: New Arrivals feed - Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Fiction', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Fiction';
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
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/fiction';

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

  /* Display: New Arrivals feed - Christian Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Christian Fiction', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Christian Fiction';
  $handler->display->display_options['display_description'] = 'Christian Fiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2132';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/christian-fiction';

  /* Display: New Arrivals feed - Fantasy */
  $handler = $view->new_display('page', 'New Arrivals feed - Fantasy', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Fantasy';
  $handler->display->display_options['display_description'] = 'Fantasy new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2158';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/fantasy';

  /* Display: New Arrivals feed - Historical Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Historical Fiction', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Historical Fiction';
  $handler->display->display_options['display_description'] = 'Historical Fiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2202';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/historical-fiction';

  /* Display: New Arrivals feed - Mystery */
  $handler = $view->new_display('page', 'New Arrivals feed - Mystery', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Mystery';
  $handler->display->display_options['display_description'] = 'Mystery new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2246';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/mystery';

  /* Display: New Arrivals feed - Paranormal Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Paranormal Fiction', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Paranormal Fiction';
  $handler->display->display_options['display_description'] = 'Paranormal Fiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2347';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/paranormal_fiction';

  /* Display: New Arrivals feed - Romance */
  $handler = $view->new_display('page', 'New Arrivals feed - Romance', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Romance';
  $handler->display->display_options['display_description'] = 'Romance new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2410';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/romance';

  /* Display: New Arrivals feed - Science Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Science Fiction', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Science Fiction';
  $handler->display->display_options['display_description'] = 'Science Fiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2511';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/science-fiction';

  /* Display: New Arrivals feed - Suspense */
  $handler = $view->new_display('page', 'New Arrivals feed - Suspense', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Suspense';
  $handler->display->display_options['display_description'] = 'Suspense new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2574';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/suspense';

  /* Display: New Arrivals feed - Westerns */
  $handler = $view->new_display('page', 'New Arrivals feed - Westerns', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Westerns';
  $handler->display->display_options['display_description'] = 'Westerns new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2663';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/westerns';

  /* Display: New Arrivals feed - Arts, needlework, and recreation */
  $handler = $view->new_display('page', 'New Arrivals feed - Arts, needlework, and recreation', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Arts, needlework, and recreation';
  $handler->display->display_options['display_description'] = 'Arts, needlework, and recreation new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2710';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/arts-recreation';

  /* Display: New Arrivals feed - Biography */
  $handler = $view->new_display('page', 'New Arrivals feed - Biography', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Biography';
  $handler->display->display_options['display_description'] = 'Biography new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '894';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/biography';

  /* Display: New Arrivals feed - Business and management */
  $handler = $view->new_display('page', 'New Arrivals feed - Business and management', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Business and management';
  $handler->display->display_options['display_description'] = 'Business and management new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2811';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/business-management';

  /* Display: New Arrivals feed - Chemical engineering */
  $handler = $view->new_display('page', 'New Arrivals feed - Chemical engineering', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Chemical engineering, manufacturing, and carpentry';
  $handler->display->display_options['display_description'] = 'Chemical engineering, manufacturing, and carpentry new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2827';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/chem-engineering';

  /* Display: New Arrivals feed - Computer science   */
  $handler = $view->new_display('page', 'New Arrivals feed - Computer science  ', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Computer science, information, and general works';
  $handler->display->display_options['display_description'] = 'Computer science, information, and general works new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2831';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/computer-science';

  /* Display: New Arrivals feed - Cooking   */
  $handler = $view->new_display('page', 'New Arrivals feed - Cooking  ', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Cooking, domestic arts, and child rearing';
  $handler->display->display_options['display_description'] = 'Cooking, domestic arts, and child rearing new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2845';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/cooking';

  /* Display: New Arrivals feed - Engineering and auto repair */
  $handler = $view->new_display('page', 'New Arrivals feed - Engineering and auto repair', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Engineering and auto repair';
  $handler->display->display_options['display_description'] = 'Engineering and auto repair new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2906';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/engineering';

  /* Display: New Arrivals feed - Gardening     */
  $handler = $view->new_display('page', 'New Arrivals feed - Gardening    ', 'page_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Gardening, pets, and agriculture';
  $handler->display->display_options['display_description'] = 'Gardening, pets, and agriculture new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2918';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/gardening';

  /* Display: New Arrivals feed - History */
  $handler = $view->new_display('page', 'New Arrivals feed - History', 'page_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - History';
  $handler->display->display_options['display_description'] = 'History new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2935';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/history';

  /* Display: New Arrivals feed - Literature */
  $handler = $view->new_display('page', 'New Arrivals feed - Literature', 'page_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Literature';
  $handler->display->display_options['display_description'] = 'Literature new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '2978';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/literature';

  /* Display: New Arrivals feed - Medicine */
  $handler = $view->new_display('page', 'New Arrivals feed - Medicine', 'page_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Medicine, health, and technology';
  $handler->display->display_options['display_description'] = 'Medicine, health, and technology new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3005';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/medicine';

  /* Display: New Arrivals feed - Philosophy */
  $handler = $view->new_display('page', 'New Arrivals feed - Philosophy', 'page_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Philosophy, psychology, and religion';
  $handler->display->display_options['display_description'] = 'Philosophy, psychology, and religion new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3067';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/philosophy';

  /* Display: New Arrivals feed - Social sciences and languages */
  $handler = $view->new_display('page', 'New Arrivals feed - Social sciences and languages', 'page_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Social sciences and languages';
  $handler->display->display_options['display_description'] = 'Social sciences and languages new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3112';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/social-sciences';

  /* Display: New Arrivals feed - Sciences */
  $handler = $view->new_display('page', 'New Arrivals feed - Sciences', 'page_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Sciences';
  $handler->display->display_options['display_description'] = 'Sciences new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3207';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/sciences';

  /* Display: New Arrivals feed - Audio Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Audio Books', 'page_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Audio Books';
  $handler->display->display_options['display_description'] = 'Audio Books new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3218';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/audio-books';

  /* Display: New Arrivals feed - Downloadable Audio Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Downloadable Audio Books', 'page_29');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Downloadable Audio Books';
  $handler->display->display_options['display_description'] = 'Downloadable Audio Books new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3280';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/downloadable-audio-books';

  /* Display: New Arrivals feed - DVDs */
  $handler = $view->new_display('page', 'New Arrivals feed - DVDs', 'page_30');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - DVDs';
  $handler->display->display_options['display_description'] = 'DVDs new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3381';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/dvds';

  /* Display: New Arrivals feed - eBooks */
  $handler = $view->new_display('page', 'New Arrivals feed - eBooks', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - eBooks';
  $handler->display->display_options['display_description'] = 'eBooks new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3481';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/ebooks';

  /* Display: New Arrivals feed - Feature Films */
  $handler = $view->new_display('page', 'New Arrivals feed - Feature Films', 'page_31');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Feature Films';
  $handler->display->display_options['display_description'] = 'Feature Films new arrivals feed page';
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
  $handler->display->display_options['path'] = 'books-movies-music/movies/new-arrivals/feature-films';

  /* Display: New Arrivals feed - Music CDs */
  $handler = $view->new_display('page', 'New Arrivals feed - Music CDs', 'page_32');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Music CDs';
  $handler->display->display_options['display_description'] = 'Music CDs new arrivals feed page';
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
  $handler->display->display_options['path'] = 'books-movies-music/music/new-arrivals/music-cds';

  /* Display: New Arrivals feed - Large Print */
  $handler = $view->new_display('page', 'New Arrivals feed - Large Print', 'page_33');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Large Print';
  $handler->display->display_options['display_description'] = 'Large Print new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3582';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/large-print';

  /* Display: New Arrivals feed - Playaways */
  $handler = $view->new_display('page', 'New Arrivals feed - Playaways', 'page_34');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Playaways';
  $handler->display->display_options['display_description'] = 'Playaways new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3613';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/playaways';

  /* Display: New Arrivals feed - Recientes adquisiciones en espanol */
  $handler = $view->new_display('page', 'New Arrivals feed - Recientes adquisiciones en espanol', 'page_35');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Recientes adquisiciones en espanol';
  $handler->display->display_options['display_description'] = 'Recientes adquisiciones en espanol new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3631';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/recientes';

  /* Display: New Arrivals feed - Teen Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Books', 'page_36');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Books';
  $handler->display->display_options['display_description'] = 'Teen Books new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '280';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-books';

  /* Display: New Arrivals feed - Teen Audio Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Audio Books', 'page_37');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Audio Books';
  $handler->display->display_options['display_description'] = 'Teen Audio Books new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3732';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-audio-books';

  /* Display: New Arrivals feed - Teen Comics */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Comics', 'page_38');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Comics/Graphic Novels';
  $handler->display->display_options['display_description'] = 'Teen Comics/Graphic Novels new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3738';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-comics';

  /* Display: New Arrivals feed - Teen Fantasy */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Fantasy', 'page_39');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Fantasy';
  $handler->display->display_options['display_description'] = 'Teen Fantasy new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3752';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-fantasy';

  /* Display: New Arrivals feed - Teen Mystery */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Mystery', 'page_40');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Mystery';
  $handler->display->display_options['display_description'] = 'Teen Mystery new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3770';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-mystery';

  /* Display: New Arrivals feed - Teen Nonfiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Nonfiction', 'page_41');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Nonfiction';
  $handler->display->display_options['display_description'] = 'Teen Nonfiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3778';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-nonfiction';

  /* Display: New Arrivals feed - Teen Paranormal Fiction */
  $handler = $view->new_display('page', 'New Arrivals feed - Teen Paranormal Fiction', 'page_42');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Teen Paranormal Fiction';
  $handler->display->display_options['display_description'] = 'Teen Paranormal Fiction new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3812';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/teen-paranormal';

  /* Display: New Arrivals feed - Kids Audio Books */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Audio Books', 'page_43');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids Audio Books';
  $handler->display->display_options['display_description'] = 'Kids Audio Books new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3732';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-audio-books';

  /* Display: New Arrivals feed - Kids Comics */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Comics', 'page_44');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids Comics/Graphic Novels';
  $handler->display->display_options['display_description'] = 'Kids Comics/Graphic novels new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3831';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-comics';

  /* Display: New Arrivals feed - Kids Dinosaurs */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Dinosaurs', 'page_45');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - Dinosaurs';
  $handler->display->display_options['display_description'] = 'Kids Dinosaurs new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3847';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-dinosaurs';

  /* Display: New Arrivals feed - Kids DVDs */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids DVDs', 'page_46');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - DVDs';
  $handler->display->display_options['display_description'] = 'Kids DVDs new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3855';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-dvds';

  /* Display: New Arrivals feed - Kids Princess Stories */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Princess Stories', 'page_47');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - Princess Stories';
  $handler->display->display_options['display_description'] = 'Kids Princess Stories new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3885';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-princess';

  /* Display: New Arrivals feed - Kids Scary Stories */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Scary Stories', 'page_48');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - Scary Stories';
  $handler->display->display_options['display_description'] = 'Kids Scary Stories new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3893';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-scary';

  /* Display: New Arrivals feed - Kids Sports */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Sports', 'page_49');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - Sports';
  $handler->display->display_options['display_description'] = 'Kids Sports new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3909';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-sports';

  /* Display: New Arrivals feed - Kids Things Go */
  $handler = $view->new_display('page', 'New Arrivals feed - Kids Things Go', 'page_50');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arrivals - Kids - Things That Go';
  $handler->display->display_options['display_description'] = 'Kids Things that go new arrivals feed page';
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
  $handler->display->display_options['filters']['feed_nid']['value']['value'] = '3916';
  $handler->display->display_options['path'] = 'books-movies-music/books/new-arrivals/kids-things_go';
  $export['new_arrivals'] = $view;

  return $export;
}
