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
    
    // For News Item list sniff for item's with class alturl if the url is '/node/' then use alt ulr data
    Drupal.behaviors.alturl = {
        attach: function(context, settings) {
            if (context == document) {
                $('a.alturl').each(function() {
                    var href = $(this).attr('href');
                    if (href == '/node/') { $(this).attr('href', $(this).data('alturl')); }
                });
            }
        }
    };
}) (jQuery);
