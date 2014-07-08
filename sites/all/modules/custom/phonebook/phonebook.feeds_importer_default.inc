<?php
/**
 * @file
 * phonebook.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function phonebook_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'phonebook';
  $feeds_importer->config = array(
    'name' => 'Phonebook',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 1,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '1',
            'target' => 'field_first_name_phonebook',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '2',
            'target' => 'field_last_name_phonebook',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '3',
            'target' => 'field_telephone_phonebook',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '4',
            'target' => 'field_department_phonebook',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '5',
            'target' => 'field_title_phonebook',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '6',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phonebook',
      ),
    ),
    'content_type' => 'phonebook',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['phonebook'] = $feeds_importer;

  return $export;
}
