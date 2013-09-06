This file defines information relating to the Healthy Woman compaign. There are
six top-level sections:

1. formnums  
   `key => value` pairs of formnums and the formnum's associated block content.
   `<PROGRAM NAME>` and `<PROGRAM NUMBER>` tokens are availble.

2. article_content  
   Contains the content of the healthy woman article. `<PROGRAM NAME>` and
   `<PROGRAM NUMBER>` tokens are availble.

3. program_name_block_content  
   Content of the Program block. `<PROGRAM NAME>` and `<PROGRAM NUMBER>`
   tokens are availble.

4. hw_articles  
   List of Node IDs on which the Program block should appear.

5. hw_landing_pages  
   List of pages on which the Program block should appear in addition to the
   HW Teaser block.

6. high_low
   List of nodes that are high and low risk. Inclusion in this list triggers
   the target URL of the tab to one of the two Landing Page NIDs listed as the
   target for each group.
