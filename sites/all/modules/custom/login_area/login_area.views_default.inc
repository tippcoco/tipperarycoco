<?php
/**
 * @file
 * login_area.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function login_area_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'members_area';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Members Area';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members Area';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Relationship: Field: Area (field_area) */
  $handler->display->display_options['relationships']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['relationships']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['relationships']['field_area_tid']['field'] = 'field_area_tid';
  /* Relationship: Taxonomy term: Content using Area */
  $handler->display->display_options['relationships']['reverse_field_area_node']['id'] = 'reverse_field_area_node';
  $handler->display->display_options['relationships']['reverse_field_area_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_node']['field'] = 'reverse_field_area_node';
  $handler->display->display_options['relationships']['reverse_field_area_node']['relationship'] = 'field_area_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date_members_area']['id'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['field'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['fields']['field_agenda']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agenda']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_meeting_date_members_area_value']['use_fromto'] = 'no';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'members_area' => 'members_area',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Agenda (field_agenda:description) */
  $handler->display->display_options['filters']['field_agenda_description']['id'] = 'field_agenda_description';
  $handler->display->display_options['filters']['field_agenda_description']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['filters']['field_agenda_description']['field'] = 'field_agenda_description';
  $handler->display->display_options['filters']['field_agenda_description']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['field_agenda_description']['operator'] = 'not empty';

  /* Display: Municipal / Borough District Meetings */
  $handler = $view->new_display('block', 'Municipal / Borough District Meetings', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'members_area' => 'members_area',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['operator'] = 'not empty';

  /* Display: Date browser */
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');

  /* Display: Circulars */
  $handler = $view->new_display('block', 'Circulars', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Circulars */
  $handler->display->display_options['fields']['field_circulars']['id'] = 'field_circulars';
  $handler->display->display_options['fields']['field_circulars']['table'] = 'field_data_field_circulars';
  $handler->display->display_options['fields']['field_circulars']['field'] = 'field_circulars';
  $handler->display->display_options['fields']['field_circulars']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['fields']['field_circulars']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_circulars']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'members_area' => 'members_area',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Circulars (field_circulars:fid) */
  $handler->display->display_options['filters']['field_circulars_fid']['id'] = 'field_circulars_fid';
  $handler->display->display_options['filters']['field_circulars_fid']['table'] = 'field_data_field_circulars';
  $handler->display->display_options['filters']['field_circulars_fid']['field'] = 'field_circulars_fid';
  $handler->display->display_options['filters']['field_circulars_fid']['relationship'] = 'reverse_field_area_node';
  $handler->display->display_options['filters']['field_circulars_fid']['operator'] = 'not empty';
  $export['members_area'] = $view;

  $view = new view();
  $view->name = 'members_area_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Members Area All';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members Area All';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_meeting_date_members_area' => 'field_meeting_date_members_area',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'contacts' => '#ffffff',
    'content_links' => '#ffffff',
    'councillors' => '#ffffff',
    'development_plans' => '#ffffff',
    'event' => '#ffffff',
    'faqs' => '#ffffff',
    'feed' => '#ffffff',
    'feed_item' => '#ffffff',
    'general' => '#ffffff',
    'library_events' => '#ffffff',
    'maps' => '#ffffff',
    'members_area' => '#ffffff',
    'minutes_agendas' => '#ffffff',
    'news' => '#ffffff',
    'panel' => '#ffffff',
    'planning_lists' => '#ffffff',
    'pool_times' => '#ffffff',
    'section_header' => '#ffffff',
    'site_notes' => '#ffffff',
    'test_faqs' => '#ffffff',
    'useful_links' => '#ffffff',
    'webform' => '#ffffff',
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Content using Area */
  $handler->display->display_options['relationships']['reverse_field_area_node']['id'] = 'reverse_field_area_node';
  $handler->display->display_options['relationships']['reverse_field_area_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_node']['field'] = 'reverse_field_area_node';
  $handler->display->display_options['relationships']['reverse_field_area_node']['relationship'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Content using Area */
  $handler->display->display_options['relationships']['reverse_field_area_node_1']['id'] = 'reverse_field_area_node_1';
  $handler->display->display_options['relationships']['reverse_field_area_node_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_node_1']['field'] = 'reverse_field_area_node';
  $handler->display->display_options['relationships']['reverse_field_area_node_1']['relationship'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date_members_area']['id'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['field'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agenda']['delta_offset'] = '0';
  /* Sort criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'members_area' => 'members_area',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    275 => '275',
    194 => '194',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'area';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['operator'] = 'not empty';

  /* Display: Members Circulars */
  $handler = $view->new_display('block', 'Members Circulars', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Circulars */
  $handler->display->display_options['fields']['field_circulars']['id'] = 'field_circulars';
  $handler->display->display_options['fields']['field_circulars']['table'] = 'field_data_field_circulars';
  $handler->display->display_options['fields']['field_circulars']['field'] = 'field_circulars';
  $handler->display->display_options['fields']['field_circulars']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_circulars']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'members_area' => 'members_area',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    275 => '275',
    194 => '194',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'area';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Circulars (field_circulars:fid) */
  $handler->display->display_options['filters']['field_circulars_fid']['id'] = 'field_circulars_fid';
  $handler->display->display_options['filters']['field_circulars_fid']['table'] = 'field_data_field_circulars';
  $handler->display->display_options['filters']['field_circulars_fid']['field'] = 'field_circulars_fid';
  $handler->display->display_options['filters']['field_circulars_fid']['operator'] = 'not empty';

  /* Display: Members Area All */
  $handler = $view->new_display('block', 'Members Area All', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Phonebook Page */
  $handler = $view->new_display('page', 'Phonebook Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'STAFF PHONEBOOK';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_date_members_area' => 'field_meeting_date_members_area',
    'field_agenda' => 'field_agenda',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_date_members_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agenda' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'phonebook_' => 'phonebook_',
    'area' => 0,
    'filetype' => 0,
    'i_want_to' => 0,
    'intro' => 0,
    'navigate' => 0,
    'news_types' => 0,
    'ratings' => 0,
    'role_display' => 0,
    'services' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name_phonebook']['id'] = 'field_first_name_phonebook';
  $handler->display->display_options['fields']['field_first_name_phonebook']['table'] = 'field_data_field_first_name_phonebook';
  $handler->display->display_options['fields']['field_first_name_phonebook']['field'] = 'field_first_name_phonebook';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name_phonebook']['id'] = 'field_last_name_phonebook';
  $handler->display->display_options['fields']['field_last_name_phonebook']['table'] = 'field_data_field_last_name_phonebook';
  $handler->display->display_options['fields']['field_last_name_phonebook']['field'] = 'field_last_name_phonebook';
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone_phonebook']['id'] = 'field_telephone_phonebook';
  $handler->display->display_options['fields']['field_telephone_phonebook']['table'] = 'field_data_field_telephone_phonebook';
  $handler->display->display_options['fields']['field_telephone_phonebook']['field'] = 'field_telephone_phonebook';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department_phonebook']['id'] = 'field_department_phonebook';
  $handler->display->display_options['fields']['field_department_phonebook']['table'] = 'field_data_field_department_phonebook';
  $handler->display->display_options['fields']['field_department_phonebook']['field'] = 'field_department_phonebook';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_title_phonebook']['id'] = 'field_title_phonebook';
  $handler->display->display_options['fields']['field_title_phonebook']['table'] = 'field_data_field_title_phonebook';
  $handler->display->display_options['fields']['field_title_phonebook']['field'] = 'field_title_phonebook';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_last_name_phonebook) */
  $handler->display->display_options['sorts']['field_last_name_phonebook_value']['id'] = 'field_last_name_phonebook_value';
  $handler->display->display_options['sorts']['field_last_name_phonebook_value']['table'] = 'field_data_field_last_name_phonebook';
  $handler->display->display_options['sorts']['field_last_name_phonebook_value']['field'] = 'field_last_name_phonebook_value';
  $handler->display->display_options['sorts']['field_last_name_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_last_name_phonebook_value']['expose']['label'] = 'Last Name';
  /* Sort criterion: Content: First Name (field_first_name_phonebook) */
  $handler->display->display_options['sorts']['field_first_name_phonebook_value']['id'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['sorts']['field_first_name_phonebook_value']['table'] = 'field_data_field_first_name_phonebook';
  $handler->display->display_options['sorts']['field_first_name_phonebook_value']['field'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['sorts']['field_first_name_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_first_name_phonebook_value']['expose']['label'] = 'First Name';
  /* Sort criterion: Content: Department (field_department_phonebook) */
  $handler->display->display_options['sorts']['field_department_phonebook_value']['id'] = 'field_department_phonebook_value';
  $handler->display->display_options['sorts']['field_department_phonebook_value']['table'] = 'field_data_field_department_phonebook';
  $handler->display->display_options['sorts']['field_department_phonebook_value']['field'] = 'field_department_phonebook_value';
  $handler->display->display_options['sorts']['field_department_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_department_phonebook_value']['expose']['label'] = 'Department';
  /* Sort criterion: Content: Job Title (field_title_phonebook) */
  $handler->display->display_options['sorts']['field_title_phonebook_value']['id'] = 'field_title_phonebook_value';
  $handler->display->display_options['sorts']['field_title_phonebook_value']['table'] = 'field_data_field_title_phonebook';
  $handler->display->display_options['sorts']['field_title_phonebook_value']['field'] = 'field_title_phonebook_value';
  $handler->display->display_options['sorts']['field_title_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_title_phonebook_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'phonebook' => 'phonebook',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Telephone (field_telephone_phonebook) */
  $handler->display->display_options['filters']['field_telephone_phonebook_value']['id'] = 'field_telephone_phonebook_value';
  $handler->display->display_options['filters']['field_telephone_phonebook_value']['table'] = 'field_data_field_telephone_phonebook';
  $handler->display->display_options['filters']['field_telephone_phonebook_value']['field'] = 'field_telephone_phonebook_value';
  $handler->display->display_options['filters']['field_telephone_phonebook_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_telephone_phonebook_value']['group'] = 1;
  /* Filter criterion: Content: First Name (field_first_name_phonebook) */
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['id'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['table'] = 'field_data_field_first_name_phonebook';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['field'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['group'] = 2;
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['expose']['operator_id'] = 'field_first_name_phonebook_value_op';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['expose']['operator'] = 'field_first_name_phonebook_value_op';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['expose']['identifier'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    21 => 0,
    22 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    7 => 0,
    6 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['group_info']['label'] = 'First Name (field_first_name_phonebook)';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['group_info']['identifier'] = 'field_first_name_phonebook_value';
  $handler->display->display_options['filters']['field_first_name_phonebook_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: Last Name (field_last_name_phonebook) */
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['id'] = 'field_last_name_phonebook_value';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['table'] = 'field_data_field_last_name_phonebook';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['field'] = 'field_last_name_phonebook_value';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['group'] = 2;
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['expose']['operator_id'] = 'field_last_name_phonebook_value_op';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['expose']['operator'] = 'field_last_name_phonebook_value_op';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['expose']['identifier'] = 'field_last_name_phonebook_value';
  $handler->display->display_options['filters']['field_last_name_phonebook_value']['expose']['remember_roles'] = array(
    2 => 0,
    22 => '22',
    1 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    21 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    7 => 0,
    6 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  /* Filter criterion: Content: Department (field_department_phonebook) */
  $handler->display->display_options['filters']['field_department_phonebook_value']['id'] = 'field_department_phonebook_value';
  $handler->display->display_options['filters']['field_department_phonebook_value']['table'] = 'field_data_field_department_phonebook';
  $handler->display->display_options['filters']['field_department_phonebook_value']['field'] = 'field_department_phonebook_value';
  $handler->display->display_options['filters']['field_department_phonebook_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_department_phonebook_value']['group'] = 2;
  $handler->display->display_options['filters']['field_department_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_phonebook_value']['expose']['operator_id'] = 'field_department_phonebook_value_op';
  $handler->display->display_options['filters']['field_department_phonebook_value']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_phonebook_value']['expose']['operator'] = 'field_department_phonebook_value_op';
  $handler->display->display_options['filters']['field_department_phonebook_value']['expose']['identifier'] = 'field_department_phonebook_value';
  $handler->display->display_options['filters']['field_department_phonebook_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    21 => 0,
    22 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    7 => 0,
    6 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  /* Filter criterion: Content: Job Title (field_title_phonebook) */
  $handler->display->display_options['filters']['field_title_phonebook_value']['id'] = 'field_title_phonebook_value';
  $handler->display->display_options['filters']['field_title_phonebook_value']['table'] = 'field_data_field_title_phonebook';
  $handler->display->display_options['filters']['field_title_phonebook_value']['field'] = 'field_title_phonebook_value';
  $handler->display->display_options['filters']['field_title_phonebook_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_phonebook_value']['group'] = 2;
  $handler->display->display_options['filters']['field_title_phonebook_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_phonebook_value']['expose']['operator_id'] = 'field_title_phonebook_value_op';
  $handler->display->display_options['filters']['field_title_phonebook_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_title_phonebook_value']['expose']['operator'] = 'field_title_phonebook_value_op';
  $handler->display->display_options['filters']['field_title_phonebook_value']['expose']['identifier'] = 'field_title_phonebook_value';
  $handler->display->display_options['filters']['field_title_phonebook_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    21 => 0,
    22 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    7 => 0,
    6 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
  );
  $handler->display->display_options['path'] = 'members/phonebook';
  $export['members_area_all'] = $view;

  $view = new view();
  $view->name = 'members_area_all_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Members Area Calendars';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Field: Area (field_area) */
  $handler->display->display_options['relationships']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['relationships']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['relationships']['field_area_tid']['field'] = 'field_area_tid';
  /* Relationship: Taxonomy term: User using Area */
  $handler->display->display_options['relationships']['reverse_field_area_user']['id'] = 'reverse_field_area_user';
  $handler->display->display_options['relationships']['reverse_field_area_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_user']['field'] = 'reverse_field_area_user';
  $handler->display->display_options['relationships']['reverse_field_area_user']['relationship'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date_members_area']['id'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['field'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_meeting_date_members_area']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['delta_offset'] = '0';
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agenda']['delta_offset'] = '0';
  /* Sort criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['sorts']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    275 => '275',
    194 => '194',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'area';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['operator'] = 'not empty';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-meeting-date-members-area/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-meeting-date-members-area/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-meeting-date-members-area/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date_members_area']['id'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['field'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_meeting_date_members_area']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-meeting-date-members-area/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Council Meetings */
  $handler = $view->new_display('block', 'Council Meetings', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'contacts' => '#ffffff',
    'content_links' => '#ffffff',
    'councillors' => '#ffffff',
    'development_plans' => '#ffffff',
    'event' => '#ffffff',
    'faqs' => '#ffffff',
    'feed' => '#ffffff',
    'feed_item' => '#ffffff',
    'general' => '#ffffff',
    'library_events' => '#ffffff',
    'maps' => '#ffffff',
    'members_area' => '#ffffff',
    'minutes_agendas' => '#ffffff',
    'news' => '#ffffff',
    'panel' => '#ffffff',
    'planning_lists' => '#ffffff',
    'pool_times' => '#ffffff',
    'section_header' => '#ffffff',
    'site_notes' => '#ffffff',
    'test_faqs' => '#ffffff',
    'useful_links' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date_members_area']['id'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['field'] = 'field_meeting_date_members_area';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date_members_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_meeting_date_members_area']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_members_area']['delta_offset'] = '0';
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agenda']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );

  /* Display: Members Areas Calendar */
  $handler = $view->new_display('block', 'Members Areas Calendar', 'block_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value' => 'field_data_field_meeting_date_members_area.field_meeting_date_members_area_value',
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_area_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    130 => '130',
    142 => '142',
    141 => '141',
    140 => '140',
    126 => '126',
    135 => '135',
    136 => '136',
    128 => '128',
    138 => '138',
    137 => '137',
    129 => '129',
    139 => '139',
    127 => '127',
    133 => '133',
    134 => '134',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'area';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Meeting Date (field_meeting_date_members_area) */
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['id'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['table'] = 'field_data_field_meeting_date_members_area';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['field'] = 'field_meeting_date_members_area_value';
  $handler->display->display_options['filters']['field_meeting_date_members_area_value']['operator'] = 'not empty';
  $export['members_area_all_calendar'] = $view;

  return $export;
}
