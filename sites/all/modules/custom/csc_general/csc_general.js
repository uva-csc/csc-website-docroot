(function ($) {
    // CSC Calendar behavior to switch views using AJAX.
    Drupal.behaviors.loginlink = {
        attach: function(context, settings) {
            if (context == document) {
                // Move login link to the left bottom of left column. It is defined in page.tpl.php of the theme
                if ($('.csc-login-link').length > 0 && $('.csc-panel-col-left .csc-panel-inside').length > 0 )  {
                    var llink = $('.csc-login-link').detach();
                    $('.csc-panel-col-left .csc-panel-inside').append(llink);
                }
            }
        }
    };
}) (jQuery);
