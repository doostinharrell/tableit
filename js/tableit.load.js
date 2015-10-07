(function($) {

    // Behavior to load tableit
    Drupal.behaviors.tableit = {
        attach: function(context, settings) {
            var selectors = settings.tableit.selectors;
            $(selectors, context).tableit();
        }
    };

}(jQuery));
