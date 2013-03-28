<?php
/**
 * @file
 * feature_leadership.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_leadership_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'library_managers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library Managers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Managers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_board_member_photo']['id'] = 'field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['table'] = 'field_data_field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['field'] = 'field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['label'] = '';
  $handler->display->display_options['fields']['field_board_member_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_member_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_member_photo']['settings'] = array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: JCPL Title */
  $handler->display->display_options['fields']['field_jcpl_title']['id'] = 'field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['table'] = 'field_data_field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['field'] = 'field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['label'] = '';
  $handler->display->display_options['fields']['field_jcpl_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jcpl_title']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email_link']['id'] = 'field_email_link';
  $handler->display->display_options['fields']['field_email_link']['table'] = 'field_data_field_email_link';
  $handler->display->display_options['fields']['field_email_link']['field'] = 'field_email_link';
  $handler->display->display_options['fields']['field_email_link']['label'] = '';
  $handler->display->display_options['fields']['field_email_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_link']['settings'] = array(
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
    'library_managers' => 'library_managers',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Leadership & Mission: Library Managers';
  $export['library_managers'] = $view;

  $view = new view();
  $view->name = 'smt_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SMT Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Senior Management Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_board_member_photo']['id'] = 'field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['table'] = 'field_data_field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['field'] = 'field_board_member_photo';
  $handler->display->display_options['fields']['field_board_member_photo']['label'] = '';
  $handler->display->display_options['fields']['field_board_member_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_member_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_member_photo']['settings'] = array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: JCPL Title */
  $handler->display->display_options['fields']['field_jcpl_title']['id'] = 'field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['table'] = 'field_data_field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['field'] = 'field_jcpl_title';
  $handler->display->display_options['fields']['field_jcpl_title']['label'] = '';
  $handler->display->display_options['fields']['field_jcpl_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jcpl_title']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email_link']['id'] = 'field_email_link';
  $handler->display->display_options['fields']['field_email_link']['table'] = 'field_data_field_email_link';
  $handler->display->display_options['fields']['field_email_link']['field'] = 'field_email_link';
  $handler->display->display_options['fields']['field_email_link']['label'] = '';
  $handler->display->display_options['fields']['field_email_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_link']['settings'] = array(
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
    'smt_member' => 'smt_member',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Leadership & Mission: SMT Members';
  $export['smt_members'] = $view;

  return $export;
}
