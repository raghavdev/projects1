(function ($) {

  /**
   * UNFI Reports Initialization
   *
   * Add an attach method for the module in the Drupal behaviors. Initialize the form.
   */
  Drupal.behaviors.unfi_reports = {
    attach: function(context, settings) {
      $('.region-content', context).once('region-content', function() {
        $('.unfi-reports-custom-range-area').hide();
        $('#edit-range-preset').bind('change', function() {
          if ($(this).val() == 'custom') {
            $('.unfi-reports-custom-range-area').show();
          }
          else {
            $('.unfi-reports-custom-range-area').hide();
          }
        })
      });
    }
  };

})(jQuery);
