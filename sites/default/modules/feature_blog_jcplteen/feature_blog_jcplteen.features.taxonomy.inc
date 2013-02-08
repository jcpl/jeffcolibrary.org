<?php
/**
 * @file
 * feature_blog_jcplteen.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_blog_jcplteen_taxonomy_default_vocabularies() {
  return array(
    'jcpl_teens' => array(
      'name' => 'Crazy Readerz Teen Blog',
      'machine_name' => 'jcpl_teens',
      'description' => 'Describes blog content that focuses on teen topics for homework help and reviews.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
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
