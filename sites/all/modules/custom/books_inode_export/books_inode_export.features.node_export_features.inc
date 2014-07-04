<?php
/**
 * @file
 * books_inode_export.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function books_inode_export_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'The Hunger Games\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7e69b3c-36d3-4cc6-8863-d3d2bca510b5\',
      \'nid\' => \'12\',
      \'type\' => \'books\',
      \'language\' => \'und\',
      \'created\' => \'1404461226\',
      \'changed\' => \'1404461226\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfa13f6e-8ba1-458a-9410-779c38ce9923\',
      \'revision_timestamp\' => \'1404461226\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The Hunger Games is a 2008 science fiction novel by the American writer Suzanne Collins. It is written in the voice of 16-year-old Katniss Everdeen, who lives in the dystopian, post-apocalyptic nation of Panem in North America. The Capitol, a highly advanced metropolis, exercises political control over the rest of the nation. The Hunger Games is an annual event in which one boy and one girl aged 12–18 from each of the twelve districts surrounding the Capitol are selected by lottery to compete in a televised battle to the death.\\r\\n\\r\\nThe book received mostly positive feedback from major reviewers and authors. It was praised for its storyline and character development, though some reviewers have noted similarities between Collins\' book and Koushun Takami\'s Battle Royale (1999). In writing The Hunger Games, Collins drew upon Greek mythology, Roman gladiatorial games, and contemporary reality television for thematic content. The novel won many awards, including the California Young Reader Medal, and was named one of Publishers Weekly\'s \\"Best Books of the Year\\" in 2008.\\r\\n\\r\\nThe Hunger Games was first published in hardcover on September 14, 2008, by Scholastic, featuring a cover designed by Tim O\'Brien. It has since been released in paperback and also as an audiobook and ebook. After an initial print of 200,000, the book had sold 800,000 copies by February 2010. Since its release, The Hunger Games has been translated into 26 languages, and publishing rights have been sold in 38 territories. The novel is the first in The Hunger Games trilogy, followed by Catching Fire (2009) and Mockingjay (2010). A film adaptation, directed by Gary Ross and co-written and co-produced by Collins herself, was released in 2012.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The Hunger Games is a 2008 science fiction novel by the American writer Suzanne Collins. It is written in the voice of 16-year-old Katniss Everdeen, who lives in the dystopian, post-apocalyptic nation of Panem in North America. The Capitol, a highly advanced metropolis, exercises political control over the rest of the nation. The Hunger Games is an annual event in which one boy and one girl aged 12–18 from each of the twelve districts surrounding the Capitol are selected by lottery to compete in a televised battle to the death.</p>\\n<p>The book received mostly positive feedback from major reviewers and authors. It was praised for its storyline and character development, though some reviewers have noted similarities between Collins\' book and Koushun Takami\'s Battle Royale (1999). In writing The Hunger Games, Collins drew upon Greek mythology, Roman gladiatorial games, and contemporary reality television for thematic content. The novel won many awards, including the California Young Reader Medal, and was named one of Publishers Weekly\'s \\"Best Books of the Year\\" in 2008.</p>\\n<p>The Hunger Games was first published in hardcover on September 14, 2008, by Scholastic, featuring a cover designed by Tim O\'Brien. It has since been released in paperback and also as an audiobook and ebook. After an initial print of 200,000, the book had sold 800,000 copies by February 2010. Since its release, The Hunger Games has been translated into 26 languages, and publishing rights have been sold in 38 territories. The novel is the first in The Hunger Games trilogy, followed by Catching Fire (2009) and Mockingjay (2010). A film adaptation, directed by Gary Ross and co-written and co-produced by Collins herself, was released in 2012.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_author\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_file\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'22\',
            \'uid\' => \'1\',
            \'filename\' => \'default-testpage.pdf\',
            \'uri\' => \'public://books/default-testpage.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'31694\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404461226\',
            \'uuid\' => \'6d482dff-9d5a-411e-a7c6-4acc272e752c\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_image_book\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'23\',
            \'uid\' => \'1\',
            \'filename\' => \'hungergamesbook.jpg\',
            \'uri\' => \'public://Image books/hungergamesbook.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'43810\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404461226\',
            \'uuid\' => \'6d3f54f7-03c2-4bb5-8a6c-bcb72bdd0889\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'983\',
            \'height\' => \'604\',
          ),
        ),
      ),
      \'field_publisher\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2008-01-01 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1404461226\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
