<?php

// TODO: examples...

/**
 * Manipulate the SearchApiQueryInterface object.
 *
 * @param SearchApiQueryInterface $query
 *   The query object to be manipulated.
 * @param array $variables
 *   An associative array containing the function parameters.
 * @param array $objects
 *   An associative array containing the objects used.
 *   Keys:
 *     server (SearchApiServer)
 *     index (SearchApiIndex)
 *     query (SearchApiQueryInterface)
 *
 */
function hook_simple_solr_search_query_build_alter(SearchApiQueryInterface $query, &$variables, &$objects) {
}

/**
 * Final opportunity to manipulate the SearchApiQueryInterface object before execution.
 *
 * @param SearchApiQueryInterface $query
 *   The query object to be manipulated.
 * @param array $variables
 *   An associative array containing the function parameters.
 * @param array $objects
 *   An associative array containing the objects used.
 *   Keys:
 *     server (SearchApiServer)
 *     index (SearchApiIndex)
 *     query (SearchApiQueryInterface)
 *     solr (SearchApiSolrService)
 */
function hook_simple_solr_search_pre_execute_alter(SearchApiQueryInterface $query, &$variables, &$objects) {
}

/**
 * Manipulate the "raw" results returned from the SearchApiSolrService.
 *
 * @param array $solr_results
 *   An associative array for data returned from SearchApiSolrService->search().
 * @param array $variables
 *   An associative array containing the function parameters.
 * @param array $objects
 *   An associative array containing the objects used.
 *   Keys:
 *     server (SearchApiServer)
 *     index (SearchApiIndex)
 *     query (SearchApiQueryInterface)
 *     solr (SearchApiSolrService)
 */
function hook_simple_solr_search_post_execute_alter(&$solr_results, &$variables, &$objects) {
}

/**
 * Manipulate the cleaned up results.
 *
 * @param array $results
 *   An associative array to be returned.
 *   Keys: total, count, results
 * @param array $variables
 *   An associative array containing the function parameters.
 * @param array $objects
 *   An associative array containing the objects used.
 *   Keys:
 *     server (SearchApiServer)
 *     index (SearchApiIndex)
 *     query (SearchApiQueryInterface)
 *     solr (SearchApiSolrService)
 */
function hook_simple_solr_search_results_alter(&$results, &$variables, &$objects) {
}

/**
 * Manipulate the variables used to update Solr index for a specific field.
 *
 * @param array $variables
 *   An associative array containing the function parameters.
 * @param array $objects
 *   An associative array containing the objects used.
 *   Keys:
 *     server (SearchApiServer)
 *     index (SearchApiIndex)
 */
function hook_simple_solr_direct_update_field_alter(&$variables, &$objects) {
}
