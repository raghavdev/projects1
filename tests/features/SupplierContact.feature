@api
Feature: Supplier Contacts
  In order to manage my company
  As a supplier
  I need to be able to add, edit, and delete supplier contacts

  Background:
    Given I am logged in as a user with the "Supplier" role
    Given I belong to a "first" "supplier" group as a "member"

  Scenario: Contact management
    When I create a supplier contact for the "first" supplier
    Then I should see the supplier contact
    When I edit the supplier contact
    Then I should see the text "has been updated"
    When I delete the supplier contact
    Then I should see the text "has been deleted"

  Scenario: Group privacy
    When I create a supplier contact for the "first" supplier
    Then SRMs should be able to edit my supplier contact
    Then other suppliers should not be able to edit my supplier contact
    And other suppliers should not be able to delete my supplier contact
