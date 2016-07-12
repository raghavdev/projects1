(function($) {
Drupal.behaviors.formAlert = {
  attach: function (context, settings) {
    $("#editableviews-entity-form-products").areYouSure( {'message':"Your changes haven't been saved. You can save them by staying on this page and clicking on one of the save buttons at the bottom."} );
    $('.error').parents('form').addClass('dirty');
    $('body').once('firsttimeonly', function() {
      $(document).ajaxComplete(function(event, request, settings2) {
        if(settings2.url.substr(0,19) === '/unfi_product/ajax/' || settings2.url.substr(0,10) === '/file/ajax') {
          $("#editableviews-entity-form-products").addClass('dirty');
        }
      });
    });
  }
};
})(jQuery);

(function($) {
Drupal.behaviors.workflowButtons = {
  attach: function (context, settings) {
    var sid = $('#edit-workflow input[name="workflow_sid"]').val();
    $('#edit-' + sid).addClass('current-sid');
  }
};
})(jQuery);

// Add Chosen library
// For editable views - add 'chosen' class to field (choose the field that creates the td in a table)
// Will change first 'select' element in field to Chosen box
(function($) {
    Drupal.behaviors.chosenSelect = {
        attach: function (context, settings) {
            $('.chosen').find('select:first-of-type').addClass('chosen-select');
            $('.chosen-select').chosen();
        }
    };
})(jQuery);
