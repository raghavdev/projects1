 # The project name. (one word: no spaces, dashes, or underscores)
set :application, "unfiSupplierPortal"

# List the Drupal multi-site folders.  Use "default" if no multi-sites are installed.
# set :domains, ["example.metaltoad.com", "example2.metaltoad.com"]
set :domains, ["default"]
set :tables, "common"

# Set the JIRA project prefix
set :jira_prefix, "UNFISP"
set :jira_url, "https://metaltoad.atlassian.net"
set (:jira_user_name) { Capistrano::CLI.ui.ask("JIRA username: ") }
set (:jira_user_pass) { Capistrano::CLI.password_prompt("JIRA password: ") }

# Set the repository type and location to deploy from.
set :scm, :git
set :repository,  "git@github.com:metaltoad/unfi-supplierportal.git"
# set :scm, :subversion
# set :repository,  "https://svn.metaltoad.com/svn/#{application}/trunk/"
# set(:scm_password) { Capistrano::CLI.password_prompt("SCM Password: ") }

# E-mail address to notify of production deployments
set :notify_email, "pm@metaltoad.com,devops@metaltoad.com"

# Set the database passwords that we'll use for maintenance. Probably only used
# during setup.
set(:db_root_pass) { '-p' + Capistrano::CLI.password_prompt("Production Root MySQL password: ") }
set(:db_pass) { random_password }

# The subdirectory within the repo containing the DocumentRoot.
set :app_root, "drupal"

# Code to add Compass to deploy process so we can remove compiled css from git repo
# build Compass artifacts
set :theme_path, "#{app_root}/sites/all/themes"
set :theme_names, ["supplier_portal"]

# Use a remote cache to speed things up
set :deploy_via, :remote_cache
ssh_options[:user] = 'deploy'
ssh_options[:forward_agent] = true

# Multistage support - see config/deploy/[STAGE].rb for specific configs
set :default_stage, "dev"
set :stages, %w(dev staging qa prod)

before 'multistage:ensure' do
  # Set the branch to the current stage, unless it's been overridden
  if !exists?(:branch)
    set :branch, stage
  end

  # Extra reminders for production.
  if (stage == :prod)
    before "deploy", "deploy:quality", "db:backup"
    after "deploy", "deploy:notify"
  end

  # Tag staging and production releases
  if (stage == :staging || stage == :prod)
    after "deploy", "deploy:tag_release"
  end
end

# Generally don't need sudo for this deploy setup
set :use_sudo, false

# This allows the sudo command to work if you do need it
default_run_options[:pty] = true

# Override these in your stage files if your web server group is something other than apache
set :httpd_group, 'apache'

# If you aren't using Compass (which you should!) then comment out this line
after "deploy:update_code", "deploy:compass_compile"
