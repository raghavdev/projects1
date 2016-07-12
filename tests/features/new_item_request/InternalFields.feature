@api
Feature: UNFI Internal fields
  As a UNFI employee
  I want to be able to see and edit internal fields

  Scenario Outline: UNFI Employee can Edit Internal Fields
    Given there's a new item request in "<state>"
    And I am logged in as a user with the "<role>" role
    When I search for Request Items with the workflow filter set to "<state>"
    And I view the new item request
    And I click "Edit" in the "tab" region
    Then I should be able to edit the UNFI Internal fields

    Examples:
      |state|role|
      |Item Specialist review|Item Specialist|
      |SRM Review|SRM|
      |RCM Review|RCM|
      |Final Review|NIR Coder|
      |Pending UBS Systems Input|NIR Coder|

  Scenario Outline: UNFI Employee can View Internal Fields
    Given there's a new item request in "<state>"
    And I am logged in as a user with the "<role>" role
    When I search for Request Items with the workflow filter set to "<state>"
    And I view the new item request
    Then I should see the UNFI Internal fields

    Examples:
      |state|role|
      |Item Specialist review|Item Specialist|
      |SRM Review|SRM|
      |RCM Review|RCM|
      |Final Review|NIR Coder|
      |Pending UBS Systems Input|NIR Coder|

  Scenario: Supplier Cannot Access Internal Fields when Creating a New Item Request
    Given I am logged in as a user with the "Supplier" role
    And I belong to a "supplier" group as a "member"
    When I click "New item request" in the "top nav" region
    Then I should not be able to edit the UNFI Internal fields

  Scenario: Supplier Cannot Edit Internal Fields
    Given I am logged in as a user with the "Supplier" role
    And I belong to a "supplier" group as a "member"
    And there's a new item request in "Draft"
    When I click "Edit" in the "tab" region
    Then I should not be able to edit the UNFI Internal fields

  Scenario Outline: Supplier Cannot View Internal Fields
    Given I am logged in as a user with the "Supplier" role
    And I belong to a "supplier" group as a "member"
    And there's a new item request in "<state>"
    Then I should not see the UNFI Internal fields

    Examples:
      |state|
      |Draft|
      |Item Specialist review|
      |SRM Review|
      |RCM Review|
      |Final Review|
      |Pending UBS Systems Input|
      |Archived|
      |Declined|

