<?php
/**
 * @file
 * dbpedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbpedia_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbpedia_node_info() {
  $items = array(
    'dbpedia_example' => array(
      'name' => t('dbpedia_example'),
      'base' => 'node_content',
      'description' => t('Example content type to demonstrate dbPedia Species Lookup'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
