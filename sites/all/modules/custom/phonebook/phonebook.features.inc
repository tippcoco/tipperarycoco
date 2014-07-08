<?php
/**
 * @file
 * phonebook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phonebook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function phonebook_node_info() {
  $items = array(
    'phonebook' => array(
      'name' => t('Phonebook'),
      'base' => 'node_content',
      'description' => t('Internal Staff Phonebook to be viewed by Councillors only'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
