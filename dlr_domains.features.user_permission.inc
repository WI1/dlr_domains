<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dlr_domains_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer own domains
  $permissions['administer own domains'] = array(
    'name' => 'administer own domains',
    'roles' => array(
      '0' => 'domain admin',
    ),
  );

  return $permissions;
}
