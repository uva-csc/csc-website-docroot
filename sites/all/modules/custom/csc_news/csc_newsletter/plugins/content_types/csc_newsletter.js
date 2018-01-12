(function($) {
    $(document).ready(function() {
        /*
         *  Find the div.csc_newsletter_signup added by the block code in csc_newsletter.inc. Then get its pane parent and
         *  Wrap it in a link to the e-mail sign up in another window.
         */
       var el = $('div.csc_newsletter_signup').parents('.pane-csc-newsletter').children('h2');
       el.wrap('<a href="http://eepurl.com/cSMDWr" target="_blank"></a>');
    });

})(jQuery);
