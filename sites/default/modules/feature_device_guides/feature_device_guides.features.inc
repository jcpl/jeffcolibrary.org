<?php
/**
 * @file
 * feature_device_guides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_device_guides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
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
