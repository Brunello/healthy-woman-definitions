<?php
/**
 * Available tokens:
 *   - <PROGRAM TITLE>
 *       Title of the program as defined in the original request's `program`
 *       param.
 *   - <PROGRAM PHONE>
 *       Phone number of the program as defined in the original request's
 *       `phone` param.
 *
 *   (removed) -->
 *   - <HW LINK>[link_text]
 *       Creates a link to the Healthy Woman article. Specify the text oft he
 *       link in straight brackets immediately following the token. Usage:
 *       `<HW LINK>[Read More]` creates:
 *       `<a href="/[base_path]/[path to HW article as defined on the module page]">Read More</a>
 */
$definitions = array(
  'formnums' => array( // These define the incentive block for each formnum.
    'EXAMPLE' => '<p>This is an example. You can insert the Program or Phone number by using the <PROGRAM TITLE> or <PROGRAM PHONE> tokens.</p><p>Make sure you include any HTML tags and donn\'t forget to properly escape single quotes.</p>',
    '02896ANMENABC-ACS' => '<p>Being a healthy mom can be rewarding.</p><p>Enroll in the <PROGRAM TITLE> program and receive a customized Society onesie for your new little one!</p>',
    '02897ANMENABC-ACS' => '<p>Being a healthy mom can be rewarding.</p><p>Enroll in the <PROGRAM TITLE> program and receive a customized Society onesie for your new little one!</p>',
  ),
  'article_content' => 'This is the article content. Use the same tokens to insert title or phone. This is the name: <PROGRAM TITLE>, and this is the phone: <PROGRAM PHONE>', // This is the actual content of the HW page.
  'program_name_block_content' => 'This is the program name block content. Use the same tokens.',
  'hw_articles' => array( // These are the nodes that the program block should show up on.
    '3509', // Test for dev
    '5298',
    '5295',
    '5296',
    '5294',
    '5300',
  ),
  'hw_landing_pages' = array( // These are the nodes that the program block and HW Article Teaser block should show up on.
    '3274', // Test for dev
    '5403',
  ),
);
