@api
Feature: New Item Request
  As a Supplier
  I need to be able to submit new item requests
  So that I can sell new products

  Background:
    Given I am logged in as a user with the "Supplier" role
    And I belong to a "supplier" group as a "member"

  Scenario: Create a draft
    When I create a new item request
    And I visit the dashboard
    Then I should see the new item request

  Scenario: Edit a new item request
    When I create a new item request
    And I edit the new item request
    Then I should see the text "has been updated"

  Scenario: Submit a new item request
    When I create a new item request
    And I transition the new item request to "Submit for Review"
    And I search for Request Items with the workflow filter set to "Item Specialist review"
    Then I view the new item request
    But I should not be able to edit the new item request

  Scenario: Group privacy
    When I create a new item request
    Then other suppliers should not see my group
    And other suppliers should not see my new item request

  Scenario: Edit Declined requests
    Given there's a new item request in "Declined"
    And I edit the new item request
    Then I should see the text "has been updated"
    And I transition the new item request to "Submit for Review"
