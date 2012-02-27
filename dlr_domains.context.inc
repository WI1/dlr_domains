<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dlr_domains_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'domain_admin_block';
  $context->description = 'Set up a domain admin block for domain admins';
  $context->tag = 'Domain';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'domain admin' => 'domain admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'domain_admin-0' => array(
          'module' => 'domain_admin',
          'delta' => 0,
          'region' => 'space_tools',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Domain');
  t('Set up a domain admin block for domain admins');
  $export['domain_admin_block'] = $context;

  return $export;
}
