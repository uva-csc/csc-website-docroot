(function ($) {
    // CSC Calendar behavior to switch views using AJAX.
    Drupal.behaviors.loginlink = {
        attach: function(context, settings) {
            if (context == document) {
                var llink = $('.csc-login-link').detach();
                $('.csc-panel-col-left .csc-panel-inside').append(llink);
            }
        }
    };
}) (jQuery);
