<?php
/**
 * @file
 * feature_bookjackets_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_bookjackets_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_arrivals_homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'aggregator_item';
  $view->human_name = 'New Arrivals Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'p';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['exclude'] = TRUE;
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Aggregator: Item ID */
  $handler->display->display_options['sorts']['iid']['id'] = 'iid';
  $handler->display->display_options['sorts']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['iid']['field'] = 'iid';
  $handler->display->display_options['path'] = 'new-arrivals-homepage';

  /* Display: Front: New Arrivals */
  $handler = $view->new_display('block', 'Front: New Arrivals', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '10';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'slow';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['block_description'] = 'Front: New Arrivals';

  /* Display: BMM: New Arrivals - Books */
  $handler = $view->new_display('block', 'BMM: New Arrivals - Books', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books';
  $handler->display->display_options['display_description'] = 'Books category on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'slow';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Aggregator: Item ID */
  $handler->display->display_options['sorts']['iid']['id'] = 'iid';
  $handler->display->display_options['sorts']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['iid']['field'] = 'iid';
  $handler->display->display_options['block_description'] = 'BMM: New Arrivals - Books';

  /* Display: BMM: New Arrivals - Movies */
  $handler = $view->new_display('block', 'BMM: New Arrivals - Movies', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Movies';
  $handler->display->display_options['display_description'] = 'Books category on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'slow';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['block_description'] = 'BMM: New Arrivals - Movies';

  /* Display: BMM: New Arrivals - Music */
  $handler = $view->new_display('block', 'BMM: New Arrivals - Music', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Music';
  $handler->display->display_options['display_description'] = 'Books category on Books, Movies & Music page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'slow';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Aggregator: Item ID */
  $handler->display->display_options['fields']['iid']['id'] = 'iid';
  $handler->display->display_options['fields']['iid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['iid']['field'] = 'iid';
  $handler->display->display_options['fields']['iid']['exclude'] = TRUE;
  /* Field: Aggregator: Body */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Field: Aggregator: GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  /* Field: Aggregator: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Aggregator feed: Description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'aggregator_feed';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['block_description'] = 'BMM: New Arrivals - Music';
  $export['new_arrivals_homepage'] = $view;

  return $export;
}
