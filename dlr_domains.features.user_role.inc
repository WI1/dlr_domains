<?php

/**
 * Implementation of hook_user_default_roles().
 */
function dlr_domains_user_default_roles() {
  $roles = array();

  // Exported role: domain admin
  $roles['domain admin'] = array(
    'name' => 'domain admin',
  );

  return $roles;
}
