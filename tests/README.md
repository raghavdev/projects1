# Setup guide for Behat on local machines

*Dependencies, Git setup, project setup, command line execution and troubleshooting are covered in the below guide*

This template was created with the intention to lower the learning curve of getting behat setup and running on your local machine.  It comes with a skeleton template of behat that allows you to quickly get started writing tests.

## One Time Dependencies Setup

1.  Install [Composer](https://getcomposer.org/doc/00-intro.md)

2.  Download [Selenium](http://docs.seleniumhq.org/download/)
(specifically the "Selenium Server formerly the Selenium RC Server")

3.  Configure [oauth token](https://getcomposer.org/doc/articles/troubleshooting.md#api-rate-limit-and-oauth-tokens)
(You will only be required to do this once per computer as opposed to per project)

## One Time Git Setup

1.  Ensure you have an up to date clone of the mtm_tools repo

3.  Copy (cp -a is the suggested method) the drupal_behat_template folder from the cloned mtm_tools folder into the desired project root

4.  Rename the drupal_behat_template folder to tests

5.  Git commit the changes to the project so that the tests will be available to all project members

## First Time Workstation Setup (Local)

1.  Navigate to [PROJECT_ROOT]/tests/behat and run composer install

2.  Navigate to [PROJECT_ROOT]/tests/config and copy the example.behat.local.yml as behat.local.yml

3.  Open up the behat.local.yml file with your text editor of choice and customize the file according to the notes within the file relating to your specific project

## Running Behat
1.  Verify that selenium is running

2.  Navigate to the tests folder

3.  In your terminal execute behat/bin/behat to run the tests

4.  Refer to docs.behat.org for advanced use

## Trouble Shooting

1.  Selenium not being started or not being downloaded

2.  The log_out section in the behat.yml needs to match whatever the project site uses (Log out, Log Out, Logout or Sign out etc)

3.  Are you in the tests directory and entering behat/bin/behat in console?

4.  Check the config files for spelling errors or mismatches (if your local environment does not use www. you should exclude it then.)

5.  Do you have composer installed and up to date?

# Setup Guide for Automatic Builds on Jenkins

Jenkins can be setup to automatically run Behat tests after a git push. It will
save a report and history of the past few builds, so you can see which tests are
passing or failing and when a test started failing.

## Creating the Jenkins Job

This is a one-time task for your project. If you aren't able to create new jobs,
ask your Team Lead to create the job.

1.  Go to https://ci.metaltoad.com

2.  Click "New Job"

3.  Give the Job a Name. Hint: Use the Application name from the Capistrano config

4.  Select "Copy existing Job"

5.  Enter "template" for Copy from

6.  Select "Git" from Source Code Management

7.  Enter the project's Repository URL

8.  Enter "dev" for Branches to build

## Creating a Build

This can be done when the job is first created to do an intial test, or at any
time you want to get a new report on the passing and failing tests.

1.  Go to https://ci.metaltoad.com

2.  Click on your project

3.  Click "Build Now"

4.  Click "console output" as the build is created

## Configuring Automatic Builds

1.  In Github, go to the project's Settings page

2.  Click on Webhooks & Services

3.  Click "Add service"

4.  Type "Jenkins" and select the "Jenkins (Git plugin)"

5.  Scroll down and enter "https://ci.metaltoad.com/" for the Jenkins url

6.  Click "Add service"

# Writing New Step Definitions

TODO

## Internal Methods

These methods should only be called from within the FeatureContext.php file and
never in a *.feature file.

- userPush : Use this method at the beginning of a step definition that will
  need to login as a different user to perform tasks.
- userPop : Use this method at the end of a step definition that has used
  userPush so that we return to the previously logged in user.
- newNode : Use this method to create a new node of a given type without having
  the browser go to the node/add page and fill out the form. This method returns
  the new node so that you can use it in later steps within your step definition.
  See also Fixtures
- transitionContent : use this method to force a node to a certain workflow state.
  This should be used with newNode.

## Fixtures

Fixtures are used to provide some data for testing. These can also help speed up
tests because we don't need to fill out a node add form when we just want to
test if a node is in a given state, can we do something.

Currently only one fixture per content type is created. You can export new
fixtures from entities on your local system by using the entity-fixture.php
script. See comment for usage.

If you want to alter specific fields in a new step definition, you can set values
in the `$this->fixtureData['nodes'][$node->type]` array before calling newNode().
