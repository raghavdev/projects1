<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php

// Fetch all people linked to SRMS role
if (!empty($output)) {
    $srmsResult = db_query("SELECT users.name AS users_name, users.uid AS uid, users.created AS users_created, 'user' AS field_data_og_user_node_user_entity_type
FROM 
{users} users
LEFT JOIN {og_membership} og_membership_users ON users.uid = og_membership_users.etid AND og_membership_users.entity_type = 'user'
INNER JOIN {users_roles} users_roles ON users.uid = users_roles.uid
WHERE (( (og_membership_users.gid = $output ) )AND(( (users.status <> '0') AND (users_roles.rid = '8') )))
ORDER BY users_created DESC
LIMIT 10 OFFSET 0")->fetchAll();
    $userNames = array();
    $i = 1;
    foreach($srmsResult as $user) {
    	if ($i != count($srmsResult)) {
    		$comma = ',';
    	} else {
    		$comma = '';
    	}    	
    	print $user->users_name . $comma;
    	$i++;
    }
}
?>
