<?php
/**
 * @file
 * feature_device_guides.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_device_guides_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_device_guides_image_default_styles() {
  $styles = array();

  // Exported image style: device_image.
  $styles['device_image'] = array(
    'name' => 'device_image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '170',
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
function feature_device_guides_node_info() {
  $items = array(
    'device_guide' => array(
      'name' => t('Device Guide'),
      'base' => 'node_content',
      'description' => t('eReader device guides on the Downloads page.'),
      'has_title' => '1',
      'title_label' => t('Device Name'),
      'help' => '',
    ),
  );
  return $items;
}
