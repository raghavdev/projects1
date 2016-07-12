<?php

// Extract the required SSH config from Vagrant.
if (`which vagrant 2> /dev/null`) {
  $config = '/tmp/' . md5(__FILE__);

  if (time() - filemtime($config) > 30) {
    `vagrant ssh-config > $config`;
  }

  $aliases['vagrant'] = array(
    'site' => 'vagrant',
    'root' => '/var/www/sites/default/drupal',
    'remote-host' => 'default',
    'remote-user' => 'vagrant',
    'ssh-options' => "-F $config",
  );
}