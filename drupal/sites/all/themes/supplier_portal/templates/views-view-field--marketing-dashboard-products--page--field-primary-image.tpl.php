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

global $base_url;
if (isset($row->field_field_primary_image) && !empty($row->field_field_primary_image)) {
$upcItem = str_replace('-', '', $row->field_field_unit_upc[0]['raw']['value']);
foreach ($row->field_field_primary_image as $productImage) {
	$imageName = explode('.', $productImage['raw']['filename']);
	$imageExtension = $imageName[1];
	$imageUrl = str_replace('public:/', 'sites/default/files', $productImage['raw']['uri']);
	$imageUrl = $base_url. '/' . $imageUrl;
	$productImageUrl = 'unfi-product-image-download/'. $upcItem .'/'. $productImage['raw']['filename'];
	print '<a href="'.$productImageUrl.'"><img src="/sites/all/themes/supplier_portal/images/unf-image.png"></a>';
	}
}
?>
