<?php
/**
 * @file
 * feature_kids_hw_help_az.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_kids_hw_help_az_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homework_help_a_z';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homework Help A - Z';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'kids_homework_help' => 'kids_homework_help',
  );
  /* Filter criterion: Content: Kids or Teens? (field_kids_or_teens) */
  $handler->display->display_options['filters']['field_kids_or_teens_value']['id'] = 'field_kids_or_teens_value';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['table'] = 'field_data_field_kids_or_teens';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['field'] = 'field_kids_or_teens_value';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['value'] = array(
    'kids' => 'kids',
  );

  /* Display: Block: Kids HW Help */
  $handler = $view->new_display('block', 'Block: Kids HW Help', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Views: Kids HW Help';

  /* Display: Block: Teens HW Help */
  $handler = $view->new_display('block', 'Block: Teens HW Help', 'block_1');
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
    'kids_homework_help' => 'kids_homework_help',
  );
  /* Filter criterion: Content: Kids or Teens? (field_kids_or_teens) */
  $handler->display->display_options['filters']['field_kids_or_teens_value']['id'] = 'field_kids_or_teens_value';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['table'] = 'field_data_field_kids_or_teens';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['field'] = 'field_kids_or_teens_value';
  $handler->display->display_options['filters']['field_kids_or_teens_value']['value'] = array(
    'teens' => 'teens',
  );
  $handler->display->display_options['block_description'] = 'Views: Teens HW Help';
  $export['homework_help_a_z'] = $view;

  return $export;
}
