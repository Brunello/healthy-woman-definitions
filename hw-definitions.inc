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
    'EXAMPLE' => hw_content('EXAMPLE'),
    '02896ANMENABC-ACS' => hw_content('02896ANMENABC-ACS'),
    '02897ANMENABC-ACS' => hw_content('02897ANMENABC-ACS'),
  ),
  'article_content' => hw_content('article_content'), // This is the actual content of the HW page. The header image etc are in the template. This is just the body copy.
  'program_name_block_content' => 'This is the program name block content. Use the same tokens.',
  'hw_articles' => array( // These are the nodes that the program block should show up on.
    '3509', // Test for dev
    '5298',
    '5295',
    '5296',
    '5294',
    '5300',
    '5292',
    '5289',
    '5290',
    '5288',
    '5393',
  ),
  'hw_landing_pages' => array( // These are the nodes that the program block and HW Article Teaser block should show up on.
    '3274', // Test for dev
    '5402', // low
    '5403', // high
  ),
  'high_low' => array(
    'low' => array(
      'lp_nid' => '5402',
      'trigger_ids' => array(
        '3274', // Text for dev
        '5402',
        '5292',
        '5289',
        '5290',
        '5288',
        '5393',
      ),
    ),
    'high' => array(
      'lp_nid' => '5403',
      'trigger_ids' => array(
        '5403',
        '5298',
        '5295',
        '5296',
        '5294',
        '5300',
      ),
    ),
  ),
);

/**
 * Simplifies syntax for including file contents. Specific to this module.
 *
 * @param $filename string
 *   The name of the file that contains the content not including the
 *   extention (which needs to be `.inc`).
 *
 * @return string
 *   The contents of the file provided or FALSE if there is an error.
 */
function hw_content($filename) {
  return file_get_contents(__DIR__ . '/contents/' . $filename . '.inc');
}
