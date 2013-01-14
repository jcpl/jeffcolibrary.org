<?php

/**
 * Prep fields for node.tpl.php
 */
$node = $vars['node'];

$vars['content_url'] = $vars['node_url'];

switch ($node->type) {
  case 'jcpl_sable_feed_item':
    $vars['content_url'] = url($node->field_sable_catalog_url[LANGUAGE_NONE][0]['url']);
    break;
}

if ($vars['content_url'] != $vars['node_url'] && node_access('update', $node)) {
  $vars['edit_url'] = url('node/' . $node->nid . '/edit');
}
