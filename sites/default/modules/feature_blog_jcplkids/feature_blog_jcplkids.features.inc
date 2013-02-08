<?php
/**
 * @file
 * feature_blog_jcplkids.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_blog_jcplkids_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function feature_blog_jcplkids_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_blog_jcplkids_image_default_styles() {
  $styles = array();

  // Exported image style: blog_fit_width.
  $styles['blog_fit_width'] = array(
    'name' => 'blog_fit_width',
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
          'width' => '620',
          'height' => '350',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_horizontal.
  $styles['bookjacket_horizontal'] = array(
    'name' => 'bookjacket_horizontal',
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
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_vertical.
  $styles['bookjacket_vertical'] = array(
    'name' => 'bookjacket_vertical',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '200',
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
function feature_blog_jcplkids_node_info() {
  $items = array(
    'jcpl_kids' => array(
      'name' => t('Blog Post - JCPL Kids'),
      'base' => 'node_content',
      'description' => t('Content for JCPL Kids blog which appears on Kids page.'),
      'has_title' => '1',
      'title_label' => t('JCPL Kids blog post title'),
      'help' => '',
    ),
  );
  return $items;
}
