(function($) {

  // Behavior to load tableit
  Drupal.behaviors.tableit = {
    attach: function(context, settings) {
      var selectors = settings.tableit.selectors;
      if (selectors.length > 0) {
        $(selectors, context).tableit();
      }
    }
  };

}(jQuery));
