# Contents of this File

* [Overview of Directory Structure](#overview-of-directory-structure)
* [Local Project Setup](#local-project-setup)
* [Project Glossary](#project-glossary)
* [Key Features](#key-features)

# Overview of Directory Structure

* db
  This directory is not stored in version control, but it is created when you do
  a cap db:pull. It stores database backups. Feel free to use this to store your
  own local db backups here.
* docs
  This directory is for patches. Whenever you need to patch core or a contrib
  module, you should save the patch file to this directory. Please be sure the
  patch is [named properly](http://drupal.org/patch/submit#patch_naming), and
  prefixed with the module name.

  Whenever doing core or module updates, you must check this directory to see if
  there are any patches that will need to be re-applied. If you see a patch that
  might need to be re-applied, when it is named properly you can take the issue
  number and go to drupal.org/node/[issue-number] to see the status, perhaps the
  patch has already been committed and won't need to be re-applied. Just check
  that the release/update includes that commit, and if so that patch can be
  removed from the repo. If it is unresolved and there are new patches, those
  will need to be tested.
* drupal
  This is where drupal's files go.
* scripts
  This directory contains php scripts, many of which are called using drush:
  `drush php-script`.
* tests
  This is where behat tests for the project are written.

# Local Project Setup

After you clone the repo, you created your database, added your database
configuration to drupal/sites/default/local_settings.php, and pulled the
database, there are a few other things you should do when working on this
project in particular.

* Ensure you have [https setup on your local environment](https://wiki.metaltoad.com/index.php/Metaltoad:Developer_Handbook#Virtual_host_setup)
* Add the following to your local_settings.php file:

  ```
  $conf['environment'] = 'local';
  $conf['cdn_status'] = 0;
  $conf['preprocess_css'] = 0;
  $conf['preprocess_js'] = 0;
  $conf['cache_default_class'] = 'DrupalDatabaseCache';
  $conf['file_temporary_path'] = '/tmp';
  // The next two lines are for the CSV exports for the integration with their
  // other systems. On dev/staging/prod it is pointed to a cifs mount in /mnt/cifs.
  // On your local you can create a directory to fake this for local testing,
  // otherwise it can be left blank.
  $conf['ubs_export_csv_export_path_remote'] = '';
  $conf['wbs_export_csv_export_path_remote'] = '';
  // Disable the SMTP Module so that emails generated when testings
  // are not sent to the client or their users
  $conf['smtp_on'] = 0;
  $conf['smtp_username'] = '';
  $conf['smtp_host'] = '';
  $conf['smtp_hostbackup'] = '';
  $conf['mail_system'] = array('default-system' => 'DefaultMailSystem');
  ```
* This project uses [SASS and Compass](https://wiki.metaltoad.com/index.php/Metaltoad:Developer_Handbook#Install_Additional_Software)
  You will find the SCSS files in drupal/sites/all/themes/supplier_portal/sass/

# Project Glossary

* CMP - Customized Marketing Program
* EBS - East-Coast Business Sytem, alias for UBS
* EDI -
* EIN - Enterprise Information Number. Not a tax EIN.
* EIW -
* iUNFI - iOS app for customers for ordering and store management.
* MDM - TeraData or DataMart, unified data warehouse.
* NIR - New Item Request. Supplier's request to add a new product, workflow of
        review and approvals before added to internal systems (see UBS and WBS).
* PWS - Product Warehousing System
* RCM - Retail Category Management
* SRM - Supplier Relation Management
* UBS - Universal Business System
* uPIM - u Product Information Manager
* WBS - West-Coast Business System

# Key Features

TODO
