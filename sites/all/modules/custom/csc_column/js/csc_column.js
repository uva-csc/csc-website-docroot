(function ($) {
  $(document).ready(function () {
    var $header_icons = $('#header-icons'),
        $wedge = $('<img src="/sites/all/themes/csc/images/wedge.png" class="wedge"/>').appendTo('body'),
        active_el;

    var getRightOffset = function(el) {
      var $el = $(el);
      return $(window).width() - ($el.offset().left + $el.outerWidth()) + 26;
    };

    //create right column
    $( '#content' ).append( '<div id="csc-right"><div id="csc-column-top"><h2 id="csc-column-title"></h2><div id="csc-column-close">x</div></div><div class="column-loader" style="display: none;"><img src="sites/all/modules/custom/csc_calendar/status-active.gif" style="margin-left: 50%;"></div><div id="csc-column-content"></div></div>' );

    //bind actions to top menu buttons
    $('.top-anchor').on("click",function(event){
      var cls = this.className,
          clsAdd;

      if(~cls.indexOf('noxhr'))
        return true;

      event.preventDefault();

      if(!~cls.indexOf('active')) {
          
        this.className += ' active';
        title = $(this).attr('alt');
        clsAdd = 'csc-' + title.replace(/ /g, '-').toLowerCase();

        $('#csc-column-content').hide();
        if (~title.indexOf('Calendar')) {  $('.column-loader').show(); }
        
        
        if(active_el)
          $(active_el).removeClass('active');
        active_el = this;

        var rght = getRightOffset(this);
        $wedge.css('right', rght + 'px').show();

        $('#csc-column-title').html(title);
        
        var ajax_url = this.href;
        
        // If we are already in calendar and something else is clicked, save the calendar state
        if ($('#csc-right').is('.csc-calendar', '.in')) {
            var calstate = $('#csc-popup-calendar #edit-view-select').val();
            $.cookie('csc_calendar_state', calstate, { expires: 7, path: '/' });
            $('#calendar-back').remove(); // remove old state if there, thought it shouldn't be
            $('#csc-column-content').after('<div id="calendar-back" style="display: none;"></div>');
            $('#calendar-back').html($('#csc-column-content').html());
        }
        
        $.ajax({
          url: ajax_url,
          success: function(res){
            $('#csc-column-content').html(res).show();
            $('.column-loader').hide();
            if(~title.indexOf('Search')) {
              $('#field-key').focus();
            } else if (~title.indexOf('account')) {
              $('#user-login-form').append('At present, login is restricted to CSC staff. We plan to add functionality in the future that will make the site more interactive and which may thus require users to login to access such features.');
            }
            if (~title.indexOf('Calendar')) {
                 Drupal.attachBehaviors('#csc-popup-calendar');
                 if ($.cookie('csc_calendar_view_mode')) {
                     $('#csc-popup-calendar').hide();
                     $('#csc-popup-calendar #edit-view-select').val($.cookie('csc_calendar_view_mode'));
                     $('#csc-popup-calendar #edit-view-select').trigger('change', function() {$('#csc-popup-calendar').show();});
                 }
             } 
          }
        });
        
        $('#csc-right').attr('class', clsAdd + ' in');
      }
    });
    
    //bind action to close buttons
    $('#csc-column-close').on("click",function(e){
      // if we are in the calendar, save its state
      if ($('#csc-right').is('.csc-calendar', '.in')) {
          var calstate = $('#csc-popup-calendar #edit-view-select').val();
          $.cookie('csc_calendar_state', calstate, { expires: 7, path: '/' });
          $('#calendar-back').remove(); // remove old state if there, thought it shouldn't be
          $('#csc-column-content').after('<div id="calendar-back" style="display: none;"></div>');
          $('#calendar-back').html($('#csc-column-content').html());
      }
      $('#csc-right').attr('class', '');
      $(active_el).removeClass('active');
      active_el = null;
      $wedge.hide();
      return false; 
    });    
    
  });
})(jQuery);
