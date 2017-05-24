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
/**
 * @file
 * Implement a simple, clickable dropbutton menu.
 *
 * See dropbutton.theme.inc for primary documentation.
 *
 * The javascript relies on four classes:
 * - The dropbutton must be fully contained in a div with the class
 *   ctools-dropbutton. It must also contain the class ctools-no-js
 *   which will be immediately removed by the javascript; this allows for
 *   graceful degradation.
 * - The trigger that opens the dropbutton must be an a tag wit hthe class
 *   ctools-dropbutton-link. The href should just be '#' as this will never
 *   be allowed to complete.
 * - The part of the dropbutton that will appear when the link is clicked must
 *   be a div with class ctools-dropbutton-container.
 * - Finally, ctools-dropbutton-hover will be placed on any link that is being
 *   hovered over, so that the browser can restyle the links.
 *
 * This tool isn't meant to replace click-tips or anything, it is specifically
 * meant to work well presenting menus.
 */

(function ($) {
  Drupal.behaviors.CToolsDropbutton = {
    attach: function() {
      // Process buttons. All dropbuttons are buttons.
      $('.ctools-button')
        .once('ctools-button')
        .removeClass('ctools-no-js');

      // Process dropbuttons. Not all buttons are dropbuttons.
      $('.ctools-dropbutton').once('ctools-dropbutton', function() {
        var $dropbutton = $(this);
        var $button = $('.ctools-content', $dropbutton);
        var $secondaryActions = $('li', $button).not(':first');
        var $twisty = $(".ctools-link", $dropbutton);
        var open = false;
        var hovering = false;
        var timerID = 0;

        var toggle = function(close) {
          // if it's open or we're told to close it, close it.
          if (open || close) {
            // If we're just toggling it, close it immediately.
            if (!close) {
              open = false;
              $secondaryActions.slideUp(100);
              $dropbutton.removeClass('open');
            }
            else {
              // If we were told to close it, wait half a second to make
              // sure that's what the user wanted.
              // Clear any previous timer we were using.
              if (timerID) {
                clearTimeout(timerID);
              }
              timerID = setTimeout(function() {
                if (!hovering) {
                  open = false;
                  $secondaryActions.slideUp(100);
                  $dropbutton.removeClass('open');
                }}, 500);
            }
          }
          else {
            // open it.
            open = true;
            $secondaryActions.animate({height: "show", opacity: "show"}, 100);
            $dropbutton.addClass('open');
          }
        }
        // Hide the secondary actions initially.
        $secondaryActions.hide();

        $twisty.click(function() {
            toggle();
            return false;
          });

        $dropbutton.hover(
          function() {
            hovering = true;
          }, // hover in
          function() { // hover out
            hovering = false;
            toggle(true);
            return false;
          }
        );
      });
    }
  }
})(jQuery);
;
