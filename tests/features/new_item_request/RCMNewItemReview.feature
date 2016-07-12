@api
Feature: RCM New Item Review
  As Retail Category Management (RCM)
  I want to review new item requests
  So that I can ensure accurate supplier information

  Background:
    Given I am logged in as a user with the "RCM" role

  Scenario Outline: Read only new item request
    Given there's a new item request in "<state>"
    Then I should not be able to edit the new item request

    Examples:
      |state|
      |Draft|
      |SRM Review|
      |Item Specialist review|
      |Final Review|
      |Approved|
      |Pending UBS Systems Input|
      |Archived|
      |Declined|

  @wip
  Scenario: Approve a new item request before IBL
    Given there's a new item request in "open review"
    Given "IBL" has not yet confirmed this request
    When I confirm "RCM" has seen this request
    And I search for Request Items with the workflow filter set to "open review"
    Then I should see the new item request

  @wip
  Scenario: Approve a new item request after IBL
    Given there's a new item request in "open review"
    Given "IBL" has already confirmed this request
    When I confirm "RCM" has seen this request
    And I search for Request Items with the workflow filter set to "final review"
    Then I should see the new item request

  Scenario: Set the RCM Category
    Given there's a new item request in "RCM Review"
    Then I should be able to set the RCM Category
