<?php
/**
 * @file
 * feature_bmm_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_bmm_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/183
  $menu_links['main-menu:node/183'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/183',
    'router_path' => 'node/%',
    'link_title' => 'Books, Movies, & Music',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-4',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books, Movies, & Music');


  return $menu_links;
}
