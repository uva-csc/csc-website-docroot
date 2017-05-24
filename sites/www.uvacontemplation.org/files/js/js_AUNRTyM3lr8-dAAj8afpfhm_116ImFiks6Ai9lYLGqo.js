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
(function ($) {
  var menuToggle = 0,
      $content, $header, $cols;

  window.csc = window.csc || {};

  window.csc.toggleMenu = function(){
    var css, clsFn;
    
    if( menuToggle ) {
      css =  {left: '0px'}; 
      menuToggle = 0;
      if(!window.csc.menuToggleListener)
        window.csc.menuToggleListener = (menuToggleListener)();
    } else {
      css = {left: '150px', top: '0px'};
      menuToggle = 1;
      $('html,body').animate({scrollTop:0}, 0);
    }
    $('.csc-panel-col-left, .csc-3col-col-fixed').toggle();
    $('#header-icons').toggle();
    $('.csc-panel-col-right').css(css);

    if(!menuToggle && window.csc.home_layout) {
      window.csc.home_layout();
    }
  };

  window.csc.maximize = function(){
    var h, w;
    if($cols.length) {
      w = $(window).width();
      if(w > 640) {
        h = $(window).height() - $header.outerHeight();
        $content.add($cols).height(h);
      } else {
        $content.add($cols).height('');
      }
    }
  };

  var wto;
  var menuToggleListener = function(){
    $(window).resize(function(){
      clearTimeout(wto);
      wto = setTimeout(function() {
        var ww = $(window).width();
        if((!menuToggle && ww > 640) || menuToggle && ww < 641) {
          window.csc.toggleMenu();
        } 
      }, 150);
    });
  };


  $(document).ready(function () {

    if(!$content) {
      $content = $('#content');
      $header = $('header');
      $cols = $('.csc-3col-col-fluid');
      window.csc.maximize();
    }

    //Bind expand/contract effect to menus
    $('#main-menu > .expanded > a').each(function(){
      $(this).attr('href','#');
      $(this).on("click",function(e){
        $parent = $(this).parent();
        $(this).siblings('ul').slideToggle('fast');
        if( $parent.hasClass('expanded') ){
          $('#main-menu').find('.contracted').removeClass('contracted').addClass('expanded').find('ul').slideUp('fast');
          $parent.removeClass('expanded');
          $parent.addClass('contracted');
        }else{
          $parent.removeClass('contracted');
          $parent.addClass('expanded');
        }
        return false;
      });
    });

    //Auto expand for active sub-menus
    //
    var excludeUrls = [
          '',
          'content/home',
          'content/about-us'
        ],
        url = location.href.split('/').slice(3).join('/'),
        haveHistory = window.history;

    var urlIncluded = function() {
      if(~url.indexOf('search/site'))
        return false;

      for (var i = 0; i < excludeUrls.length; i += 1) {
        if( url === excludeUrls[i] ) {
          return false;
        }
      }
      return true;
    },
    retrieve = function(key){
      return window.sessionStorage ? 
        sessionStorage.getItem(key) : 
        $.cookie(key);
    },
    store = function(key, val){
      return window.sessionStorage ?
        sessionStorage.setItem(key, val) :
        $.cookie(key, val);
    },
    remove = function(key){
      return window.sessionStorage ?
        sessionStorage.removeItem(key) :
        $.removeCookie(key);
    };

    if( urlIncluded() ) {
      var $el = $('#main-menu').find('a[href*=\"' + url + '\"]'),
          $li;

      if($el.length == 1) {
        $li = $el.closest('li.expanded');
        if ($li.length) {
          $li.removeClass('expanded').addClass('contracted');
          $li.closest('ul').show();
          $el.addClass('active');

          var lid = $el.parent().attr('id');

          store('expanded', lid);
          if(haveHistory && history.replaceState) {
            history.replaceState({id: lid}, '', location.href);
          }
        }
      }

      //if mlid of a give li is saved, expand that branch
      if((haveHistory && history.state) || retrieve('expanded')){
        if( haveHistory && history.state ) {
          elid = history.state.id;
        } else {
          elid = retrieve('expanded');
          if(haveHistory) {
            history.replaceState({id: elid}, '', location.href);
          }
        }
        $el = $('#' + elid);
        $parent = $el.parent().parent();
        $parent.removeClass('expanded').addClass('contracted');

        $el.addClass('active').children('a').addClass('active');
      }
    } else {
      remove('expanded');
    }

    //Reset cookie
    $("#m-1008 > a, #anchor-about, #header-logo > a").bind('click', function(e){
      remove('expanded');
    });

    $(window).resize(function(){
      window.csc.maximize();
    });

    // mobile menu
    $('#header-mobile-nav').click(window.csc.toggleMenu);
  });
})(jQuery);
;
