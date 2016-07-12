@api
Feature: SRM review
  In order to ensure accurate supplier information
  As a Supplier Relationship Manager (SRM)
  I need to review new item requests

  Background:
    Given I am logged in as a user with the "SRM" role
    And I belong to a "supplier" group as a "member"

  Scenario Outline: Read only new item request
    Given there's a new item request in "<state>"
    Then I should not be able to edit the new item request

    Examples:
      |state|
      |Draft|
      |RCM Review|
      |Item Specialist review|
      |Final Review|
      |Approved|
      |Pending UBS Systems Input|
      |Archived|
      |Declined|

  Scenario: Read only new item request
    Given there's a new item request in "Draft"
    And I search for Request Items with the workflow filter set to "Draft"
    Then I view the new item request
    But I should not be able to edit the new item request

  Scenario: Approve a new item request
    Given there's a new item request in "SRM Review"
    When I transition the new item request to "RCM Review"
    And I search for Request Items with the workflow filter set to "RCM Review"
    Then I should see the new item request

  Scenario: Reject a new item request
    Given there's a new item request in "SRM Review"
    When I transition the new item request to "Declined"
    And I search for Request Items with the workflow filter set to "Declined"
    Then I should see the new item request

  Scenario: Send a new item request back to Item Specialist
    Given there's a new item request in "SRM Review"
    When I transition the new item request to "Item Specialist review"
    And I search for Request Items with the workflow filter set to "Item Specialist review"
    Then I should see the new item request

  Scenario: Edit a new item request
    Given there's a new item request in "SRM Review"
    When I edit the new item request
    Then I should see the text "has been updated"
