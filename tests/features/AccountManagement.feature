@api
Feature: Basic account management
  In order to access the system
  As a user
  I need to be able to log in and edit my account settings

  Scenario: user log in
    Given I am logged in as a user with the "authenticated user" role
    Then I should see the link "Log out"
