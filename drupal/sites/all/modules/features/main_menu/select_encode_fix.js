(function ($) {
  Drupal.behaviors.correct_ampersand = {
    attach: function(context, settings) {
      //Change &amp;, &#039; and &quot; to &, ' and " in select list options
      $('select option').each(function() {
        var text = $(this).text();
        var replaced = text.replace(/&amp;/g , "&").replace(/&#039;/g , "'").replace(/&quot;/g , '"');
        $(this).text(replaced,'text after');
      });
    }
  }
})
(jQuery);
