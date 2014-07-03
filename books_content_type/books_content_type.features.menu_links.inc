<?php
/**
 * @file
 * books_content_type.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function books_content_type_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_books:books
  $menu_links['main-menu_books:books'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'books',
    'router_path' => 'books',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'main-menu_books:books',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');


  return $menu_links;
}
