<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dlr_domains_user_default_permissions() {
  $permissions = array();

  // Exported permission: access domain navigation
  $permissions['access domain navigation'] = array(
    'name' => 'access domain navigation',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access domain settings form
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access inactive domains
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer domains
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer own domains
  $permissions['administer own domains'] = array(
    'name' => 'administer own domains',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'domain admin',
    ),
  );

  // Exported permission: assign domain editors
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete domain nodes
  $permissions['delete domain nodes'] = array(
    'name' => 'delete domain nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit domain nodes
  $permissions['edit domain nodes'] = array(
    'name' => 'edit domain nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: publish from assigned domain
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: publish from default domain
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: publish to any assigned domain
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: review content for all domains
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: set domain access
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
