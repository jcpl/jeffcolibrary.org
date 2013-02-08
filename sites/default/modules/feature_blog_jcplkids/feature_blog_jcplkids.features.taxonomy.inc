<?php
/**
 * @file
 * feature_blog_jcplkids.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_blog_jcplkids_taxonomy_default_vocabularies() {
  return array(
    'jcpl_kids' => array(
      'name' => 'JCPL Kids Blog',
      'machine_name' => 'jcpl_kids',
      'description' => 'Describes blog content that focuses on kid topics for homework help, books and reading, games, teachers and parents.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
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
