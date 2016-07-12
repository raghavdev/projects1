# Set the deployment directory on the target hosts.
set :deploy_to, "/var/www/sites/virtual/unfi-sp-staging.metaltoad.com"

# The hostnames to deploy to.
role :web, "stg02-unfi.ec2.metaltoad.net"

set :gateway, "mgt02-mtm.ec2.metaltoad.net"

# Specify one of the web servers to use for database backups or updates.
# This server should also be running Drupal.
role :db, "stg02-unfi.ec2.metaltoad.net", :primary => true

# The path to drush
set :drush, "cd #{current_path}/#{app_root} ; /usr/local/bin/drush"

# The username on the target system, if different from your local username
ssh_options[:user] = 'deploy'
