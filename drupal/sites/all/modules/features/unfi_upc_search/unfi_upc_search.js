// Using the closure to map jQuery to $.
(function ($) {

// Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.unfi_upc_search = {
    attach: function (context, settings) {
      jQuery('tbody .views-field-field-unit-upc, tbody .views-field-field-case-upc, tbody .views-field-field-pack-upc').each(function () {
        var upcSan = '';
        var upc = jQuery(this).html().trim();
        if(upc.length == 12) {
          upcSan = upc.substr(0, 1) + ' ' + upc.substr(1, 5) + ' ' + upc.substr(5, 11) + ' ' + upc.substr(11);
        }
        if(upc.length == 13) {
          upcSan = upc.substr(0, 2) + ' ' + upc.substr(2, 6) + ' ' + upc.substr(6, 12) + ' ' + upc.substr(12);
        }
        if(upc.length == 14) {
          upcSan = upc.substr(0, 3) + ' ' + upc.substr(3, 7) + ' ' + upc.substr(7, 13) + ' ' + upc.substr(13);
        }
        jQuery(this).html(upcSan)
        console.log(upcSan);
      })
    }
  };

}(jQuery));