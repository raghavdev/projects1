@api
Feature: Pick-up Locations
  In order to manage my company
  As a supplier
  I need to be able to add, edit, and delete pickup locations

  Background:
    Given I am logged in as a user with the "Supplier" role
    Given I belong to a "first" "supplier" group as a "editor"

  Scenario: Pickup location management
    When I create a pickup location for the "first" supplier
    Then I should see the pickup location
    When I visit the "first" supplier detail page
    When I edit the pickup location
    Then I should see the text "has been updated"
    When I delete the pickup location
    Then I should see the text "has been deleted"

  Scenario: Group privacy
    When I create a pickup location for the "first" supplier
    Then SRMs should be able to edit my pickup location
    Then other suppliers should not be able to edit my pickup location
    And other suppliers should not be able to delete my pickup location
