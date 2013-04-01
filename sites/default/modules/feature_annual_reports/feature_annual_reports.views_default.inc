<?php
/**
 * @file
 * feature_annual_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_annual_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'annual_budgets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annual Budgets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annual Budgets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'annual_budgets' => 'annual_budgets',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['id'] = 'field_kids_booklist_file_1';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kids_booklist_file_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['block_description'] = 'Planning & Budget: Annual Budgets';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file']['id'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Annual Strategy Image */
  $handler->display->display_options['fields']['field_annual_report_image']['id'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['table'] = 'field_data_field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['field'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['label'] = '';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['path'] = '[field_kids_booklist_file]';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['alt'] = '[title] Annual Report';
  $handler->display->display_options['fields']['field_annual_report_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_annual_report_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_annual_report_image']['settings'] = array(
    'image_style' => '',
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
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $export['annual_budgets'] = $view;

  $view = new view();
  $view->name = 'annual_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annual Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annual Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'annual_reports' => 'annual_reports',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['id'] = 'field_kids_booklist_file_1';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kids_booklist_file_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['block_description'] = 'Planning & Budget: Annual Reports';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file']['id'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Annual Strategy Image */
  $handler->display->display_options['fields']['field_annual_report_image']['id'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['table'] = 'field_data_field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['field'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['label'] = '';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['path'] = '[field_kids_booklist_file]';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['alt'] = '[title] Annual Report';
  $handler->display->display_options['fields']['field_annual_report_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_annual_report_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_annual_report_image']['settings'] = array(
    'image_style' => '',
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
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $export['annual_reports'] = $view;

  $view = new view();
  $view->name = 'annual_strategy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annual Strategy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annual Strategy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'annual_strategy' => 'annual_strategy',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['id'] = 'field_kids_booklist_file_1';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file_1']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kids_booklist_file_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['block_description'] = 'Planning & Budget: Annual Strategy';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Booklist File */
  $handler->display->display_options['fields']['field_kids_booklist_file']['id'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['table'] = 'field_data_field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['field'] = 'field_kids_booklist_file';
  $handler->display->display_options['fields']['field_kids_booklist_file']['label'] = '';
  $handler->display->display_options['fields']['field_kids_booklist_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_booklist_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kids_booklist_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_kids_booklist_file']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Annual Strategy Image */
  $handler->display->display_options['fields']['field_annual_report_image']['id'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['table'] = 'field_data_field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['field'] = 'field_annual_report_image';
  $handler->display->display_options['fields']['field_annual_report_image']['label'] = '';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['path'] = '[field_kids_booklist_file]';
  $handler->display->display_options['fields']['field_annual_report_image']['alter']['alt'] = '[title] Annual Report';
  $handler->display->display_options['fields']['field_annual_report_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_annual_report_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_annual_report_image']['settings'] = array(
    'image_style' => '',
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
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $export['annual_strategy'] = $view;

  return $export;
}
