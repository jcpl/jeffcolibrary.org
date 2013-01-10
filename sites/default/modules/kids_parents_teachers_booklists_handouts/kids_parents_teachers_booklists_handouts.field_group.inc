<?php
/**
 * @file
 * kids_parents_teachers_booklists_handouts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kids_parents_teachers_booklists_handouts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_booklist1|node|parents_booklist_category|form';
  $field_group->group_name = 'group_booklist1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parents_booklist_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booklist/Handout #1',
    'weight' => '2',
    'children' => array(
      0 => 'field_list_name1',
      1 => 'field_file1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Booklist/Handout #1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_booklist1|node|parents_booklist_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_booklist2|node|parents_booklist_category|form';
  $field_group->group_name = 'group_booklist2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parents_booklist_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booklist/Handout #2',
    'weight' => '3',
    'children' => array(
      0 => 'field_list_name2',
      1 => 'field_file2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Booklist/Handout #2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_booklist2|node|parents_booklist_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_booklist3|node|parents_booklist_category|form';
  $field_group->group_name = 'group_booklist3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parents_booklist_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booklist/Handout #3',
    'weight' => '4',
    'children' => array(
      0 => 'field_list_name3',
      1 => 'field_file3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Booklist/Handout #3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_booklist3|node|parents_booklist_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_booklist4|node|parents_booklist_category|form';
  $field_group->group_name = 'group_booklist4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parents_booklist_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booklist/Handout #4',
    'weight' => '5',
    'children' => array(
      0 => 'field_list_name4',
      1 => 'field_file4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Booklist/Handout #4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_booklist4|node|parents_booklist_category|form'] = $field_group;

  return $export;
}
