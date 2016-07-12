<?php

use Drupal\DrupalExtension\Context\DrupalContext;
use Drupal\Component\Utility\Random;
use Drupal\Driver\DrupalDriver;
use Drupal\DrupalExtension\Event\EntityEvent;

use Behat\MinkExtension\Context\MinkContext;

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Context\Step\Given,
    Behat\Behat\Context\Step\When,
    Behat\Behat\Context\Step\Then,
    Behat\Behat\Exception\PendingException;

use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;

use Behat\Mink\Element\NodeElement;

/**
 * Features context.
 */
class FeatureContext extends DrupalContext {

  public function __construct() {
    /**
     * Array of partial user objects.
     * @var array
     */
    $this->userStack = array();
    $this->fieldGroups = array();
    /**
     * Array of node urls.
     * @var array
     *   An array with node type as the key and url as the value.
     *   Example:
     *     array('pickup location' => 'node/424')
     */
    $this->stashedNodes = array();
    $this->stashedGroups = array();
    $this->stashedUsers = array();
    $this->stashedMemberships = array();
    /**
     * An array of temporary fixture data.
     *
     * This data is used when the next node of the given type is created and
     * then it is emptied. Currently only supports nodes, but should be extended
     * to support other entity types as well.
     *
     * @var array
     *   Example:
     *     array(
     *       'nodes' => array(
     *         'new_item_request' => array(
     *           'field_name' => array(
     *             'value' => 'Example',
     *           ),
     *         ),
     *       ),
     *     );
     *
     * @see addNodeFixtureData()
     */
    $this->fixtureData = array();
    /**
     * An array of more permanent fixture data.
     *
     * This data is used as the defaults for every node created of the given
     * type. By default this is populated from json files. You can override
     * these in individual step definitions by using fixtureData.
     *
     * @var array
     *   Example:
     *     array(
     *       'nodes' => array(
     *         'article' => array(
     *           'field_name' => array(
     *             'value' => 'Example',
     *           ),
     *         ),
     *       ),
     *     );
     *
     * @see addNodeFixtureData()
     */
    $this->defaultFixtureData = array();
  }

  /* ! Algorithms */

  /**
   * Dijkstra algorithm.
   *
   * @see http://en.wikipedia.org/wiki/Dijkstra's_algorithm#Pseudocode
   */
  public function dijkstra(array $g, $start, $end = NULL) {
    $dist[$start] = 0; // dist[source]
    $unvisited = array(); // Q
    foreach ($g as $vertex => $children) {
      if ($vertex != $start) {
        $dist[$vertex] = PHP_INT_MAX; // Initial distance set to infinity
        $previous[$vertex] = NULL;
      }
      $unvisited[] = $vertex;
    }

    while (count($unvisited)) {
      $minDist = PHP_INT_MAX;
      $minVertex = NULL;
      // $minVertex = u; vertex in Q with min dist[u]
      foreach ($unvisited as $vertex) {
        if ($dist[$vertex] < $minDist) {
          $minVertex = $vertex;
          $minDist = $dist[$vertex];
        }
      }

      if ($minVertex === NULL) {
        break;
      }
      $key = array_search($minVertex, $unvisited);
      unset($unvisited[$key]); // remove u from Q

      foreach ($g[$minVertex] as $child => $len) { // $child = v
          $alt = $dist[$minVertex] + $len;
          if ($alt < $dist[$child]) {
            $dist[$child] = $alt;
            $previous[$child] = $minVertex;
          }
      }
    }
    return array($dist, $previous);
  }

  /**
   * Get shortest path using Dijkstra algorithm.
   *
   * @see $this->dijkstra()
   */
  public function shortestPath(array $g, $start, $end) {
    list($d, $p) = $this->dijkstra($g, $start, $end);
    $path = array();
    while (TRUE) {
      $path[] = $end;
      if ($end == $start) {
        break;
      }
      $end = $p[$end];
    }

    return array_reverse($path);
  }

  /* ! Generic element methods */

  /**
   * Return an element from the current page with the given text.
   *
   * @throws \Exception
   *   If element cannot be found.
   *
   * @param string $text
   *   The text of the element to return.
   * @param array $tags
   *   An array of tags to look for. Defaults to h1 - h6.
   * @param NodeElement $element
   *   A parent element to find the child element in. Defaults to the page.
   *
   * @return NodeElement|NULL
   */
  public function getElementWithText($text, $tags = array(), NodeElement $element = NULL) {
    if (empty($tags)) {
      $tags = array('h1', 'h2', 'h3', 'h4', 'h5', 'h6');
    }
    if ($element === NULL) {
      $element = $this->getSession()->getPage();
    }
    foreach ($tags as $tag) {
      $results = $element->findAll('css', $tag);
      foreach ($results as $result) {
        if ($result->getText() == $text) {
          return $result;
        }
      }
    }
    throw new \Exception(sprintf("The text '%s' was not found in any element on the page %s", $text, $this->getSession()->getCurrentUrl()));
  }

  /* ! Form methods */

  /**
   * Get a field group by heading. Possibly within a region.
   */
  public function findFieldGroup($heading, $region) {
    $fieldGroupId = $heading . ':' . $region;
    if (!isset($this->fieldGroups[$fieldGroupId])) {
      $parent = NULL;
      if (!empty($region)) {
        $parent = $this->getRegion($region);
      }
      $headingObject = $this->getElementWithText($heading, NULL, $parent);
      $this->fieldGroups[$fieldGroupId] = $headingObject->getParent();
    }
    return $this->fieldGroups[$fieldGroupId];
  }

  /**
   * @When /^I check the "([^"]*)" radio button$/
   */
  public function iCheckTheRadioButton($radioLabel) {
    $radioButton = $this->getSession()->getPage()->findField($radioLabel);
    if (null === $radioButton) {
      throw new Exception("Cannot find radio button " . $radioLabel);
    }
    $value = $radioButton->getAttribute('value');
    $this->getSession()->getDriver()->click($radioButton->getXPath());
  }

  /**
   * @When /^(?:|I )select "(?P<option>(?:[^"]|\\")*)" from "(?P<select>(?:[^"]|\\")*)" in the "(?P<region>[^"]*)"(?:| region)$/
   */
  public function iSelectOptionFromElementInRegion($option, $select, $region) {
    $option = $this->fixStepArgument($option);
    $select = $this->fixStepArgument($select);
    $regionObj = $this->getRegion($region);
    $regionObj->selectFieldOption($select, $option);
  }

  /**
   * @When /^(?:|I )additionally select "(?P<option>(?:[^"]|\\")*)" from "(?P<select>(?:[^"]|\\")*)" in the "(?P<region>[^"]*)"(?:| region)$/
   */
  public function iAdditionallySelectOptionFromElementInRegion($option, $select, $region) {
    $option = $this->fixStepArgument($option);
    $select = $this->fixStepArgument($select);
    $regionObj = $this->getRegion($region);
    $regionObj->selectFieldOption($select, $option, true);
  }

  /**
   * @When /^(?:|I )select "(?P<option>(?:[^"]|\\")*)" from "(?P<select>(?:[^"]|\\")*)" for "(?P<heading>(?:[^"]|\\")*)"(?:| in the "(?P<region>[^"]*)"(?:| region))$/
   */
  public function iSelectOptionForFieldInGroup($option, $select, $heading, $region = NULL) {
    $option = $this->fixStepArgument($option);
    $select = $this->fixStepArgument($select);
    $heading = $this->fixStepArgument($heading);
    $parent = NULL;

    $this->findFieldGroup($heading, $region)->selectFieldOption($select, $option);
  }

  /**
   * @When /^(?:|I )additionally select "(?P<option>(?:[^"]|\\")*)" from "(?P<select>(?:[^"]|\\")*)" for "(?P<heading>(?:[^"]|\\")*)"(?:| in the "(?P<region>[^"]*)"(?:| region))$/
   */
  public function iAdditionallySelectOptionForFieldInGroup($option, $select, $heading, $region = NULL) {
    $option = $this->fixStepArgument($option);
    $select = $this->fixStepArgument($select);
    $heading = $this->fixStepArgument($heading);
    $parent = NULL;

    $this->findFieldGroup($heading, $region)->selectFieldOption($select, $option, true);
  }

  /**
   * @When /^(?:|I )fill in "(?P<field>(?:[^"]|\\")*)" for "(?P<heading>(?:[^"]|\\")*)" with "(?P<value>(?:[^"]|\\")*)"(?:| in the "(?P<region>[^"]*)"(?:| region))$/
   */
  public function iFillInForFieldGroupWith($field, $heading, $value, $region = NULL) {
    $field = $this->fixStepArgument($field);
    $heading = $this->fixStepArgument($heading);
    $value = $this->fixStepArgument($value);
    $parent = NULL;

    $this->findFieldGroup($heading, $region)->fillField($field, $value);
  }

  /* ! User Handling methods */

  /**
   * Creates and authenticates a user with the given role via Drush.
   */
  public function assertAuthenticatedByRole($role) {
    $this->iAmLoggedInAsAUserWithTheRole('default', $role);
  }

  /**
   * @Given /^I am logged in as a "([^"]*)" user with the "([^"]*)" role$/
   *
   * "who" can be anything - it's a way to generate additional accounts, and refer back to them later.
   */
  public function iAmLoggedInAsAUserWithTheRole($who, $role) {
    // If a role is called for more than once, retrieve the previous account and re-use that one.
    if (isset($this->stashedUsers[$who][$role])) {
      // Only login again if we aren't already logged in as this user
      if ($this->stashedUsers[$who][$role]->name != $this->user->name) {
        $this->user = $this->stashedUsers[$who][$role];
        $this->login();
      }
    }
    else {

      parent::assertAuthenticatedByRole($role);
      $this->stashedUsers[$who][$role] = $this->user;
    }
  }

  /**
   * Overrides DrupalContext::login().
   *
   * Mostly a copy of that method, but we need to also Accept Terms of Service
   * on first login.
   */
  public function login() {
    // Check if logged in.
    if ($this->loggedIn()) {
      $this->logout();
    }

    if (!$this->user) {
      throw new \Exception('Tried to login without a user.');
    }

    $this->getSession()->visit($this->locatePath('/user'));
    $element = $this->getSession()->getPage();
    $element->fillField($this->getDrupalText('username_field'), $this->user->name);
    $element->fillField($this->getDrupalText('password_field'), $this->user->pass);
    $submit = $element->findButton($this->getDrupalText('log_in'));
    if (empty($submit)) {
      throw new \Exception(sprintf("No submit button at %s", $this->getSession()->getCurrentUrl()));
    }

    // Log in.
    $submit->click();

    // Check for Terms of Service
    $legal = $element->findField('legal_accept');
    if (!empty($legal)) {
      $legal->check();
      $element->checkField('eula');
      $element->pressButton('op');
    }
    // Done, should be logged in now.

    if (!$this->loggedIn()) {
      throw new \Exception(sprintf("Failed to log in as user '%s' with role '%s'", $this->user->name, $this->user->role));
    }
  }

  /**
   * @Given /^userPop$/
   *
   * Internal - don't use this step in Feature files.
   */
  public function userPop() {
    $this->user = array_pop($this->userStack);
    if ($this->user) {
      $this->login();
    }
    else {
      if ($this->loggedIn()) {
        $this->logout();
      }
    }
  }

  /**
   * @Given /^userPush$/
   *
   * Internal - don't use this step in Feature files.
   */
  public function userPush() {
    array_push($this->userStack, $this->user);
  }

  /* ! Group methods */

  /**
   * @Given /^(?:T|t)here(?:\'s| is) a "([^"]*)" group$/
   */
  public function thereIsAGroup($group_type) {
    return $this->thereIsAnotherGroup($group_type, 'default');
  }

  /**
   * @Given /^(?:T|t)here(?:\'s| is) a "([^"]*)" "([^"]*)" group$/
   */
  public function thereIsAnotherGroup($group_key, $group_type) {
    // if the group was previously created, reuse it
    if (isset($this->stashedGroups[$group_key])) {
      return array();
    }

    $this->userPush();
    $this->assertAuthenticatedByRole('administrator');
    $group_name = 'group_' . $group_key . '_' . Random::name();
    $group = $this->newNode('supplier', $group_name);
    // Stash the group node
    $this->stashedGroups[$group_key] = $group;
    // We also need to stash the url to the node
    $this->getSession()->visit($this->locatePath('/node/' . $group->nid));
    $this->stashNodeURL($group_key . ' ' . $group_type);
    $this->userPop();
  }

  /**
   * @Given /^I belong to a "([^"]*)" group as a "([^"]*)"$/
   */
  public function iBelongToTheGroupAsA($group_type, $group_role) {
    return $this->iBelongToAnotherGroupAsA('default', $group_type, $group_role);
  }

  /**
   * @Given /^I belong to a "([^"]*)" "([^"]*)" group as a "([^"]*)"$/
   */
  public function iBelongToAnotherGroupAsA($group_name, $group_type, $group_role) {
    return array(
      new Given("There is a \"$group_name\" \"$group_type\" group"),
      new Given("I belong to the \"$group_name\" group as a \"$group_role\""),
    );
  }

  /**
   * @Given /^I belong to the "([^"]*)" group as a "([^"]*)"$/
   */
  public function iBelongToTheOtherGroupAsA($group_name, $group_role) {
    $username = $this->user->name;

    // if the group was previously created, reuse it
    if (!isset($this->stashedMemberships[$group_name][$username])) {
      $this->stashedMemberships[$group_name][$username] = 'group_' . $group_name . '_' . Random::name();

      $this->userPush();
      $this->iAmLoggedInAsAUserWithTheRole('programmer', 'Programmer');
      $this->visit('/admin/content');
      $this->clickLink($this->stashedGroups[$group_name]->title);
      $this->assertRegionLinkFollow('Group', 'tab');
      $this->clickLink('Add people');

      // If role is not member, grant them that role
      if ($group_role != 'member') {
        $this->checkOption($group_role);
      }

      $this->fillField('User name', $username);
      $this->pressKey('Esc', 'User name');
      $this->pressButton('Add users');
      $this->assertPageContainsText('has been added to the group');
      $this->userPop();
    }
  }

  /* ! New Item Request methods */

  /**
   * @When /^I create a new item request$/
   */
  public function iCreateANewItemRequest() {
    $this->newItemRequest = 'item_request_' . Random::name();
    $cwd = getcwd();

    return array(
      new Given('I click "New item request" in the "top nav" region'),
      new Given("I fill in \"title\" with \"$this->newItemRequest\""),
      new Given("I attach the file \"$cwd/images/300x200.jpg\" to \"files[field_request_item_und_form_field_primary_image_und_0]\""),
      new Given('I fill in "Description" with "stuff"'),
      new Given('I fill in "Brand" with "BEHAT BRAND NAME"'),
      new Given('I select "Dry Grocery" from "Product Category"'),
      new Given("I attach the file \"$cwd/files/test.xlsx\" to \"files[field_request_item_und_form_field_freight_form_und_0]\""),
      new Given('I fill in "Master Case Cost" for "Freight On Board" with "123.99"'),
      new Given('I fill in "Item Cost" for "Freight On Board" with "12.39"'),
      new Given("I attach the file \"$cwd/files/test.xlsx\" to \"files[field_request_item_und_form_field_pricing_sheet_und_0]\""),
      new Given('I fill in "Item UPC" for "UPC" with "013562300570"'),
      new Given('I fill in "Inner Pack UPC" for "UPC" with "013562300570"'),
      new Given('I fill in "Size" for "Pack and Size" with "12"'),
      new Given('I select "OZ" from "Unit of Measure" for "Pack and Size"'),
      new Given('I fill in "Inner Pack" for "Pack and Size" with "12"'),
      new Given('I fill in "Case Pack" for "Pack and Size" with "12"'),
      new Given('I fill in "Master Case Pack" for "Pack and Size" with "1"'),
      new Given('I select "Box" from "Retail Unit Package Type" for "Specifications"'),
      new Given('I fill in "Height" for "Item" with "12"'),
      new Given('I fill in "Width" for "Item" with "12"'),
      new Given('I fill in "Length" for "Item" with "12"'),
      new Given('I fill in "Height" for "Inner Pack" with "12"'),
      new Given('I fill in "Width" for "Inner Pack" with "12"'),
      new Given('I fill in "Length" for "Inner Pack" with "12"'),
      new Given('I fill in "Height" for "Master Case" with "12"'),
      new Given('I fill in "Width" for "Master Case" with "12"'),
      new Given('I fill in "Length" for "Master Case" with "12"'),
      new Given('I fill in "Weight" for "Master Case" with "12"'),
      new Given('I fill in "Tie" with "1"'),
      new Given('I fill in "High" with "1"'),
      new Given('I select "No Expiration" from "Type of Code Life Dating"'),
      new Given('I select "Ambient" from "Zone" for "Temperature"'),
      new Given('I fill in "Product Shelf Life at Time of Production" with "1"'),
      new Given('I fill in "Guaranteed Shelf Life at Time of UNFI Possession" with "1"'),
      new Given('I select "Guatemala" from "Country" for "Origin"'),
      new Given('I select "Texas" from "State / Providence" for "Origin"'),
      new Given("I attach the file \"$cwd/images/300x200.jpg\" to \"files[field_request_item_und_form_field_product_labels_und_0]\""),
      new Given('I fill in "field_request_item[und][form][field_ingredients][und][0][value]" with "secret"'),
      new Given('I press "Save"'),
      new Then('I should see the "new item request" node'),
    );
  }

  /**
   * @Then /^I should see the new item request$/
   */
  public function iShouldSeeTheNewItemRequest() {
    return array(
      new Then("I should see \"$this->newItemRequest\""),
    );
  }

  /**
   * @Then /^I view the new item request$/
   */
  public function iViewTheNewItemRequest() {
    return array(
      new Then("I should see \"$this->newItemRequest\""),
      new Given("I click \"$this->newItemRequest\""),
    );
  }

  /**
   * @Given /^I edit the new item request$/
   */
  public function iEditTheNewItemRequest() {
    $this->newItemRequest .= ' modified';
    return array(
      new Given('I follow "Edit" in the "tab" region'),
      new Given('I fill in "title" with "' . $this->newItemRequest . '"'),
      new Given('I press "Save"'),
    );
  }

  /**
   * @Given /^I transition the new item request to "([^"]*)"$/
   */
  public function iTransitionTheNewItemRequestTo($state) {
    return array(
      new Given('I visit the dashboard'),
      new Given("I follow \"$this->newItemRequest\""),
      new Given('I follow "Workflow"'),
      new Given("I press \"$state\""),
    );
  }

  /**
   * @Given /^I search for Request Items with the workflow filter set to "([^"]*)"$/
   */
  public function iSearchForRequestItemsWithTheWorkflowFilterSetTo($arg1) {
    return array(
      new Given('I visit "/new-item-requests"'),
      new Given("I select \"$arg1\" from \"edit-sid\""),
      new Given('I press "Apply"'),
    );
  }

  /**
   * @Given /^(?:T|t)here(?:\'s| is) a new item request in "([^"]*)"$/
   */
  public function thereIsNewItemRequestInState($state) {
    $this->newItemRequest = 'item_request_' . Random::name();

    $state_map = $this->getStateMap('request_workflow');

    if (!isset($state_map[$state])) {
      throw new Exception('Unknown workflow state "' . $state . '"');
    }

    $group_key = 'default';
    // If we already have a group.
    if (isset($this->stashedGroups[$group_key])) {
      $group = $this->stashedGroups[$group_key];
    }
    else {
      // Set the group creator to an admin user.
      $this->fixtureData['nodes']['supplier']['uid'] = 1;
      // Otherwise, create a new group.
      $group_name = 'group_' . $group_key . '_' . Random::name();
      $group = $this->newNode('supplier', $group_name);
      $this->stashedGroups[$group_key] = $group;
    }

    // Save current user and then login as a supplier
    $this->userPush();
    $this->assertAuthenticatedByRole('Supplier');

    // Join the group
    $this->iBelongToTheOtherGroupAsA($group_key, 'member');

    // Before we create the New Item Request, we also have to create a Request
    // Item node and set some fixture data for the New Item Request
    $request_item = $this->newNode('request_item', 'request_item_' . Random::name());
    // DrupalContext automatically expands fields into language => delta arrays.
    $this->fixtureData['nodes']['new_item_request']['field_request_item'] = array(
      'target_id' => $request_item->nid,
    );
    $this->fixtureData['nodes']['new_item_request']['og_group_ref'] = array(
      'target_id' => $group->nid,
    );

    // Now we want to go to the new item request node.
    $new_item_request = $this->newNode('new_item_request', $this->newItemRequest);
    $this->transitionContent($new_item_request, $state_map[$state]);

    // Log back in as the user we started with
    $this->userPop();

    $this->getSession()->visit($this->locatePath('/node/' . $new_item_request->nid));
  }

  /**
   * @Given /^I should (|not )be able to edit the new item request$/
   */
  public function iShouldBeAbleToEditTheNewItemRequest($not) {
    return array(
      new Then('I should see "' . $this->newItemRequest . '" in the "page title" region'),
      new Then('I should ' . $not . 'see the link "Edit" in the "tab" region'),
    );
  }

  /**
   * @Then /^other suppliers should not see my new item request$/
   */
  public function otherSuppliersShouldNotSeeMyNewItemRequest() {
    $url = $this->stashedNodes['new item request'];
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new Given('I click "Requests" in the "top nav" region'),
      new Given('I should not see "' . $this->newItemRequest . '"'),
      new Given('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),
      new Given('userPop'),
    );
  }

  /**
   * @Then /^I should (|not )see the UNFI Internal fields$/
   */
  public function seeUNFIInternalSection($not = '') {
    return array(
      new Given('I should ' . $not . 'see "UNFI Internal"'),
      new Given('I should ' . $not . 'see "East Category"'),
      new Given('I should ' . $not . 'see "West Category"'),
      new Given('I should ' . $not . 'see "West Dept"'),
      new Given('I should ' . $not . 'see "West Subheader Catalog"'),
      new Given('I should ' . $not . 'see "Warehouse Group"'),
      new Given('I should ' . $not . 'see "East Brand"'),
      new Given('I should ' . $not . 'see "West Brand"'),
      new Given('I should ' . $not . 'see "National Selling Pack"'),
    );
  }

  /**
   * @Then /^I should (|not )be able to edit the UNFI Internal fields$/
   */
  public function editUNFIInternalSection($not = '') {
    // When we should not be able to edit, we should only need to check that
    // the fields aren't on the page.
    if (!empty($not)) {
      return $this->seeUNFIInternalSection($not);
    }

    return array(
      new Given('I should see "UNFI Internal"'),
      new Given('I select "FROZEN" from "East Category"'),
      new Given('I select "- F1403 : ENTREES & SIDES" from "West Category"'),
      new Given('I select "723 : Frozen Foods" from "West Dept"'),
      new Given('I select "X : ENTREES/PREPARED FOODS" from "West Subheader Catalog"'),
      new Given('I select "Freezer" from "Warehouse Group"'),
      new Given('I fill in "East Brand" with "ESTBRN"'),
      new Given('I fill in "West Brand" with "WEST BRAND"'),
      new Given('I select "Item (EA)" from "National Selling Pack"'),
      new Given('I press "Save"'),
      new Then('I should see "has been updated"'),
    );
  }

  /**
   * @Then /^I should be able to set the RCM Category$/
   */
  public function iShouldBeAbleToSetTheRcmCategory() {
    return array(
      new Given('I follow "Edit" in the "tab" region'),
      new When('I select "GROCERY" from "RCM Category"'),
      new When('I press "Save"'),
      new Then('I should see "has been updated"'),
    );
  }

  /* ! Workflow methods */

  /**
   * Get the states for a given workflow.
   */
  public function getStateMap($name) {
    // Maps states in tests with the actual state ids.
    $state_map = array(
      'request_workflow' => array(
        '(creation)' => 1,
        'Draft' => 2,
        'Declined' => 33,
        'Item Specialist review' => 16,
        'SRM Review' => 3,
        'RCM Review' => 4,
        'Final Review' => 5,
        'Approved' => 6,
        'Pending UBS Systems Input' => 34,
        'Pending WBS Systems Input' => 35,
        'Archived' => 7,
      ),
    );

    return isset($state_map[$name]) ? $state_map[$name] : array();
  }

  /**
   * Get a Workflow transition graph for a given workflow.
   *
   * This is used to build a graph for the Dijkstra algorithm.
   *
   * @see  transitionContent().
   */
  public function getWorkflowStateGraph($wid) {
    $graph = array();

    $query = db_select('workflow_states', 's');
    $query->innerJoin('workflow_transitions', 't', 's.sid = t.sid AND t.sid != t.target_sid');
    $query->addField('t', 'target_sid');
    $result = $query
      ->fields('s', array('sid'))
      ->condition('s.wid', $wid)
      ->orderBy('s.weight')
      ->orderBy('s.state')
      ->execute();
    foreach ($result as $state) {
      $graph[$state->sid][$state->target_sid] = 1;
    }

    return $graph;
  }

  /**
   * Transition content.
   *
   * @param object $node
   *   A node object.
   * @param int $target_sid
   *   The target WorkflowState id.
   */
  public function transitionContent($node, $target_sid) {
    if (isset($node->nid)) {
      $driver = $this->getDriver();

      if (!($driver instanceof DrupalDriver)) {
        throw new Exception('Can only transition content using the DrupalDriver.');
      }
      if ($node->type == 'new_item_request') {
        $states = array_flip($this->getStateMap('request_workflow'));
      }

      if (empty($states)) {
        throw new Exception('No known states for node type: ' . $node->type);
      }

      if (!isset($states[$target_sid])) {
        throw new Exception('Unknown state ' . $target_sid);
      }

      // In order to force a workflow transition, we have to be user 1
      global $user;
      $old_user = $user;
      $user = user_load(1);

      try {
        $current_workflow_state = workflow_state_load_single(workflow_node_current_state($node, 'node'));
        $old_sid = $current_workflow_state->sid;

        $graph = $this->getWorkflowStateGraph($current_workflow_state->wid);
        $state_path = $this->shortestPath($graph, $old_sid, $target_sid);
        foreach ($state_path as $temp_sid) {
          if ($temp_sid != $old_sid) {
            $time = time();

            $comment = 'BEHAT FORCED TRANSITION FROM ' . $states[$old_sid] . ' TO ' . $states[$temp_sid];
            $transition = new WorkflowTransition();
            $transition->setValues('node', $node, '', $old_sid, $temp_sid, 1, $time, $comment);
            $new_sid = workflow_execute_transition('node', $node, '', $transition, TRUE);

            $node->workflow = $new_sid;
            $node->workflow_stamp = $time;
          }

          $current_workflow_state = workflow_state_load_single(workflow_node_current_state($node, 'node'));
          $old_sid = $current_workflow_state->sid;
        }
      }
      catch (Exception $e) {
        // Make sure user is reset even if an exception is thrown.
        $user = $old_user;
        throw $e;
      }

      // Go back to the previous user
      $user = $old_user;

      // If node is not in target state we need to throw an exception
      $current_workflow_state = workflow_state_load_single(workflow_node_current_state($node, 'node'));
      if ($target_sid != $current_workflow_state->sid) {
        throw new Exception('Failed to transition content to ' . $states[$target_sid]);
      }
    }
  }

  /* ! Generic node methods */

  /**
   * @beforeNodeCreate
   */
  public function addNodeFixtureData(EntityEvent $event) {
    $node = $event->getEntity();
    $context = $event->getContext();
    $cwd = getcwd();

    $uid = 0;
    if (isset($context->user->uid)) {
      $uid = $context->user->uid;
    }

    // Load default fixture data from json files.
    if (!isset($this->defaultFixtureData['nodes'][$node->type])) {
      if (file_exists($cwd . '/fixtures/node/' . $node->type . '.json')) {
        try {
          $json = file_get_contents($cwd . '/fixtures/node/' . $node->type . '.json');
          $data = json_decode($json, TRUE);
          if (is_array($data) && !empty($data)) {
            $this->defaultFixtureData['nodes'][$node->type] = $data;
          }
        }
        catch (Exception $e) {
          throw $e;
        }
      }

      // If no json fixture data was provided, prepopulate fixture data with some sane defaults
      if (!isset($this->defaultFixtureData['nodes'][$node->type])) {
        $this->defaultFixtureData['nodes'][$node->type] = array(
          'uid' => $uid, // default to the current user
          'language' => 'und', // default to language none
        );
      }
    }

    // Populate the current fixture data with the defaults.
    // The current fixture data can be set in other steps before the one that
    // creates this node. Once the node is created this fixtureData is reset.
    // Whereas the defaultFixtureData is used to populate some defaults for
    // every node create.
    if (!isset($this->fixtureData['nodes'][$node->type])) {
      $this->fixtureData['nodes'][$node->type] = array();
    }
    $this->fixtureData['nodes'][$node->type] += $this->defaultFixtureData['nodes'][$node->type];

    // Set the node data based on the fixture data.
    //$node = (object) ((array) $node + $this->fixtureData['nodes'][$node->type]);
    foreach ($this->fixtureData['nodes'][$node->type] as $key => $val) {
      if (!isset($node->{$key})) {
        $node->{$key} = $val;
      }
    }

    // Reset current fixture data so that the next node created doesn't get the
    // same values.
    $this->fixtureData['nodes'][$node->type] = array();
  }

  /**
   * Helper to create nodes without going to the new node.
   *
   * This is like DrupalContext::createNode() except doesn't go to the new node
   * and returns the node object. It also sets the $node->nid when passing to
   * afterNodeCreate; this is not standard with DrupalContext::createNode(), so
   * if you need this in your afterNodeCreate, you should check that $node->nid
   * is set.
   *
   * @return the node object
   */
  public function newNode($type, $title) {
    $node = (object) array(
      'title' => $title,
      'type' => $type,
      'body' => Random::string(255),
    );
    $this->dispatcher->dispatch('beforeNodeCreate', new EntityEvent($this, $node));
    $saved = $this->getDriver()->createNode($node);
    // I want the nid in my afterNodeCreate callbacks.
    if (isset($saved->nid)) {
      $node->nid = $saved->nid;
    }
    $this->dispatcher->dispatch('afterNodeCreate', new EntityEvent($this, $node));
    $this->nodes[] = $saved;

    return $saved;
  }

  /**
   * @Then /^I should see the "([^"]*)" node$/
   */
  public function iShouldSeeTheNode($label) {
    $this->assertSession()->pageTextContains('has been created');
    // The destination parameter can break this because we will not be on the
    // node that was created. In order to work around this, unfortunately I
    // think we should update our tests to visit that node and then stash the
    // node url using stashNodeURL().
    $this->stashNodeURL($label);
  }

  /**
   * @Given /^stashNode "([^"]*)"$/
   *
   * Internal - don't use this step in Feature files.
   */
  public function stashNodeURL($label) {
    $this->stashedNodes[$label] = $this->getSession()->getCurrentUrl();
  }

  /* ! Goto specifc page */

  /**
   * @When /^I visit the dashboard$/
   */
  public function iVisitTheDashboard() {
    return array(
      new When('I go to the homepage'),
    );
  }

  /**
   * @Then /^I should see "([^"]*)" within "([^"]*)" seconds$/
   */
  public function iShouldSeeWithinSeconds($text, $time) {
    $this->getSession()->wait($time * 1000,
      "jQuery(':contains(" . $text . ")').length > 0"
    );
    $this->assertSession()->pageTextContains($text);
  }

  /* ! Supplier methods */

  /**
   * @When /^I visit the "([^"]*)" supplier detail page$/
   */
  public function iVisitTheSupplierDetailPage($supplier_name) {
    $supplier_url = $this->stashedNodes[$supplier_name.' supplier'];
    return array(
      new When('I visit "' . $supplier_url . '"'),
    );
  }

  /**
   * @Given /^other suppliers should not see my group$/
   */
  public function otherSuppliersShouldNotSeeMyGroup() {
    $url = $this->stashedNodes['default supplier'];
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new Given('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),

      new Given('userPop'),
    );
  }

  /**
   * @When /^I create a supplier contact for the "([^"]*)" supplier$/
   */
  public function iCreateASupplierContact($group_name) {

    $this->contact_first_name = Random::name();
    $this->contact_last_name = Random::name();

    return array(
      new Given('I visit the "' . $group_name . '" supplier detail page'),
      new Given('I follow "Add a new contact"'),
      new Given("I fill in \"First Name\" with \"$this->contact_first_name\""),
      new Given("I fill in \"Last Name\" with \"$this->contact_last_name\""),
      new Given('I press "Save"'),
      new Then('I should see the "supplier contact" node'),
    );
  }

  /**
   * @Then /^I should see the supplier contact$/
   */
  public function iShouldSeeTheSupplierContact() {
    return array(
      new Then("I should see \"$this->contact_first_name\""),
      new Then("I should see \"$this->contact_last_name\""),
    );
  }

  /**
   * @Given /^I edit the supplier contact$/
   */
  public function iEditTheSupplierContact() {
    return array(
      new Given('I follow "Edit" in the "tab" region'),
      new Given('I fill in "First Name" with "modified"'),
      new Given('I fill in "Last Name" with "modified"'),
      new Given('I press "Save"')
    );
  }

  /**
   * @Given /^I delete the supplier contact$/
   */
  public function iDeleteTheSupplierContact() {
    return array(
      new Given('I follow "Edit" in the "tab" region'),
      // NOTE: there are 2 buttons, on different pages, both with the label of "Delete"
      new Given('I press "Delete"'),  // on the edit page - takes you to the delete confirmation page
      new Given('I press "Delete"')   // on the delete confirmation page - does the actual deletion
    );
  }

  /**
   * @Then /^I should not see the supplier contact$/
   */
  public function iShouldNotSeeTheSupplierContact() {
    return array(
      new Then("I should not see \"$this->contact_first_name\""),
      new Then("I should not see \"$this->contact_last_name\""),
    );
  }

  /**
   * @Then /^SRMs should be able to edit my supplier contact$/
   */
  public function srmsShouldBeAbleToEditMyContact() {
    $edit_url = $this->stashedNodes['supplier contact'].'/edit';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "SRM" user with the "SRM" role'),
      // NOTE: No group membership is created here. SRM can see/edit this without being a member.
      new Given('I visit the "first" supplier detail page'),
      new Given('I should not see "not authorized"'),
      new Given('I should see "'.$this->contact_first_name.'"'),
      new Given('I should see "'.$this->contact_last_name.'"'),
      new Given('I visit "' . $edit_url . '"'),
      new Given('I fill in "First Name" with "edited by SRM"'),
      new Given('I press "Save"'),
      new Then('I should see "has been updated"'),
      new Given('userPop'),
    );
  }

  /**
   * @Given /^other suppliers should not be able to edit my supplier contact$/
   */
  public function otherSuppliersShouldNotBeAbleToEditMySupplierContact() {
    $url = $this->stashedNodes['supplier contact'].'/edit';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new Given('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),
      new Given('userPop'),
    );
  }

  /**
   * @Given /^other suppliers should not be able to delete my supplier contact$/
   */
  public function otherSuppliersShouldNotBeAbleToDeleteMySupplierContact() {
    $url = $this->stashedNodes['supplier contact'].'/delete';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new When('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),
      new Given('userPop'),
    );
  }

  /* ! Pickup location methods */

  /**
   * @When /^I create a pickup location for the "([^"]*)" supplier$/
   */
  public function iCreateAPickupLocation($group_name) {

    $this->pickup_location_name = 'pickup location '.Random::name();

    return array(
      new Given('I visit the "' . $group_name . '" supplier detail page'),
      new Given('I follow "Add new Pick Up Location"'),
      new Given("I fill in \"Pick up Warehouse Name\" with \"$this->pickup_location_name\""),
      new Given("I fill in \"Address 1\" with \"123 Fake St.\""),
      new Given("I fill in \"City\" with \"Nowhere\""),
      new Given("I fill in \"State\" with \"OR\""),
      new Given("I fill in \"ZIP Code\" with \"97201\""),
      new Given("I fill in \"Hours\" with \"9-5\""),
      new Given('I press "Save"'),
      new Then('I should see "has been created"'),
      new Given('I click "' . $this->pickup_location_name . '"'),
      new Then('stashNode "pickup location"'),
    );
  }

  /**
   * @Then /^I should see the pickup location$/
   */
  public function iShouldSeeThePickupLocation() {
    return array(
      new Then("I should see \"$this->pickup_location_name\""),
    );
  }

  /**
   * @When /^I edit the pickup location$/
   */
  public function iEditThePickupLocation() {
    $this->pickup_location_name .= ' modified';
    $url = $this->stashedNodes['pickup location'].'/edit';
    return array(
      new Given('I visit "' . $url . '"'),
      new Given('I fill in "Pick up Warehouse Name" with "' . $this->pickup_location_name . '"'),
      new Given('I press "Save"')
    );
  }

  /**
   * @When /^I delete the pickup location$/
   */
  public function iDeleteThePickupLocation() {
    $url = $this->stashedNodes['pickup location'].'/delete';
    return array(
      new Given('I visit "' . $url . '"'),
      new Given('I press "Delete"')
    );
  }

  /**
   * @Then /^SRMs should be able to edit my pickup location$/
   */
  public function srmsShouldBeAbleToEditMyPickupLocation() {
    $edit_url = $this->stashedNodes['pickup location'].'/edit';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "SRM" user with the "SRM" role'),
      // NOTE: No group membership is created here. SRM can see/edit this without being a member.
      new Given('I visit the "first" supplier detail page'),
      new Given('I should not see "not authorized"'),
      new Given('I should see "'.$this->pickup_location_name.'"'),
      new Given('I visit "' . $edit_url . '"'),
      new Given('I fill in "Warehouse name" with "modified by SRM"'),
      new Given('I press "Save"'),
      new Then('I should see "has been updated"'),
      new Given('userPop'),
    );
  }

  /**
   * @Then /^other suppliers should not be able to edit my pickup location$/
   */
  public function otherSuppliersShouldNotBeAbleToEditMyPickupLocation() {
    $url = $this->stashedNodes['pickup location'].'/edit';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new Given('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),
      new Given('userPop'),
    );
  }

  /**
   * @Given /^other suppliers should not be able to delete my pickup location$/
   */
  public function otherSuppliersShouldNotBeAbleToDeleteMyPickupLocation() {
    $url = $this->stashedNodes['pickup location'].'/delete';
    return array(
      new Given('userPush'),
      new Given('I am not logged in'),
      new Given('I am logged in as a "second" user with the "Supplier" role'),
      new Given('I belong to a "second" "supplier" group as a "member"'),
      new When('I visit "' . $url . '"'),
      new Given('I should see "not authorized"'),
      new Given('userPop'),
    );
  }

}
