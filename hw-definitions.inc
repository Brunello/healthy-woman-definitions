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
    '02896ANMENABS-AA' => hw_content('02896ANMENABS-AA'),
    '02896ANMENABS-AES' => hw_content('02896ANMENABS-AES'),
    '02896ANMENABS-ALB' => hw_content('02896ANMENABS-ALB'),
    '02896ANMENABS-ALBGENC' => hw_content('02896ANMENABS-ALBGENC'),
    '02896CAMENABC-ALNT' => hw_content('02896CAMENABC-ALNT'),
    '02896ANMENABS-ALLY' => hw_content('02896ANMENABS-ALLY'),
    '02896ANMENABS-AMF' => hw_content('02896ANMENABS-AMF'),
    '02896ANMENABS-ARBY' => hw_content('02896ANMENABS-ARBY'),
    '02896ANMENABS-BARC' => hw_content('02896ANMENABS-BARC'),
    '02896ANMENABS-BL' => hw_content('02896ANMENABS-BL'),
    '02896ANMENABS-CNT' => hw_content('02896ANMENABS-CNT'),
    '02896ANMENABS-FER' => hw_content('02896ANMENABS-FER'),
    '02896ANMENABS-FREE' => hw_content('02896ANMENABS-FREE'),
    '02896VAMENBVA-HOUSE' => hw_content('02896VAMENBVA-HOUSE'),
    '02896WPMENHLK-HOUSE' => hw_content('02896WPMENHLK-HOUSE'),
    '02896GAMENBGA-HOUSE' => hw_content('02896GAMENBGA-HOUSE'),
    '02896CAMENABC-HOUSE' => hw_content('02896CAMENABC-HOUSE'),
    '02896ANMENABS-HOUSE' => hw_content('02896ANMENABS-HOUSE'),
    '02896ANMENABS-IMS' => hw_content('02896ANMENABS-IMS'),
    '02896ANMENABS-1IPL' => hw_content('02896ANMENABS-1IPL'),
    '02896ANMENABS-JCW' => hw_content('02896ANMENABS-JCW'),
    '02896ANMENABS-KLOC' => hw_content('02896ANMENABS-KLOC'),
    '02896ANMENABS-MARP' => hw_content('02896ANMENABS-MARP'),
    '02895ANMENABC-ACS' => hw_content('02895ANMENABC-ACS'),
    '02895ANMENABS-AA' => hw_content('02895ANMENABS-AA'),
    '02895ANMENABS-AES' => hw_content('02895ANMENABS-AES'),
    '02895ANMENABS-ALB' => hw_content('02895ANMENABS-ALB'),
    '02895ANMENABS-ALBGENC' => hw_content('02895ANMENABS-ALBGENC'),
    '02895CAMENABC-ALNT' => hw_content('02895CAMENABC-ALNT'),
    '02895ANMENABS-ALLY' => hw_content('02895ANMENABS-ALLY'),
    '02895ANMENABS-AMF' => hw_content('02895ANMENABS-AMF'),
    '02895ANMENABS-ARBY' => hw_content('02895ANMENABS-ARBY'),
    '02895ANMENABS-BARC' => hw_content('02895ANMENABS-BARC'),
    '02895ANMENABS-BL' => hw_content('02895ANMENABS-BL'),
    '02895ANMENABS-CNT' => hw_content('02895ANMENABS-CNT'),
    '02895ANMENABS-FER' => hw_content('02895ANMENABS-FER'),
    '02895ANMENABS-FREE' => hw_content('02895ANMENABS-FREE'),
    '02895VAMENBVA-HOUSE' => hw_content('02895VAMENBVA-HOUSE'),
    '02895WPMENHLK-HOUSE' => hw_content('02895WPMENHLK-HOUSE'),
    '02895GAMENBGA-HOUSE' => hw_content('02895GAMENBGA-HOUSE'),
    '02895CAMENABC-HOUSE' => hw_content('02895CAMENABC-HOUSE'),
    '02895ANMENABS-HOUSE' => hw_content('02895ANMENABS-HOUSE'),
    '02895ANMENABS-IMS' => hw_content('02895ANMENABS-IMS'),
    '02895ANMENABS-1IPL' => hw_content('02895ANMENABS-1IPL'),
    '02895ANMENABS-JCW' => hw_content('02895ANMENABS-JCW'),
    '02895ANMENABS-KLOC' => hw_content('02895ANMENABS-KLOC'),
    '02895ANMENABS-MARP' => hw_content('02895ANMENABS-MARP'),
  ),
  'article_content' => hw_content('article_content'), // This is the actual content of the HW page. The header image etc are in the template. This is just the body copy.
  'program_name_block_content' => hw_content('program_name_block_content'),
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
        '3274', // Test for dev
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
