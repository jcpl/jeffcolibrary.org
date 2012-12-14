<?php
/**
 * @file
 * feature_kids_booklists.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function feature_kids_booklists_field_default_fields() {
  $fields = array();

  // Exported field: 'node-booklist_kids-field_kids_booklist_file'.
  $fields['node-booklist_kids-field_kids_booklist_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kids_booklist_file',
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
        'display_default' => 0,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'booklist_kids',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
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
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
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
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_kids_booklist_file',
      'label' => 'Booklist File',
      'required' => 1,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'kids_teen/booklists',
        'file_extensions' => 'pdf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Booklist File');

  return $fields;
}
