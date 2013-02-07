<?php
/**
 * @file
 * feature_manual_carousels.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_manual_carousels_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousel_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousel: Books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carousel: Books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Carousel music image */
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['id'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['table'] = 'field_data_field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['field'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['settings'] = array(
    'image_style' => 'bookjacket_carousel',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Carousel music link */
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['id'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['table'] = 'field_data_field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['field'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['settings'] = array(
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
    'carousel_bookjacket' => 'carousel_bookjacket',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carousel: Manual cover art';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'carousel_bookjacket' => 'carousel_bookjacket',
  );
  $handler->display->display_options['path'] = 'carousel-books';

  /* Display: Books Block */
  $handler = $view->new_display('block', 'Books Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'BMM: Carousel: Books';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'more link to books feed page';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="custom_more_link"><a href="books-movies-music/books">more</a></div>
';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Homepage Block */
  $handler = $view->new_display('block', 'Homepage Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '9';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'more link to books feed page';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="books-movies-music/books">more</a>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Front: Manual Carousel - Books';

  /* Display: Music Block */
  $handler = $view->new_display('block', 'Music Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'BMM: Carousel: Music';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'more link to music feed page';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="books-movies-music/music">more</a>';
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
    'carousel_music_cover' => 'carousel_music_cover',
  );

  /* Display: Movies Block */
  $handler = $view->new_display('block', 'Movies Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'BMM: Carousel: Movies';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'more link to movies feed page';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="books-movies-music/movies">more</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Carousel music image */
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['id'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['table'] = 'field_data_field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['field'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['settings'] = array(
    'image_style' => 'bookjacket_carousel',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Carousel music link */
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['id'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['table'] = 'field_data_field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['field'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['settings'] = array(
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
    'carousel_movie_cover' => 'carousel_movie_cover',
  );

  /* Display: Kids Read Block */
  $handler = $view->new_display('block', 'Kids Read Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Read';
  $handler->display->display_options['display_description'] = 'carousel of kids books from nextreads list in Read section of sidebar on Kids homepage';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'more link to movies feed page';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="kids/books-reading">more</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Carousel music image */
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['id'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['table'] = 'field_data_field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['field'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['settings'] = array(
    'image_style' => 'bookjacket_carousel',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Carousel music link */
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['id'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['table'] = 'field_data_field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['field'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['settings'] = array(
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
    'carousel_bookjacket_kids' => 'carousel_bookjacket_kids',
  );
  $handler->display->display_options['block_description'] = 'Kids: Carousel: Read';

  /* Display: Teen Books Block */
  $handler = $view->new_display('block', 'Teen Books Block', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'carousel of teen books from nextreads list in sidebar on Teen homepage';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Carousel music image */
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['id'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['table'] = 'field_data_field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['field'] = 'field_carousel_bookjacket_image';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_bookjacket_image']['settings'] = array(
    'image_style' => 'bookjacket_carousel',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Carousel music link */
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['id'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['table'] = 'field_data_field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['field'] = 'field_carousel_bookjacket_link';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carousel_bookjacket_link']['settings'] = array(
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
    'carousel_bookjacket_teen' => 'carousel_bookjacket_teen',
  );
  $handler->display->display_options['block_description'] = 'Teen: Carousel: Books';
  $export['carousel_books'] = $view;

  return $export;
}
