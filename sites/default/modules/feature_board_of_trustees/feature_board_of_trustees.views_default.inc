<?php
/**
 * @file
 * feature_board_of_trustees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_board_of_trustees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'board_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Board Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Study Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_board_meeting_notice']['id'] = 'field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['table'] = 'field_data_field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['field'] = 'field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_meeting_notice']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Information Packet */
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['id'] = 'field_board_meeting_info_packet';
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['table'] = 'field_data_field_board_meeting_info_packet';
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['field'] = 'field_board_meeting_info_packet';
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_meeting_info_packet']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Minutes */
  $handler->display->display_options['fields']['field_board_meeting_minutes']['id'] = 'field_board_meeting_minutes';
  $handler->display->display_options['fields']['field_board_meeting_minutes']['table'] = 'field_data_field_board_meeting_minutes';
  $handler->display->display_options['fields']['field_board_meeting_minutes']['field'] = 'field_board_meeting_minutes';
  $handler->display->display_options['fields']['field_board_meeting_minutes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_meeting_minutes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_meeting_minutes']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Sort criterion: Content: Date &amp; Time (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
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
    'board_meeting' => 'board_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Meeting Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_value']['id'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_value']['field'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['value'] = array(
    'Regular meeting' => 'Regular meeting',
  );
  $handler->display->display_options['filters']['field_meeting_type_value']['reduce_duplicates'] = TRUE;

  /* Display: Block: Board Meetings */
  $handler = $view->new_display('block', 'Block: Board Meetings', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Board Meetings';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Board of Trustees: Board Meetings';

  /* Display: Block: Study Sessions */
  $handler = $view->new_display('block', 'Block: Study Sessions', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_board_meeting_notice']['id'] = 'field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['table'] = 'field_data_field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['field'] = 'field_board_meeting_notice';
  $handler->display->display_options['fields']['field_board_meeting_notice']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_board_meeting_notice']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
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
    'board_meeting' => 'board_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Meeting Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_value']['id'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_value']['field'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['value'] = array(
    'Study session' => 'Study session',
  );
  $handler->display->display_options['filters']['field_meeting_type_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['block_description'] = 'Board of Trustees: Study Sessions';
  $export['board_meetings'] = $view;

  $view = new view();
  $view->name = 'board_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Board Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Board Members';
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
    'image_link' => 'content',
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
  /* Field: Content: Board Office */
  $handler->display->display_options['fields']['field_board_office']['id'] = 'field_board_office';
  $handler->display->display_options['fields']['field_board_office']['table'] = 'field_data_field_board_office';
  $handler->display->display_options['fields']['field_board_office']['field'] = 'field_board_office';
  $handler->display->display_options['fields']['field_board_office']['label'] = '';
  $handler->display->display_options['fields']['field_board_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_board_office']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'title' => '',
      'target' => '',
      'rel' => '',
      'text' => '',
    ),
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'board_member' => 'board_member',
  );

  /* Display: Block: Board Member teasers */
  $handler = $view->new_display('block', 'Block: Board Member teasers', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Board of Trustees: Board Members';
  $export['board_members'] = $view;

  return $export;
}
