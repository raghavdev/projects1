<?php if ($page['top_nav']): ?>
<div class="topnav">
  <?php print render($page['top_nav']); ?>
</div>
<?php endif; ?>

<div id="branding" class="clearfix">
  <div class="branding-inner">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
    <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($page['header']): ?>
    <div class="header">
      <?php print render($page['header']); ?>
    </div>
    <?php endif; ?>
  </div>
</div>

<div id="tab-bar" class="clearfix">
  <?php print render($tabs); ?>
</div>

<div id="page"<?php echo theme_get_setting('supplier_portal_no_fadein_effect') ? '' : ' class="fade-in"'?>>

  <?php if (!empty($breadcrumb)): ?>
    <?php print $breadcrumb; ?>
  <?php endif; ?>

  <?php if ($page['help']): ?>
    <?php print render($page['help']); ?>
  <?php endif; ?>

  <?php if ($messages): ?>
    <div id="console" class="clearfix">
      <?php print $messages; ?>
    </div>
  <?php endif; ?>


  <div id="content" class="clearfix">
    <div class="element-invisible">
      <a id="main-content"></a>
    </div>
    <div class="actions">
	  <?php if ($action_links): ?>
        <ul class="action-links">
	      <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
    </div>
    <?php print render($page['content']); ?>
  </div>

  <?php if ($page['footer']): ?>
  <div class="footer">
    <?php print render($page['footer']); ?>
  </div>
  <?php endif; ?>

</div>
