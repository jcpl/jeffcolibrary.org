<?php
/**
 * @file
 * feature_kids_teen_reviews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_kids_teen_reviews_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kids_teen_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kids & Teen Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reviews by You';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'more kids reviews...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_body' => 'field_body',
    'field_review_name' => 'field_review_name',
    'field_review_your_age' => 'field_review_your_age',
  );
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_review_catalog_url']['id'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['table'] = 'field_data_field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['field'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_catalog_url']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_review_catalog_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_review_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author/Artist */
  $handler->display->display_options['fields']['field_review_author']['id'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['table'] = 'field_data_field_review_author';
  $handler->display->display_options['fields']['field_review_author']['field'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['label'] = '';
  $handler->display->display_options['fields']['field_review_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_author']['alter']['text'] = 'by [field_review_author-value]';
  $handler->display->display_options['fields']['field_review_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_author']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Bookjacket */
  $handler->display->display_options['fields']['field_review_bookjacket']['id'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['table'] = 'field_data_field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['field'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['label'] = '';
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['text'] = '<a href="[field_review_catalog_url]"><img src="[field_review_bookjacket-value]" /></a>';
  $handler->display->display_options['fields']['field_review_bookjacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_bookjacket']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Rate it */
  $handler->display->display_options['fields']['field_rate_it']['id'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['table'] = 'field_data_field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['field'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['label'] = '';
  $handler->display->display_options['fields']['field_rate_it']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate_it']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate_it']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'user',
    'text' => 'none',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Review */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your First Name */
  $handler->display->display_options['fields']['field_review_name']['id'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['table'] = 'field_data_field_review_name';
  $handler->display->display_options['fields']['field_review_name']['field'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['label'] = '';
  $handler->display->display_options['fields']['field_review_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_name']['alter']['text'] = '<em>&#8211;[field_review_name],</em>';
  $handler->display->display_options['fields']['field_review_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Age */
  $handler->display->display_options['fields']['field_review_your_age']['id'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['table'] = 'field_data_field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['field'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['label'] = '';
  $handler->display->display_options['fields']['field_review_your_age']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_your_age']['alter']['text'] = '<em> [field_review_your_age]</em>';
  $handler->display->display_options['fields']['field_review_your_age']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
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
    'kids_reviews' => 'kids_reviews',
  );

  /* Display: Page: Kids */
  $handler = $view->new_display('page', 'Page: Kids', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more kids reviews...';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_review_catalog_url']['id'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['table'] = 'field_data_field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['field'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_catalog_url']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_review_catalog_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_review_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rate it */
  $handler->display->display_options['fields']['field_rate_it']['id'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['table'] = 'field_data_field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['field'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['label'] = '';
  $handler->display->display_options['fields']['field_rate_it']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate_it']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate_it']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'user',
    'text' => 'none',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Author/Artist */
  $handler->display->display_options['fields']['field_review_author']['id'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['table'] = 'field_data_field_review_author';
  $handler->display->display_options['fields']['field_review_author']['field'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['label'] = '';
  $handler->display->display_options['fields']['field_review_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_author']['alter']['text'] = 'by [field_review_author-value]';
  $handler->display->display_options['fields']['field_review_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_author']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Bookjacket */
  $handler->display->display_options['fields']['field_review_bookjacket']['id'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['table'] = 'field_data_field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['field'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['label'] = '';
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['text'] = '<a href="[field_review_catalog_url]"><img src="[field_review_bookjacket-value]" /></a>';
  $handler->display->display_options['fields']['field_review_bookjacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_bookjacket']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Review */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your First Name */
  $handler->display->display_options['fields']['field_review_name']['id'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['table'] = 'field_data_field_review_name';
  $handler->display->display_options['fields']['field_review_name']['field'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['label'] = '';
  $handler->display->display_options['fields']['field_review_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_name']['alter']['text'] = '<em>&#8211;[field_review_name],</em>';
  $handler->display->display_options['fields']['field_review_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Age */
  $handler->display->display_options['fields']['field_review_your_age']['id'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['table'] = 'field_data_field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['field'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['label'] = '';
  $handler->display->display_options['fields']['field_review_your_age']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_your_age']['alter']['text'] = '<em> [field_review_your_age]</em>';
  $handler->display->display_options['fields']['field_review_your_age']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  $handler->display->display_options['path'] = 'kids/books-reading/reviews';

  /* Display: Block: Kids Reviews */
  $handler = $view->new_display('block', 'Block: Kids Reviews', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more Reviews by You...';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'kids_reviews' => 'kids_reviews',
  );
  $handler->display->display_options['block_description'] = 'Kids: Reviews Block';

  /* Display: Block: Kids Reviews Titles */
  $handler = $view->new_display('block', 'Block: Kids Reviews Titles', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reviews by You';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_body' => 'field_body',
    'field_review_name' => 'field_review_name',
    'field_review_your_age' => 'field_review_your_age',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_review_catalog_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_review_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'kids_reviews' => 'kids_reviews',
  );
  $handler->display->display_options['block_description'] = 'Reviews: Kids by Title';

  /* Display: Page: Teens */
  $handler = $view->new_display('page', 'Page: Teens', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_review_catalog_url']['id'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['table'] = 'field_data_field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['field'] = 'field_review_catalog_url';
  $handler->display->display_options['fields']['field_review_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_catalog_url']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_review_catalog_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_review_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rate it */
  $handler->display->display_options['fields']['field_rate_it']['id'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['table'] = 'field_data_field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['field'] = 'field_rate_it';
  $handler->display->display_options['fields']['field_rate_it']['label'] = '';
  $handler->display->display_options['fields']['field_rate_it']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate_it']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate_it']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'user',
    'text' => 'none',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Author/Artist */
  $handler->display->display_options['fields']['field_review_author']['id'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['table'] = 'field_data_field_review_author';
  $handler->display->display_options['fields']['field_review_author']['field'] = 'field_review_author';
  $handler->display->display_options['fields']['field_review_author']['label'] = '';
  $handler->display->display_options['fields']['field_review_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_author']['alter']['text'] = 'by [field_review_author-value]';
  $handler->display->display_options['fields']['field_review_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_author']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Bookjacket */
  $handler->display->display_options['fields']['field_review_bookjacket']['id'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['table'] = 'field_data_field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['field'] = 'field_review_bookjacket';
  $handler->display->display_options['fields']['field_review_bookjacket']['label'] = '';
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_bookjacket']['alter']['text'] = '<a href="[field_review_catalog_url]"><img src="[field_review_bookjacket-value]" /></a>';
  $handler->display->display_options['fields']['field_review_bookjacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_bookjacket']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Review */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your First Name */
  $handler->display->display_options['fields']['field_review_name']['id'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['table'] = 'field_data_field_review_name';
  $handler->display->display_options['fields']['field_review_name']['field'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['label'] = '';
  $handler->display->display_options['fields']['field_review_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_name']['alter']['text'] = '<em>&#8211;[field_review_name],</em>';
  $handler->display->display_options['fields']['field_review_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Your Age */
  $handler->display->display_options['fields']['field_review_your_age']['id'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['table'] = 'field_data_field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['field'] = 'field_review_your_age';
  $handler->display->display_options['fields']['field_review_your_age']['label'] = '';
  $handler->display->display_options['fields']['field_review_your_age']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_your_age']['alter']['text'] = '<em> [field_review_your_age]</em>';
  $handler->display->display_options['fields']['field_review_your_age']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_your_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
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
    'teen_reviews' => 'teen_reviews',
  );
  $handler->display->display_options['path'] = 'teen/reviews';

  /* Display: Block: Teen Reviews Titles */
  $handler = $view->new_display('block', 'Block: Teen Reviews Titles', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reviews by You';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_body' => 'field_body',
    'field_review_name' => 'field_review_name',
    'field_review_your_age' => 'field_review_your_age',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_review_catalog_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_review_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'teen_reviews' => 'teen_reviews',
  );
  $handler->display->display_options['block_description'] = 'Reviews: Teen by Title';
  $export['kids_teen_reviews'] = $view;

  return $export;
}
