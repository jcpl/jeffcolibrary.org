<?php
/**
 * @file
 * feature_research_guides.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_research_guides_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_research_guides_image_default_styles() {
  $styles = array();

  // Exported image style: 140x90.
  $styles['140x90'] = array(
    'name' => '140x90',
    'effects' => array(
      4 => array(
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
          'height' => '90',
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
function feature_research_guides_node_info() {
  $items = array(
    'seasonal_guide' => array(
      'name' => t('Seasonal Guide'),
      'base' => 'node_content',
      'description' => t('Topical guides for Research that change several times per year. '),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
    'subject_guide' => array(
      'name' => t('Subject Guide'),
      'base' => 'node_content',
      'description' => t('Topical guides for Research that change annually.'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
  );
  return $items;
}
