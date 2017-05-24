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
    $( '#content' ).append( '<div id="csc-right"><div id="csc-column-top"><h2 id="csc-column-title"></h2><div id="csc-column-close">x</div></div><div id="csc-column-content"></div></div>' );

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

        if(active_el)
          $(active_el).removeClass('active');
        active_el = this;

        var rght = getRightOffset(this);
        $wedge.css('right', rght + 'px').show();


        $('#csc-column-title').html(title);
        var ajax_url = this.href;

        $.ajax({
          url: ajax_url,
          success: function(res){
            $('#csc-column-content').html(res);
            if(~title.indexOf('Search')) {
              $('#field-key').focus();
            } else if (~title.indexOf('account')) {
              $('#user-login-form').append('At present, login is restricted to CSC staff. We plan to add functionality in the future that will make the site more interactive and which may thus require users to login to access such features.');
            }
          }
        });

        $('#csc-right').attr('class', clsAdd + ' in');
      }
    });
    
    //bind action to close buttons
    $('#csc-column-close').on("click",function(e){
      $('#csc-right').attr('class', '');
      $(active_el).removeClass('active');
      active_el = null;
      $wedge.hide();
      return false; 
    });    
    
  });
})(jQuery);
;

(function ($) {
  Drupal.Panels = Drupal.Panels || {};

  Drupal.Panels.autoAttach = function() {
    if ($.browser.msie) {
      // If IE, attach a hover event so we can see our admin links.
      $("div.panel-pane").hover(
        function() {
          $('div.panel-hide', this).addClass("panel-hide-hover"); return true;
        },
        function() {
          $('div.panel-hide', this).removeClass("panel-hide-hover"); return true;
        }
      );
      $("div.admin-links").hover(
        function() {
          $(this).addClass("admin-links-hover"); return true;
        },
        function(){
          $(this).removeClass("admin-links-hover"); return true;
        }
      );
    }
  };

  $(Drupal.Panels.autoAttach);
})(jQuery);
;
/*
 *  Create the splitter, set the viewport size, and set the position of the scrollbar to the first item.
 */
(function($){
  Drupal.behaviors.calendarSetScroll = {
  attach: function(context) {
    // Make multi-day resizable - stolen/borrowed from textarea.js
    $('.header-body-divider:not(.header-body-divider-processed)').each(function() {
      var divider = $(this).addClass('header-body-divider-processed');
      var start_y = divider.offset().top;

      // Add the grippie icon
      $(this).prepend('<div class="grippie"></div>').mousedown(startDrag);

      function startDrag(e) {
        start_y = divider.offset().top;
        $(document).mousemove(performDrag).mouseup(endDrag);
        return false;
      }

      function performDrag(e) {
        var offset = e.pageY - start_y;
        var mwc = $('#multi-day-container');
        var sdc = $('#single-day-container');
        var mwc_height = mwc.height();
        var sdc_height = sdc.height();
        var max_height = mwc_height + sdc_height;
        mwc.height(Math.min(max_height,Math.max(0,mwc_height + offset)));
        sdc.height(Math.min(max_height,Math.max(0,sdc_height - offset)));
        start_y = divider.offset().top;
        return false;
      }

      function endDrag(e) {
        $(document).unbind("mousemove", performDrag).unbind("mouseup", endDrag);
      }
     });

    $('.single-day-footer:not(.single-day-footer-processed)').each(function() {
      var divider = $(this).addClass('single-day-footer-processed');
      var start_y = divider.offset().top;

      // Add the grippie icon
      $(this).prepend('<div class="grippie"></div>').mousedown(startDrag);

      function startDrag(e) {
        start_y = divider.offset().top;
        $(document).mousemove(performDrag).mouseup(endDrag);
        return false;
      }

      function performDrag(e) {
        var offset = e.pageY - start_y;
        var sdc = $('#single-day-container');
        sdc.height(Math.max(0,sdc.height() + offset));
        start_y = divider.offset().top;
        return false;
      }

      function endDrag(e) {
        $(document).unbind("mousemove", performDrag).unbind("mouseup", endDrag);
      }
     });

     // Size the window
     calendar_resizeViewport($);
  }
};
})(jQuery);

// Scroll the viewport to the first item
function calendar_scrollToFirst($) {
   if ($('div.first_item').size() > 0 ) {
      var y = $('div.first_item').offset().top - $('#single-day-container').offset().top ;
      $('#single-day-container').scrollTop(y);
   }
}

// Size the single day view
function calendar_resizeViewport($) {
  // Size of the browser window
  var viewportHeight = window.innerHeight ? window.innerHeight : $(window).height();
  var top = $('#single-day-container').offset().top;

  // Give it a 20 pixel margin at the bottom
  //$('#single-day-container').height(viewportHeight - top - 20);
}
;
