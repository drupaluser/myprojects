<?php
/**
 * @file
 * books_inode_export.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function books_inode_export_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_books:node/add/books
  $menu_links['navigation_books:node/add/books'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/books',
    'router_path' => 'node/add/books',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'navigation_books:node/add/books',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');


  return $menu_links;
}
