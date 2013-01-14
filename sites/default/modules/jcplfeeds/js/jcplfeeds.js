(function ($) {
  Drupal.behaviors.jcplFeeds = {
    attach: function() {
      var jcplFeeds = new Drupal.jcplFeeds();
      jcplFeeds.init();
    }
  }
  Drupal.jcplFeeds = function() {
    var _self = this;
    this.init = function() {
      // Get images that pertain to syndetics.com.
      $('img[src*="syndetics.com"]').bind('load', function(event) {
        // If size less than some minimum, rewrite src to a default.
        var img = $(this);
        if (!img.hasClass('bound') && img.width() * img.height() <= 1) {
          img.attr('src', Drupal.settings.jcplfeeds.no_cover_src);
          img.addClass('bound');
        };
      });
    }
  }
})(jQuery);
