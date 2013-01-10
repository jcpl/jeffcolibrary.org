<?php
/**
 * @file
 * feature_kids_hw_help_az.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_kids_hw_help_az_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource1|node|kids_homework_help|form';
  $field_group->group_name = 'group_resource1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #1',
    'weight' => '2',
    'children' => array(
      0 => 'field_hw_help_image1',
      1 => 'field_hw_help_resource1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource1|node|kids_homework_help|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource1|node|kids_homework_help|full';
  $field_group->group_name = 'group_resource1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #1',
    'weight' => '0',
    'children' => array(
      0 => 'field_hw_help_image1',
      1 => 'field_hw_help_resource1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resource1|node|kids_homework_help|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource2|node|kids_homework_help|form';
  $field_group->group_name = 'group_resource2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #2',
    'weight' => '3',
    'children' => array(
      0 => 'field_hw_help_image2',
      1 => 'field_hw_help_resource2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource2|node|kids_homework_help|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource2|node|kids_homework_help|full';
  $field_group->group_name = 'group_resource2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #2',
    'weight' => '1',
    'children' => array(
      0 => 'field_hw_help_image2',
      1 => 'field_hw_help_resource2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resource2|node|kids_homework_help|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource3|node|kids_homework_help|form';
  $field_group->group_name = 'group_resource3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #3',
    'weight' => '4',
    'children' => array(
      0 => 'field_hw_help_image3',
      1 => 'field_hw_help_resource3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource3|node|kids_homework_help|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource3|node|kids_homework_help|full';
  $field_group->group_name = 'group_resource3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #3',
    'weight' => '2',
    'children' => array(
      0 => 'field_hw_help_image3',
      1 => 'field_hw_help_resource3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #3',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resource3|node|kids_homework_help|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource4|node|kids_homework_help|form';
  $field_group->group_name = 'group_resource4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #4',
    'weight' => '5',
    'children' => array(
      0 => 'field_hw_help_image4',
      1 => 'field_hw_help_resource4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource4|node|kids_homework_help|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource4|node|kids_homework_help|full';
  $field_group->group_name = 'group_resource4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kids_homework_help';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #4',
    'weight' => '3',
    'children' => array(
      0 => 'field_hw_help_image4',
      1 => 'field_hw_help_resource4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #4',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resource4|node|kids_homework_help|full'] = $field_group;

  return $export;
}
