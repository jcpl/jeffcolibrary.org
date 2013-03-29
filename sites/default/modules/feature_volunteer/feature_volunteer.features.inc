<?php
/**
 * @file
 * feature_volunteer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_volunteer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_volunteer_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_volunteer_image_default_styles() {
  $styles = array();

  // Exported image style: 85x120_photo.
  $styles['85x120_photo'] = array(
    'name' => '85x120_photo',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '85',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_volunteer_node_info() {
  $items = array(
    'volunteer_of_month' => array(
      'name' => t('Volunteer of the Month'),
      'base' => 'node_content',
      'description' => t('Volunteer of the month.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
