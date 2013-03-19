<?php
/**
 * @file
 * feature_research_az.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_research_az_taxonomy_default_vocabularies() {
  return array(
    'database_subjects' => array(
      'name' => 'Database Subjects',
      'machine_name' => 'database_subjects',
      'description' => 'subject categories for databases A-Z',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
