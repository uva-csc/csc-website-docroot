(function($) {
    $(document).ready(function() {
        /*
         *  Find the #mcsignup (need to add that ID to the newsletter signup block in panoply interface)
         *  Wrap it in a link to the e-mail sign up in another window.
         */
       $('div#mcsignup').wrap('<a href="http://eepurl.com/cSMDWr" target="_blank"></a>');
    });

})(jQuery);
