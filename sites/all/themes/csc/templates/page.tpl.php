<header>
<div id="header-mobile-nav"><?php print_image('icon-menu.svg') ?>menu</div>
<div id="header-logo"><a href="<?php echo url('<front>');?>"><?php print_image('logo_csc_horiz-banner-transparent-oct-2018.png', 453, 50, "Comtemplative Scinces Center");?></a></div>
<div id="header-icons">
  <ul>
    <!-- Old Bitly Url: http://at.virginia.edu/supportcsc (figure out how to redirect) -->
    <li><a target="_blank" alt="Give Now" class="noxhr top-anchor"
           href="https://securelb.imodules.com/s/1535/16-uva/giving.aspx?sid=1535&gid=16&pgid=20601&dids=983.1104.4468.1452&bledit=1&sort=1&appealcode=NUVAWEB"><?php
                print_image('gift_icon.png', 24, 27, "Give Now", 'class="top-icons" id="gift-icon"');
            ?><div class="header-icon-text">Give Now</div></a></li>
    <li><a class="top-anchor" alt="Calendar" id="calendar-link" href="<?php echo url('csc_calendar');?>"><?php print_image('calendar_icon.png', 24, 27, "Calendar", 'class="top-icons" id="calendar-icon"');?><div class="header-icon-text">calendar</div></a></li>
    <li><a class="top-anchor" alt="Contact Us" href="<?php echo url('csc_column/contact');?>"><?php print_image('contact_icon.png', 24, 24, "Contact", 'class="top-icons" id="contact-icon"');?><div class="header-icon-text">contact</div></a></li>
    <li><a class="top-anchor" alt="Search CSC" href="<?php echo url('csc_column/search');?>"><?php print_image('search.png', 24, 24, "Search", 'class="top-icons" id="search-icon"');?><div class="header-icon-text">search</div></a></li>
  </ul>
</div>
</header>
<?php if ($messages): ?>
  <div id="messages"><div class="section clearfix">
    <?php print $messages; ?>
  </div></div> <!-- /.section, /#messages -->
<?php endif; ?>

<div id="content" class="column"><div class="section">
  <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
  <a id="main-content"></a>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h1 class="title" id="page-title">
      <?php print $title; ?>
    </h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($tabs): ?>
    <div class="tabs">
      <?php print render($tabs); ?>
    </div>
  <?php endif; ?>
  <?php print render($page['help']); ?>
  <?php if ($action_links): ?>
    <ul class="action-links">
      <?php print render($action_links); ?>
    </ul>
  <?php endif; ?>
  <?php print render($page['content']); ?>
  <?php print $feed_icons; ?>
  <?php if ( !$logged_in): ?> <!--$is_front &&-->
      <div class="csc-login-link"><a class="top-anchor" alt="Log into your account" href="<?php echo url('csc_column/login');?>"><?php print_image('login_icon.png', 17, 24, "Login", 'class="top-icons" id="login-icon"');?><div class="header-icon-text">Log in</div></a></div>
   <?php endif; ?>
</div></div> <!-- /.section, /#content -->

