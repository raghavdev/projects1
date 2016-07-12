# TODO: Cap db:push should support rollback or backup in some way
# TODO: Better handling of database creation - perhaps make the deploy user a database admin?

load 'deploy' if respond_to?(:namespace) # cap2 differentiator
Dir['vendor/plugins/*/recipes/*.rb'].each { |plugin| load(plugin) }
load 'config/deploy.rb'

require 'capistrano/ext/multistage'

namespace :deploy do
  desc "Prepares one or more servers for deployment."
  task :setup, :roles => :web, :except => { :no_release => true } do
    dirs = [deploy_to, releases_path, shared_path]
    domains.each do |domain|
      dirs += [shared_path + "/#{domain}/files"]
    end
    dirs += %w(system).map { |d| File.join(shared_path, d) }
    run "mkdir -m 0775 -p #{dirs.join(' ')}"
    # add setgid bit, so that files/ contents are always in the httpd group
    run "chmod 2775 #{shared_path}/*/files"
    run "chgrp #{httpd_group} #{shared_path}/*/files"
  end

  desc "Create local settings.php in shared/config"
  task :create_settings_php, :roles => :web do
    domains.each do |domain|
      if File.exist?('drupal/modules/overlay/overlay.module') # test for Drupal 7
        configuration = <<-EOF
<?php
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => '#{short_name(domain)}',
  'username' => '#{tiny_name(domain)}',
  'password' => '#{db_pass}',
  'host' => 'localhost',
);
EOF
      else
        configuration = <<-EOF
<?php
$db_url = 'mysql://#{tiny_name(domain)}:#{db_pass}@localhost/#{short_name(domain)}';
$db_prefix = '';
EOF
      end
      put configuration, "#{deploy_to}/#{shared_dir}/#{domain}/local_settings.php"
    end
  end

  desc "link file dirs and the local_settings.php to the shared copy"
  task :symlink_files, :roles => :web do
    domains.each do |domain|
      # link settings file
      run "ln -nfs #{deploy_to}/#{shared_dir}/#{domain}/local_settings.php #{release_path}/#{app_root}/sites/#{domain}/local_settings.php"
      # remove any link or directory that was exported from SCM, and link to remote Drupal filesystem
      run "rm -rf #{release_path}/sites/#{domain}/files"
      run "ln -nfs #{deploy_to}/#{shared_dir}/#{domain}/files #{release_path}/#{app_root}/sites/#{domain}/files"
    end
  end

  # desc '[internal] Touches up the released code.'
  task :finalize_update, :except => { :no_release => true } do
    run "chmod -R g+w #{release_path}"
    run "chmod 644 #{release_path}/#{app_root}/sites/*/settings.php"
  end

  desc "Flush the Drupal cache system."
  task :cacheclear, :roles => :db, :only => { :primary => true } do
    domains.each do |domain|
      tables = capture("#{drush} --uri=#{domain} sql-query 'show tables' | wc -l")
      if (tables.to_i > 1)
        run "#{drush} --uri=#{domain} registry-rebuild"
        run "#{drush} --uri=#{domain} cache-clear all"
      end
    end
  end

  desc "Reminders for quality check"
  task :quality do
    puts "\n\n\033[41;30m  ************************ DANGER ZONE ************************  \033[0m\n"
    puts "\033[41;30m  *\033[0m                                                          \033[41;30m *  \033[0m\n"
    puts "\033[41;30m  *\033[0m \033[31m You're about to deploy to production servers.          \033[0m \033[41;30m *  \033[0m"
    puts "\033[41;30m  *\033[0m \033[31m Please review http://metaltoad.com/deployment-policies \033[0m \033[41;30m *  \033[0m"
    puts "\033[41;30m  *\033[0m                                                          \033[41;30m *  \033[0m\n"
    puts "\033[41;30m  ************************ DANGER ZONE ************************  \033[0m\n\n"

    if (Capistrano::CLI.ui.ask("Enter application name to continue: ") != application)
      raise Capistrano::Error, "\n\n\033[43;30m Sorry, that's not the answer I was looking for. Deployment canceled.\033[0m\n\n"
    end
  end

  desc "Send an e-mail notification"
  task :notify, :roles => :db, :only => { :primary => true } do
    username = run_locally 'whoami'
    hostname = run_locally 'hostname'
    run "printf To:#{notify_email}\\\\nSubject:Deployed\\ #{application}\\ to\\ #{stage}\\ by\\ #{username}@#{hostname}\\\\nThis\\ is\\ an\\ automated\\ message\\ from\\ Capistrano. | /usr/sbin/sendmail -t"
  end

  desc "Compile sass using compass"
  task :compass_compile, :roles => :web do
    require 'fileutils'
    theme_names.each do |theme_name|
      tmp_theme = "/tmp/#{application}-#{release_name}-#{theme_name}"
      Dir.mkdir(tmp_theme)
      download("#{release_path}/#{theme_path}/#{theme_name}", tmp_theme, {:once => true, :recursive => true, :via => :scp})

      run_locally("cd #{tmp_theme}/#{theme_name}; bundle install --deployment ; bundle exec compass clean")
      run_locally("cd #{tmp_theme}/#{theme_name}; bundle exec compass compile --output-style compressed")
      top.upload("#{tmp_theme}/#{theme_name}/styles",
        "#{release_path}/#{theme_path}/#{theme_name}/styles",
         {:via => :sftp, :mkdir => true})

      # Glob is nasty, but the generated_images directory
      # option isn't supported until Compass 0.12.
      Dir.glob("#{tmp_theme}/#{theme_name}/images/*-s[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f].png").each do|f|
        top.upload(f, "#{release_path}/#{theme_path}/#{theme_name}/images/#{File.basename(f)}")
      end

      FileUtils.rmtree(tmp_theme);
    end
  end

  namespace :web do
    desc "Set Drupal maintainance mode to online."
    task :enable do
      domains.each do |domain|
        run "#{drush} --uri=#{domain} vdel site_offline"
      end
    end

    desc "Set Drupal maintainance mode to off-line."
    task :disable do
      domains.each do |domain|
        run "#{drush} --uri=#{domain} vset site_offline 1"
      end
    end

    desc "Run Drupal update scripts"
    task :updb do
      domains.each do |domain|
        run "#{drush} --uri=#{domain} updb -y"
      end
    end

  end

  desc "Create a tag for the deploy."
  task :tag_release do
    if ("#{scm}" == "git" && ['staging', 'prod'].include?("#{stage}"))
      require 'Time'
      timestamp = Time.now.getutc.strftime('%Y%m%d-%H%M')
      release_tag = "#{stage}-#{timestamp}"
      run_locally "git tag #{release_tag} origin/#{branch} && git push origin #{release_tag}"
      if ("#{jira_prefix}" != "")
        # We use previous_revision because we run after deploy, and
        # current_revision has been updated by now.
        # We use origin/#{branch} because our local copy may not be what was
        # actually deployed. IE: we could have extra commits in local branch.
        # Also we use branch and not stage here in case we passed
        # `-s branch=some_other_branch`
        tickets = get_ticket_numbers(previous_revision, "origin/#{branch}")
        tag_tickets(tickets, release_tag)
      end
    end
  end

  # Each of the following tasks are Rails specific. They're removed.
  task :migrate do
  end

  task :migrations do
  end

  task :cold do
  end

  task :start do
  end

  task :stop do
  end

  task :restart, :roles => :web do
  end

  after "deploy:setup",
    "deploy:create_settings_php",
    "db:create"

  after "deploy:update_code",
    "deploy:symlink_files"

  after "deploy",
    "deploy:cacheclear",
    "deploy:cleanup"

  before "deploy:quality", "deploy:pending"

end

namespace :db do
  desc "Download a backup of the database(s) from the given stage."
  task :down, :roles => :db, :only => { :primary => true } do
    run_locally "mkdir -p db"
    domains.each do |domain|
      if (tables == "common")
        filename = "#{domain}_#{stage}.sql"
      else
        filename = "#{domain}_#{stage}_#{tables}.sql"
      end

      temp = "/tmp/#{release_name}_#{application}_#{filename}"
      run "touch #{temp} && chmod 600 #{temp}"
      run "#{drush} --uri=#{domain} sql-dump --structure-tables-key=#{tables} > #{temp}"
      download("#{temp}", "db/#{filename}", :via=> :scp)
      run "rm #{temp}"
    end
  end

  desc "Download and apply a backup of the database(s) from the given stage."
  task :pull, :roles => :db, :only => { :primary => true } do
    domains.each do |domain|
      if (tables == "common")
        filename = "#{domain}_#{stage}.sql"
      else
        filename = "#{domain}_#{stage}_#{tables}.sql"
      end

      system "cd #{app_root} ; drush --uri=#{domain} sql-cli < ../db/#{filename}"
    end
  end

  desc "Upload database(s) to the given stage."
  task :push, :roles => :db, :only => { :primary => true } do
    domains.each do |domain|
      filename = "#{domain}_#{stage}.sql"
      temp = "/tmp/#{release_name}_#{application}_#{filename}"
      run "touch #{temp} && chmod 600 #{temp}"
      upload("db/#{filename}", "#{temp}", :via=> :scp)
      run "#{drush} --uri=#{domain} sql-cli < #{temp}"
      run "rm #{temp}"
    end
  end
  
  desc "Create a backup of the database(s) for the given stage. Use `-S skip_backup=true` to bypass"
  task :backup, :roles => :db, :only => { :primary => true } do
    if !exists?(:skip_backup)
      disk_use = capture('df -h | grep "/$" | awk \'{print substr($5, 0, length($5)-1)}\'')
      if disk_use.to_i >= 90
        puts "Skipping backup, disk is #{disk_use.to_i}\% full. Reduce usage to less than 90% for automated prod backups"
      else
        backup_dir = "~/db_backups/#{application}"
        run "mkdir -p #{backup_dir}"
        domains.each do |domain|
          if (tables == "common")
            filename = "#{domain}_#{stage}.sql"
          else
            filename = "#{domain}_#{stage}_#{tables}.sql"
          end
  
          run "#{drush} --uri=#{domain} sql-dump --structure-tables-key=#{tables} > #{backup_dir}/#{release_name}_#{application}_#{filename}"
          run "cd #{backup_dir}; ls -1tr *_#{application}_#{filename} | head -n -5 | xargs rm -f"
        end
      end
    else
      puts "Backup skip requested, moving on."
    end
  end

  desc "Create database"
  task :create, :roles => :db, :only => { :primary => true } do
    # Create and gront privs to the new db user
    domains.each do |domain|
      create_sql = "CREATE DATABASE IF NOT EXISTS \\\`#{short_name(domain)}\\\` ;
                    GRANT ALL ON \\\`#{short_name(domain)}\\\`.* TO '#{tiny_name(domain)}'@'localhost' IDENTIFIED BY '#{db_pass}';
                    FLUSH PRIVILEGES;"
      run "mysql -u root #{db_root_pass} -e \"#{create_sql}\""
      puts "Using pass: #{db_pass}"
    end
  end

  after "db:push", "deploy:cacheclear"
  before "db:pull", "db:down"
end

namespace :files do
  desc "Download a backup of the sites/default/files directory from the given stage."
  task :pull, :roles => :web do
    domains.each do |domain|
      if exists?(:gateway)
        run_locally("rsync --recursive --times --omit-dir-times --chmod=ugo=rwX --rsh='ssh -A #{ssh_options[:user]}@#{gateway} ssh  #{ssh_options[:user]}@#{find_servers(:roles => :web).first.host}' --compress --human-readable --progress :#{deploy_to}/#{shared_dir}/#{domain}/files/ webroot/sites/#{domain}/files/")
      else
        run_locally("rsync --recursive --times --omit-dir-times --chmod=ugo=rwX --rsh=ssh --compress --human-readable --progress #{ssh_options[:user]}@#{find_servers(:roles => :web).first.host}:#{deploy_to}/#{shared_dir}/#{domain}/files/ webroot/sites/#{domain}/files/")
      end
    end
  end

  desc "Push a backup of the sites/default/files directory from the given stage."
  task :push, :roles => :web do
    domains.each do |domain|
      if exists?(:gateway)
        run_locally("rsync --recursive --times --omit-dir-times --chmod=ugo=rwX --rsh='ssh -A #{ssh_options[:user]}@#{gateway} ssh  #{ssh_options[:user]}@#{find_servers(:roles => :web).first.host}' --compress --human-readable --progress webroot/sites/#{domain}/files/ :#{deploy_to}/#{shared_dir}/#{domain}/files/")
      else
        run_locally("rsync --recursive --times --omit-dir-times --chmod=ugo=rwX --rsh=ssh --compress --human-readable --progress webroot/sites/#{domain}/files/ #{ssh_options[:user]}@#{find_servers(:roles => :web).first.host}:#{deploy_to}/#{shared_dir}/#{domain}/files/")
      end
    end
  end
end

def short_name(domain=nil)
  return "#{application}_#{stage}_#{domain}".gsub('.', '_')[0..63] if domain && domain != 'default'
  return "#{application}_#{stage}".gsub('.', '_')[0..63]
end

def tiny_name(domain=nil)
  return "#{application[0..5]}_#{stage.to_s[0..2]}_#{domain[0..4]}".gsub('.', '_') if domain && domain != 'default'
  return "#{application[0..11]}_#{stage.to_s[0..2]}".gsub('.', '_')
end

def random_password(size = 16)
  chars = (('A'..'Z').to_a + ('a'..'z').to_a + ('0'..'9').to_a) - %w(i o 0 1 l 0)
  (1..size).collect{|a| chars[rand(chars.size)] }.join
end

def get_ticket_numbers(from, to)
  log = run_locally "git log #{from}..origin/#{branch} | grep '#{jira_prefix}-' || :"
  return log.scan(/#{jira_prefix}-[0-9]+/)
end

def tag_tickets(tickets, tag)
  json_data = "{\"update\":{\"labels\":[{\"add\":\"#{tag}\"}]}}"
  tickets.each do |ticket|
    run_locally "curl -D- -u '#{jira_user_name}:#{jira_user_pass}' -X PUT --data '#{json_data}' -H \"Content-Type: application/json\" #{jira_url}/rest/api/2/issue/#{ticket}"
  end
end
