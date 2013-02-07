<?php
/**
 * @file
 * feature_manual_carousels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_manual_carousels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_manual_carousels_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_manual_carousels_image_default_styles() {
  $styles = array();

  // Exported image style: bookjacket_carousel.
  $styles['bookjacket_carousel'] = array(
    'name' => 'bookjacket_carousel',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '100',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: music_cover_carousel.
  $styles['music_cover_carousel'] = array(
    'name' => 'music_cover_carousel',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_manual_carousels_node_info() {
  $items = array(
    'carousel_bookjacket' => array(
      'name' => t('A Carousel bookjacket'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_bookjacket_kids' => array(
      'name' => t('A Carousel bookjacket - kids'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_bookjacket_teen' => array(
      'name' => t('A Carousel bookjacket - teen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_movie_cover' => array(
      'name' => t('A Carousel movie cover'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_music_cover' => array(
      'name' => t('A Carousel music cover'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_type' => array(
      'name' => t('Media Type page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
