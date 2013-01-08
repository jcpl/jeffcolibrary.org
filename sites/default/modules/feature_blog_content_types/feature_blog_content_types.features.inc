<?php
/**
 * @file
 * feature_blog_content_types.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_blog_content_types_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_blog_content_types_node_info() {
  $items = array(
    'advocacy' => array(
      'name' => t('Blog Post - Advocacy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Advocacy blog post title'),
      'help' => '',
    ),
    'booksandbeyond' => array(
      'name' => t('Blog Post - Books and beyond'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Books and beyond blog post title'),
      'help' => '',
    ),
    'jcpl_kids' => array(
      'name' => t('Blog Post - JCPL Kids'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('JCPL Kids blog post title'),
      'help' => '',
    ),
    'jcpl_teens' => array(
      'name' => t('Blog Post - JCPL Teens'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('JCPL Teens blog post title'),
      'help' => '',
    ),
    'library_news' => array(
      'name' => t('Blog Post - Library News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Library News blog post title'),
      'help' => '',
    ),
  );
  return $items;
}
