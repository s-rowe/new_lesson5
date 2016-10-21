<?php
/**
 * @file
 * imdb_clone.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imdb_clone_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imdb_clone_node_info() {
  $items = array(
    'movie' => array(
      'name' => t('Movie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Use this to add a new person that can be used with the Movie content type.'),
      'has_title' => '1',
      'title_label' => t('Last name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
