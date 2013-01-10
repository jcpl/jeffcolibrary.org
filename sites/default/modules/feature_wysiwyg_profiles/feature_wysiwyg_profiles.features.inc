<?php
/**
 * @file
 * feature_wysiwyg_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_wysiwyg_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_wysiwyg_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: blog_lg.
  $styles['blog_lg'] = array(
    'name' => 'blog_lg',
    'effects' => array(),
  );

  // Exported image style: blog_med.
  $styles['blog_med'] = array(
    'name' => 'blog_med',
    'effects' => array(),
  );

  // Exported image style: blog_xlg.
  $styles['blog_xlg'] = array(
    'name' => 'blog_xlg',
    'effects' => array(
      12 => array(
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

  // Exported image style: bookjacket_tall_lg.
  $styles['bookjacket_tall_lg'] = array(
    'name' => 'bookjacket_tall_lg',
    'effects' => array(
      8 => array(
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

  // Exported image style: bookjacket_tall_med.
  $styles['bookjacket_tall_med'] = array(
    'name' => 'bookjacket_tall_med',
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
          'width' => '136',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_tall_sm.
  $styles['bookjacket_tall_sm'] = array(
    'name' => 'bookjacket_tall_sm',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '126',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_tall_xsm.
  $styles['bookjacket_tall_xsm'] = array(
    'name' => 'bookjacket_tall_xsm',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '61',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_wide_lg.
  $styles['bookjacket_wide_lg'] = array(
    'name' => 'bookjacket_wide_lg',
    'effects' => array(
      11 => array(
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

  // Exported image style: bookjacket_wide_med.
  $styles['bookjacket_wide_med'] = array(
    'name' => 'bookjacket_wide_med',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '160',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookjacket_wide_sm.
  $styles['bookjacket_wide_sm'] = array(
    'name' => 'bookjacket_wide_sm',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
