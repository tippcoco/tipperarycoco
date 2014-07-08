<?php
/**
 * @file
 * login_area.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function login_area_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'members_area';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Meetings';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'members_area_all',
      'display' => 'block',
      'args' => '',
      'title' => 'Council Meetings',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'members_area_all_calendar',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Council Calendar',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'members_area',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Area Meetings',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'members_area_all_calendar',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Area Calendar',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'bid' => 'views_delta_members_area_all-block_1',
      'hide_title' => 1,
      'title' => 'Circulars',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Area Calendar');
  t('Area Meetings');
  t('Circulars');
  t('Council Calendar');
  t('Council Meetings');
  t('Meetings');

  $export['members_area'] = $quicktabs;

  return $export;
}
