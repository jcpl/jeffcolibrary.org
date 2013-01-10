<?php
/**
 * @file
 * feature_device_guides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_device_guides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_device_details|node|device_guide|full';
  $field_group->group_name = 'group_device_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'device_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'details',
    'weight' => '7',
    'children' => array(
      0 => 'field_device_guide_more_help',
      1 => 'field_formats',
      2 => 'field_how_to_get_ebooks',
      3 => 'field_where_to_find_ebooks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'details',
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
  $export['group_device_details|node|device_guide|full'] = $field_group;

  return $export;
}
