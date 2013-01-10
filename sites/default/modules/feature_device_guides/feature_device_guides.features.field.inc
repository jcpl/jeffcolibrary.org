<?php
/**
 * @file
 * feature_device_guides.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function feature_device_guides_field_default_fields() {
  $fields = array();

  // Exported field: 'node-device_guide-field_device_guide_more_help'.
  $fields['node-device_guide-field_device_guide_more_help'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_device_guide_more_help',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'device_guide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'link_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'link_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_device_guide_more_help',
      'label' => 'More help',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '-1',
      ),
    ),
  );

  // Exported field: 'node-device_guide-field_device_image'.
  $fields['node-device_guide-field_device_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_device_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'device_guide',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'image',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'device_image',
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_device_image',
      'label' => 'Device Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'device_images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-device_guide-field_formats'.
  $fields['node-device_guide-field_formats'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_formats',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'EPUB' => 'EPUB',
          'Kindle' => 'Kindle',
          'PDF' => 'PDF',
          'MP3' => 'MP3',
          'WMA' => 'WMA',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'device_guide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'list_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => 0,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'list_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_formats',
      'label' => 'Formats for this device',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        ),
        'type' => 'options_buttons',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-device_guide-field_how_to_get_ebooks'.
  $fields['node-device_guide-field_how_to_get_ebooks'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_how_to_get_ebooks',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'device_guide',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'file_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'file_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_how_to_get_ebooks',
      'label' => 'How to get Ebooks',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'vendor_device_guides',
        'file_extensions' => 'pdf',
        'max_filesize' => '2',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-device_guide-field_where_to_find_ebooks'.
  $fields['node-device_guide-field_where_to_find_ebooks'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_where_to_find_ebooks',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'device_guide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'link_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'linked_field' => array(
              'destination' => '',
              'linked' => FALSE,
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
          ),
          'type' => 'link_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_where_to_find_ebooks',
      'label' => 'Where to find Ebooks',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '-3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Device Image');
  t('Formats for this device');
  t('How to get Ebooks');
  t('More help');
  t('Where to find Ebooks');

  return $fields;
}
