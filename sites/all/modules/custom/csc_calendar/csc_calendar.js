(function ($) {
    // CSC Calendar behavior to switch views using AJAX.
    Drupal.behaviors.csc_calendar = {
        attach: function(context, settings) {
            if (context == document) {
                // For year and month mode, redo all day links to load in the calendar slideout.
                $(document).on('click', '#csc-popup-calendar.year a, #csc-popup-calendar.month .month.day a', function(e) {
                    e.preventDefault();
                    // In year view, the link to each day ends with the date string. Get that string.
                    var pts = $(this).attr('href').split('/'); 
                    var day = pts.pop();
                    // Construct the calendar ajax call for that day view, get it and put in calendar, then scroll to top of div
                    var ajax_url = '/api/csc/calendar/block/day?mini=' + day + '&ajax=1';
                    $('#csc-right #csc-column-content').load(ajax_url, function() {
                        Drupal.attachBehaviors('#csc-popup-calendar');
                        $('#csc-right').get(0).scrollTop = 0;
                    });
               });
               
               // On events page deactive links on the day numbers because they don't display well.
               $('.page-events .csc-events-calendar .month-view .inner .month.day').each(
                   function() {
                       $(this).html($(this).text()); // remove the <a> link and just display the number
                   }
               );
            }
            $('#csc-calendar-view-form #edit-view-select').change(function(e) {
               var view_mode = $(this).val(); 
               var newurl = '/api/csc/calendar/block/' + view_mode;
               $('#csc-right #csc-column-content').load(newurl, function() {
                   Drupal.attachBehaviors('#csc-popup-calendar');
               });
            });
        }
    };
})(jQuery);
