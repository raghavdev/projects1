# Set the deployment directory on the target hosts.
set :deploy_to, "/var/www/sites/virtual/#{application}-#{stage}"

# The hostnames to deploy to.
role :web, 'web03-unfi', 'web04-unfi'

set :gateway, 'web03-unfi.ec2.metaltoad.net'

# Specify one of the web servers to use for database backups or updates.
# This server should also be running Drupal.
role :db, "web03-unfi", :primary => true

# The path to drush
set :drush, "cd #{current_path}/#{app_root} ; /usr/local/bin/drush"

# The username on the target system, if different from your local username
ssh_options[:user] = 'deploy'

# Set the New Relic Application ID and API Key to notify New Relic of deployments.
# See https://docs.newrelic.com/docs/apm/apis/requirements/api-key
set :newrelic_app_id, '7242381'
set :newrelic_api_key, 'ad422bc2b5dbfe2bad18a43b5f08a1b37f4f300c55c79c7'

namespace :deploy do
  desc "Notify New Relic"
  task :newrelic do
    if (!(newrelic_app_id == '' || newrelic_api_key == ''))
      run_locally "curl -H \"x-api-key:#{newrelic_api_key}\" -d \"deployment[application_id]=#{newrelic_app_id}\" -d \"deployment[user]=`whoami`\" https://api.newrelic.com/deployments.xml"
    end
  end
end
after "deploy", "deploy:newrelic"
