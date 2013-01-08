<?php
/**
 * @file
 * feature_kids_fun_games.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_kids_fun_games_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource10|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #10',
    'weight' => '10',
    'children' => array(
      0 => 'field_image10',
      1 => 'field_resource10',
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
  $export['group_resource10|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource10|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #10',
    'weight' => '10',
    'children' => array(
      0 => 'field_image10',
      1 => 'field_resource10',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #10',
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
  $export['group_resource10|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource11|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #11',
    'weight' => '11',
    'children' => array(
      0 => 'field_image11',
      1 => 'field_resource11',
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
  $export['group_resource11|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource11|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #11',
    'weight' => '11',
    'children' => array(
      0 => 'field_image11',
      1 => 'field_resource11',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #11',
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
  $export['group_resource11|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource12|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #12',
    'weight' => '12',
    'children' => array(
      0 => 'field_image12',
      1 => 'field_resource12',
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
  $export['group_resource12|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource12|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #12',
    'weight' => '12',
    'children' => array(
      0 => 'field_image12',
      1 => 'field_resource12',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #12',
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
  $export['group_resource12|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource1|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #1',
    'weight' => '1',
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
  $export['group_resource1|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource1|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #1',
    'weight' => '1',
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
  $export['group_resource1|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource2|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #2',
    'weight' => '2',
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
  $export['group_resource2|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource2|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #2',
    'weight' => '2',
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
  $export['group_resource2|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource3|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #3',
    'weight' => '3',
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
  $export['group_resource3|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource3|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #3',
    'weight' => '3',
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
  $export['group_resource3|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource4|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #4',
    'weight' => '4',
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
  $export['group_resource4|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource4|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #4',
    'weight' => '4',
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
  $export['group_resource4|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource5|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #5',
    'weight' => '5',
    'children' => array(
      0 => 'field_image5',
      1 => 'field_resource5',
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
  $export['group_resource5|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource5|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #5',
    'weight' => '5',
    'children' => array(
      0 => 'field_image5',
      1 => 'field_resource5',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #5',
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
  $export['group_resource5|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource6|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #6',
    'weight' => '6',
    'children' => array(
      0 => 'field_image6',
      1 => 'field_resource6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resource #6',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_resource6|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource6|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #6',
    'weight' => '6',
    'children' => array(
      0 => 'field_image6',
      1 => 'field_resource6',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #6',
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
  $export['group_resource6|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource7|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource7';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #7',
    'weight' => '7',
    'children' => array(
      0 => 'field_image7',
      1 => 'field_resource7',
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
  $export['group_resource7|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource7|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource7';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #7',
    'weight' => '7',
    'children' => array(
      0 => 'field_image7',
      1 => 'field_resource7',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #7',
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
  $export['group_resource7|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource8|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #8',
    'weight' => '8',
    'children' => array(
      0 => 'field_image8',
      1 => 'field_resource8',
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
  $export['group_resource8|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource8|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #8',
    'weight' => '8',
    'children' => array(
      0 => 'field_image8',
      1 => 'field_resource8',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #8',
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
  $export['group_resource8|node|fun_and_games_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource9|node|fun_and_games_category|form';
  $field_group->group_name = 'group_resource9';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #9',
    'weight' => '9',
    'children' => array(
      0 => 'field_image9',
      1 => 'field_resource9',
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
  $export['group_resource9|node|fun_and_games_category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource9|node|fun_and_games_category|full';
  $field_group->group_name = 'group_resource9';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fun_and_games_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource #9',
    'weight' => '9',
    'children' => array(
      0 => 'field_image9',
      1 => 'field_resource9',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource #9',
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
  $export['group_resource9|node|fun_and_games_category|full'] = $field_group;

  return $export;
}
