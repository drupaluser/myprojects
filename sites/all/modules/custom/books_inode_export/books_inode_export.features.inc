<?php
/**
 * @file
 * books_inode_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function books_inode_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
