<?php
/**
 * @file
 * login_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function login_area_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function login_area_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function login_area_node_info() {
  $items = array(
    'members_area' => array(
      'name' => t('Members Area'),
      'base' => 'node_content',
      'description' => t('Content to be published to Councillor login area'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
