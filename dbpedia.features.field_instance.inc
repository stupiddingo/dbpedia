<?php
/**
 * @file
 * dbpedia.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dbpedia_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dbpedia_example-field_species_example'
  $field_instances['node-dbpedia_example-field_species_example'] = array(
    'bundle' => 'dbpedia_example',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Type all or part of a common or scientific name',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_species_example',
    'label' => 'Species Example',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '-4',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Species Example');
  t('Type all or part of a common or scientific name');

  return $field_instances;
}
