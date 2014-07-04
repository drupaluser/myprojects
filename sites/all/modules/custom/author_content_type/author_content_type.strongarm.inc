<?php
/**
 * @file
 * author_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function author_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'title_field_node:author';
  $strongarm->value = array(
    'label' => 'Title',
    'description' => '',
    'size' => '60',
  );
  $export['title_field_node:author'] = $strongarm;

  return $export;
}
