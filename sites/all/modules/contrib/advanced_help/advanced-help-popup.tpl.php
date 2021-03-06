<?php
/**
 * @file
 * Default theme implementation to display a help popup.
 */
?>
<!DOCTYPE html>
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <script type="text/javascript"><?php /* Needed to avoid Flash of Unstyled Content in IE */ ?> </script>
</head>
<body class="advanced-help-popup-body">
  <div id="page">
    <div id="header">
      <?php if (!empty($search_box)): ?>
        <div id="search-box"><?php print $search_box; ?></div>
      <?php endif; ?>
    </div> <!-- /header -->
    <div id="breadcrumb"><?php print $breadcrumb; ?></div>

    <div id="content">
      <?php if (!empty($title)): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php if (!empty($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
      <?php if (!empty($messages)): print $messages; endif; ?>
      <?php if (!empty($help)): print $help; endif; ?>
      <div id="content-content" class="clear-block">
        <?php print $content; ?>
      </div> <!-- /content-content -->
    </div> <!-- /content -->

    <!--
    See comment about $closure in main module.
    print $closure;
    -->

  </div> <!-- /page -->
</body>
</html>
