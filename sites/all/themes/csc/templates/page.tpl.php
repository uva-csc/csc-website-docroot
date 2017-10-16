<header>
<div id="header-mobile-nav"><?php print_image('icon-menu.svg') ?>menu</div>
<div id="header-logo"><a href="<?php echo url('<front>');?>"><?php print_image('logo_csc_horiz-banner-transparent.png', 453, 50, "Comtemplative Scinces Center");?></a></div>
<div id="header-icons">
  <ul>
    <!-- <li><a href="#"><?php print_image('explore_icon.png', 0, 0, "Explore CSC", 'class="top-icons" id="explore-icon"');?></a></li> -->
    <!--<li><a alt="Support" class="noxhr top-anchor" id="support-link" href="<?php echo url('support'); ?>"><?php print_image('gift_icon.png', 24, 27, "Give Now", 'class="top-icons" id="gift-icon"');?><div class="header-icon-text">Support</div></a></li>-->
    <li><a target="_blank" alt="Give Now" class="noxhr top-anchor" href="https://securelb.imodules.com/s/1535/16-uva/index.aspx?sid=1535&amp;gid=16&amp;pgid=3711&amp;cid=6382&amp;appealcode=KGIVECSC&amp;bledit=1&amp;dids=983"><?php print_image('gift_icon.png', 24, 27, "Give Now", 'class="top-icons" id="gift-icon"');?><div class="header-icon-text">Give Now</div></a></li>
    <!--<li><a id="anchor-about" alt="About Us" href="<?php echo url('content/about-us');?>" class="noxhr"><?php print_image('about_icon.png', 24, 24, "About CSC", 'class="top-icons" id="about-icon"');?><div class="header-icon-text">about</div></a></li>-->
    <!-- <li><a class="noxhr top-anchor" alt="News" id="news-link" href="<?php echo url('csc-news');?>"><?php print_image('news_icon.png', 32, 29, "News", 'class="top-icons" id="news-icon"');?><div class="header-icon-text">News</div></a></li>
    <li><a class="top-anchor" alt="Connect with Us" id="connect-link" href="<?php echo url('csc_column/connect');?>"><?php print_image('handshake_icon.png', 32, 32, "Connect", 'class="top-icons" id="connect-icon"');?><div class="header-icon-text">Connect</div></a></li>-->
    <li><a class="top-anchor" alt="Calendar" id="calendar-link" href="<?php echo url('csc_calendar');?>"><?php print_image('calendar_icon.png', 24, 27, "Calendar", 'class="top-icons" id="calendar-icon"');?><div class="header-icon-text">calendar</div></a></li>
    <li><a class="top-anchor" alt="Contact Us" href="<?php echo url('csc_column/contact');?>"><?php print_image('contact_icon.png', 24, 24, "Contact", 'class="top-icons" id="contact-icon"');?><div class="header-icon-text">contact</div></a></li>
    <!--li><a class="top-anchor" alt="Log into your account" href="<?php echo url('csc_column/login');?>"><?php print_image('login_icon.png', 17, 24, "Login", 'class="top-icons" id="login-icon"');?><div class="header-icon-text">log in</div></a></li--> 
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
  <?php if ($is_front && !$logged_in): ?>
      <div class="csc-login-link"><a class="top-anchor" alt="Log into your account" href="<?php echo url('csc_column/login');?>"><?php print_image('login_icon.png', 17, 24, "Login", 'class="top-icons" id="login-icon"');?><div class="header-icon-text">Log in</div></a></div>
   <?php endif; ?>
</div></div> <!-- /.section, /#content -->

