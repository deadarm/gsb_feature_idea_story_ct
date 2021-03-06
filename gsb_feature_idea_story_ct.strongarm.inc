<?php
/**
 * @file
 * gsb_feature_idea_story_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_idea_story_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__idea_story';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => TRUE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => TRUE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => TRUE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => TRUE,
      ),
      'expanded' => array(
        'custom_settings' => TRUE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '20',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
        'workbench_access' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(
        'gsb_feature_base_fields_faculty_authors' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'idea_story_top_stories' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'idea_story_latest_stories' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
        'gsb_feature_idea_story_display_top_stories_field' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'idea_story_related' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'idea_story_top_stories' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'idea_story_latest_stories' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'gsb_feature_idea_story_ct_explore_more' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'idea_story_top_stories' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'idea_story_latest_stories' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'insights_signup_form' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'news_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'idea_story_latest_stories' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'gsb_media_inquiries' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'news_listing' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'idea_story_latest_stories' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_idea_story';
  $strongarm->value = array();
  $export['menu_options_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_idea_story';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_idea_story';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_idea_story';
  $strongarm->value = '0';
  $export['node_preview_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_idea_story';
  $strongarm->value = 0;
  $export['node_submitted_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_idea_story_pattern';
  $strongarm->value = 'insights/[node:field_pathauto_title_alias]';
  $export['pathauto_node_idea_story_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_idea_story';
  $strongarm->value = 0;
  $export['workbench_access_node_type_idea_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_idea_story';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_idea_story'] = $strongarm;

  return $export;
}
