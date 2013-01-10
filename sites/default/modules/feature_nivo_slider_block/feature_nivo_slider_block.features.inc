<?php
/**
 * @file
 * feature_nivo_slider_block.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function feature_nivo_slider_block_image_default_styles() {
  $styles = array();

  // Exported image style: nivo_slider_slide.
  $styles['nivo_slider_slide'] = array(
    'name' => 'nivo_slider_slide',
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
          'width' => '620',
          'height' => '250',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
