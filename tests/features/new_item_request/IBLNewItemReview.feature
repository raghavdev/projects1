@api @wip
Feature: Inbound Logistics Review
  In order to ensure accurate supplier information
  As Inbound Logistics (IBL)
  I need to review new item requests

  Background:
    Given I am logged in as a user with the "IBL" role

  Scenario Outline: Read only new item request
    Given there's new item request in "<state>"
    And I search for Request Items with the workflow filter set to "<state>"
    Then I should see the new item request
    But I should not be able to edit the new item request

    Examples:
      |state|
      |draft|
      |SRM Review|
      |open review|
      |final review|
      |approved|
      |archived|

  Scenario: Approve a new item request before RCM
    Given there's a new item request in "open review"
    Given "RCM" has not yet confirmed this request
    When I confirm "IBL" has seen this request
    And I search for Request Items with the workflow filter set to "open review"
    Then I should see the new item request

  Scenario: Approve a new item request after RCM
    Given there's a new item request in "open review"
    Given "RCM" has already confirmed this request
    When I confirm "IBL" has seen this request
    And I search for Request Items with the workflow filter set to "final review"
    Then I should see the new item request
