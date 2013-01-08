<?php
/**
 * @file
 * feature_research_guides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_research_guides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart1|node|seasonal_guide|form';
  $field_group->group_name = 'group_getstart1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #1',
    'weight' => '3',
    'children' => array(
      0 => 'field_getstart1_titlelink',
      1 => 'field_getstart1_desc',
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
  $export['group_getstart1|node|seasonal_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart1|node|seasonal_guide|full';
  $field_group->group_name = 'group_getstart1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #1',
    'weight' => '0',
    'children' => array(
      0 => 'field_getstart1_titlelink',
      1 => 'field_getstart1_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_getstart1|node|seasonal_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart1|node|subject_guide|form';
  $field_group->group_name = 'group_getstart1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #1',
    'weight' => '1',
    'children' => array(
      0 => 'field_getstart1_desc',
      1 => 'field_getstart1_image',
      2 => 'field_getstart1_titlelink',
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
  $export['group_getstart1|node|subject_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart1|node|subject_guide|full';
  $field_group->group_name = 'group_getstart1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #1',
    'weight' => '0',
    'children' => array(
      0 => 'field_getstart1_desc',
      1 => 'field_getstart1_titlelink',
      2 => 'field_getstart1_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_getstart1|node|subject_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart2|node|seasonal_guide|form';
  $field_group->group_name = 'group_getstart2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #2',
    'weight' => '4',
    'children' => array(
      0 => 'field_getstart2_titlelink',
      1 => 'field_getstart2_desc',
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
  $export['group_getstart2|node|seasonal_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart2|node|seasonal_guide|full';
  $field_group->group_name = 'group_getstart2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #2',
    'weight' => '1',
    'children' => array(
      0 => 'field_getstart2_titlelink',
      1 => 'field_getstart2_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_getstart2|node|seasonal_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart2|node|subject_guide|form';
  $field_group->group_name = 'group_getstart2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #2',
    'weight' => '2',
    'children' => array(
      0 => 'field_getstart2_desc',
      1 => 'field_getstart2_image',
      2 => 'field_getstart2_titlelink',
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
  $export['group_getstart2|node|subject_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart2|node|subject_guide|full';
  $field_group->group_name = 'group_getstart2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #2',
    'weight' => '1',
    'children' => array(
      0 => 'field_getstart2_desc',
      1 => 'field_getstart2_titlelink',
      2 => 'field_getstart2_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #2',
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
  $export['group_getstart2|node|subject_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart3|node|seasonal_guide|form';
  $field_group->group_name = 'group_getstart3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #3',
    'weight' => '5',
    'children' => array(
      0 => 'field_getstart3_titlelink',
      1 => 'field_getstart3_desc',
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
  $export['group_getstart3|node|seasonal_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart3|node|seasonal_guide|full';
  $field_group->group_name = 'group_getstart3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #3',
    'weight' => '2',
    'children' => array(
      0 => 'field_getstart3_titlelink',
      1 => 'field_getstart3_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #3',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_getstart3|node|seasonal_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart3|node|subject_guide|form';
  $field_group->group_name = 'group_getstart3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #3',
    'weight' => '3',
    'children' => array(
      0 => 'field_getstart3_desc',
      1 => 'field_getstart3_image',
      2 => 'field_getstart3_titlelink',
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
  $export['group_getstart3|node|subject_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart3|node|subject_guide|full';
  $field_group->group_name = 'group_getstart3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #3',
    'weight' => '2',
    'children' => array(
      0 => 'field_getstart3_desc',
      1 => 'field_getstart3_titlelink',
      2 => 'field_getstart3_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #3',
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
  $export['group_getstart3|node|subject_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart4|node|seasonal_guide|form';
  $field_group->group_name = 'group_getstart4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #4',
    'weight' => '6',
    'children' => array(
      0 => 'field_getstart4_titlelink',
      1 => 'field_getstart4_desc',
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
  $export['group_getstart4|node|seasonal_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart4|node|seasonal_guide|full';
  $field_group->group_name = 'group_getstart4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seasonal_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #4',
    'weight' => '3',
    'children' => array(
      0 => 'field_getstart4_titlelink',
      1 => 'field_getstart4_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #4',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_getstart4|node|seasonal_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart4|node|subject_guide|form';
  $field_group->group_name = 'group_getstart4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #4',
    'weight' => '5',
    'children' => array(
      0 => 'field_getstart4_desc',
      1 => 'field_getstart4_image',
      2 => 'field_getstart4_titlelink',
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
  $export['group_getstart4|node|subject_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_getstart4|node|subject_guide|full';
  $field_group->group_name = 'group_getstart4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Started #4',
    'weight' => '3',
    'children' => array(
      0 => 'field_getstart4_desc',
      1 => 'field_getstart4_titlelink',
      2 => 'field_getstart4_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Getting Started #4',
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
  $export['group_getstart4|node|subject_guide|full'] = $field_group;

  return $export;
}
