<?php
/**
 * @file
 * author_node_export.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function author_node_export_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Suzanne Collins\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6a95f4cf-85e5-4453-a6a7-67db4f98c94d\',
      \'nid\' => \'1\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0842dea3-9d56-452c-811f-e7e8918dd6ec\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Suzanne Marie Collins (born August 10, 1962) is an American television writer and novelist, best known as the author of The New York Times best selling series The Underland Chronicles and The Hunger Games trilogy (which consists of The Hunger Games, Catching Fire, and Mockingjay).\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Suzanne Marie Collins (born August 10, 1962) is an American television writer and novelist, best known as the author of The New York Times best selling series The Underland Chronicles and The Hunger Games trilogy (which consists of The Hunger Games, Catching Fire, and Mockingjay).</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1962-08-10 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'The-Hunger-Games-author-Suzanne-Collins-arrives_gallery_primary[1].jpg\',
            \'uri\' => \'public://Photo Author/The-Hunger-Games-author-Suzanne-Collins-arrives_gallery_primary[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'84864\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'daed8b8e-0ce7-4453-a59d-797fa9bef4ef\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'452\',
            \'height\' => \'661\',
          ),
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'suzanne_collins_2010_04_07[1].jpg\',
            \'uri\' => \'public://Photo Author/suzanne_collins_2010_04_07[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'76876\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'4e5b174d-ace7-461e-a5cf-8ecb6010015e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'400\',
            \'height\' => \'600\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Stieg Larsson\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43be552f-bae6-4f88-9040-98d918be6039\',
      \'nid\' => \'2\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'13df5174-ac81-4580-9aff-41ec2809c3da\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Karl Stig-Erland \\"Stieg\\" Larsson (/stiːɡ ˈlɑrsən/; Swedish pronunciation: [ˈkaɭ ˈstiːɡ ˈæɭand ˈlaʂɔn]; 15 August 1954 – 9 November 2004) was a Swedish journalist and writer. He is best known for writing the \\"Millennium trilogy\\" of crime novels, which were published posthumously. Larsson lived much of his life in Stockholm and worked there in the field of journalism and as an independent researcher of right-wing extremism.\\r\\n\\r\\nHe was the second best-selling author in the world for 2008, behind Khaled Hosseini. Sales for the series had reached 73 million copies worldwide by the end of 2012, and the books continue to sell well today. By December 2011, his \\"Millennium series\\" had sold 65 million copies; its last part, The Girl Who Kicked the Hornets\' Nest, became the most sold book in the United States in 2010 according to Publishers Weekly.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Karl Stig-Erland \\"Stieg\\" Larsson (/stiːɡ ˈlɑrsən/; Swedish pronunciation: [ˈkaɭ ˈstiːɡ ˈæɭand ˈlaʂɔn]; 15 August 1954 – 9 November 2004) was a Swedish journalist and writer. He is best known for writing the \\"Millennium trilogy\\" of crime novels, which were published posthumously. Larsson lived much of his life in Stockholm and worked there in the field of journalism and as an independent researcher of right-wing extremism.</p>\\n<p>He was the second best-selling author in the world for 2008, behind Khaled Hosseini. Sales for the series had reached 73 million copies worldwide by the end of 2012, and the books continue to sell well today. By December 2011, his \\"Millennium series\\" had sold 65 million copies; its last part, The Girl Who Kicked the Hornets\' Nest, became the most sold book in the United States in 2010 according to Publishers Weekly.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1954-08-15 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2004-11-19 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'stieg_1701200c[1].jpg\',
            \'uri\' => \'public://Photo Author/stieg_1701200c[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'12508\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'0e9b3b29-404b-4aa4-8e36-fe790f83408a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'460\',
            \'height\' => \'288\',
          ),
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'1066576h430[1].jpg\',
            \'uri\' => \'public://Photo Author/1066576h430[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20028\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'d49b2ce3-bfd7-48ec-9be3-013264c00d54\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'526\',
            \'height\' => \'430\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'George R. R. Martin\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ac751a90-3fdf-4a8f-aa3e-d573a1ba0081\',
      \'nid\' => \'3\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'31d0d942-4a6d-41b2-a304-f7b2aa8f8856\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "George Raymond Richard Martin (born George Raymond Martin; September 20, 1948), often referred to as GRRM, is an American novelist and short story writer in the fantasy, horror, and science fiction genres, and a screenwriter and television producer. He is best known for A Song of Ice and Fire, his international bestselling series of epic fantasy novels that HBO adapted for its dramatic series Game of Thrones. Martin serves as the series\' co-executive producer, while also scripting one of each season\'s 10 episodes. Martin was selected by Time magazine as one of the \\"2011 Time 100\\", a list of the \\"most influential people in the world.\\"",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>George Raymond Richard Martin (born George Raymond Martin; September 20, 1948), often referred to as GRRM, is an American novelist and short story writer in the fantasy, horror, and science fiction genres, and a screenwriter and television producer. He is best known for A Song of Ice and Fire, his international bestselling series of epic fantasy novels that HBO adapted for its dramatic series Game of Thrones. Martin serves as the series\' co-executive producer, while also scripting one of each season\'s 10 episodes. Martin was selected by Time magazine as one of the \\"2011 Time 100\\", a list of the \\"most influential people in the world.\\"</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1948-09-20 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'george-rr-martin[1].jpg\',
            \'uri\' => \'public://Photo Author/george-rr-martin[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'31748\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'4261922b-f020-419e-876c-aaf5b5fba79e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'620\',
            \'height\' => \'413\',
          ),
          array(
            \'fid\' => \'6\',
            \'uid\' => \'1\',
            \'filename\' => \'george_rr_martin_h_2014[1].jpg\',
            \'uri\' => \'public://Photo Author/george_rr_martin_h_2014[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30678\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'ea3430a8-af04-4fb9-9a39-7724a8b175e8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'565\',
            \'height\' => \'318\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Max Brooks\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dc5b5fce-8f13-4df1-9eca-ffd0876b106f\',
      \'nid\' => \'4\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4e41d707-3693-4a62-8c3d-d76a77967088\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Maximillian Michael \\"Max\\" Brooks (born May 22, 1972) is an American horror author and screenwriter. He is the son of comedy filmmaker Mel Brooks and actress Anne Bancroft. Brooks\' writing focuses on zombie stories. Brooks is also a television and voice-over actor...",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Maximillian Michael \\"Max\\" Brooks (born May 22, 1972) is an American horror author and screenwriter. He is the son of comedy filmmaker Mel Brooks and actress Anne Bancroft. Brooks\' writing focuses on zombie stories. Brooks is also a television and voice-over actor...</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1972-05-22 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'7\',
            \'uid\' => \'1\',
            \'filename\' => \'Max+Brooks+Deadliest+Warrior+Vampires+Vs+Zombies+Ho_NmZ3RZOsl[1].jpg\',
            \'uri\' => \'public://Photo Author/Max+Brooks+Deadliest+Warrior+Vampires+Vs+Zombies+Ho_NmZ3RZOsl[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'68879\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'ad783efe-9017-409f-9851-23426150867b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'452\',
            \'height\' => \'594\',
          ),
          array(
            \'fid\' => \'8\',
            \'uid\' => \'1\',
            \'filename\' => \'Brooks_small[1].jpg\',
            \'uri\' => \'public://Photo Author/Brooks_small[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'57067\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'3ccfc5d2-e974-4a8c-aef4-ae379894184f\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'400\',
            \'height\' => \'300\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Chuck Palahniuk\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'240421ea-60f2-4d1b-93dd-373e9569aa37\',
      \'nid\' => \'5\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'95878946-e81b-4248-8f25-803d4132eb47\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Written in stolen moments under truck chassis and on park benches to a soundtrack of The Downward Spiral and Pablo Honey, Fight Club came into existence. The adaptation of Fight Club was a flop at the box office, but achieved cult status on DVD. The film’s popularity drove sales of the novel. Chuck put out two novels in 1999, Survivor and Invisible Monsters. Choke, published in 2001, became Chuck’s first New York Times bestseller. Chuck’s work has always been infused with personal experience, and his next novel, Lullaby, was no exception. Chuck credits writing Lullaby with helping him cope with the tragic death of his father. Diary and the non-fiction guide to Portland, Fugitives and Refugees, were released in 2003. While on the road in support of Diary, Chuck began reading a short story entitled \'Guts,\' which would eventually become part of the novel Haunted.\\r\\n\\r\\nIn the years that followed, he continued to write, publishing the bestselling Rant, Snuff, Pygmy, Tell-All, a \'remix\' of Invisible Monsters, Damned, and most recently, Doomed.\\r\\n\\r\\nChuck also enjoys giving back to his fans, and teaching the art of storytelling has been an important part of that. In 2004, Chuck began submitting essays to ChuckPalahniuk.net on the craft of writing. These were \'How To\' pieces, straight out of Chuck\'s personal bag of tricks, based on the tenants of minimalism he learned from Tom Spanbauer. Every month, a “Homework Assignment” would accompany the lesson, so Workshop members could apply what they had learned. (all 36 of these essays can currently be found on The Cult\'s sister-site, LitReactor.com).\\r\\n\\r\\nThen, in 2009, Chuck increased his involvement by committing to read and review a selection of fan-written stories each month. The best stories are currently set to be published in Burnt Tongues, a forthcoming anthology, with an introduction written by Chuck himself.\\r\\n\\r\\nHis next novel, Beautiful You, is due out in October 2014.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Written in stolen moments under truck chassis and on park benches to a soundtrack of The Downward Spiral and Pablo Honey, Fight Club came into existence. The adaptation of Fight Club was a flop at the box office, but achieved cult status on DVD. The film’s popularity drove sales of the novel. Chuck put out two novels in 1999, Survivor and Invisible Monsters. Choke, published in 2001, became Chuck’s first New York Times bestseller. Chuck’s work has always been infused with personal experience, and his next novel, Lullaby, was no exception. Chuck credits writing Lullaby with helping him cope with the tragic death of his father. Diary and the non-fiction guide to Portland, Fugitives and Refugees, were released in 2003. While on the road in support of Diary, Chuck began reading a short story entitled \'Guts,\' which would eventually become part of the novel Haunted.</p>\\n<p>In the years that followed, he continued to write, publishing the bestselling Rant, Snuff, Pygmy, Tell-All, a \'remix\' of Invisible Monsters, Damned, and most recently, Doomed.</p>\\n<p>Chuck also enjoys giving back to his fans, and teaching the art of storytelling has been an important part of that. In 2004, Chuck began submitting essays to ChuckPalahniuk.net on the craft of writing. These were \'How To\' pieces, straight out of Chuck\'s personal bag of tricks, based on the tenants of minimalism he learned from Tom Spanbauer. Every month, a “Homework Assignment” would accompany the lesson, so Workshop members could apply what they had learned. (all 36 of these essays can currently be found on The Cult\'s sister-site, LitReactor.com).</p>\\n<p>Then, in 2009, Chuck increased his involvement by committing to read and review a selection of fan-written stories each month. The best stories are currently set to be published in Burnt Tongues, a forthcoming anthology, with an introduction written by Chuck himself.</p>\\n<p>His next novel, Beautiful You, is due out in October 2014.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1962-02-21 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'9\',
            \'uid\' => \'1\',
            \'filename\' => \'cinequest-chuck-palahniuk-2[1].jpg\',
            \'uri\' => \'public://Photo Author/cinequest-chuck-palahniuk-2[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'103153\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'835fa2cc-8198-4a5a-bfb2-32dcfd37a795\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'533\',
            \'height\' => \'800\',
          ),
          array(
            \'fid\' => \'10\',
            \'uid\' => \'1\',
            \'filename\' => \'6[1].jpg\',
            \'uri\' => \'public://Photo Author/6[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'72284\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'d64cf40a-349b-43e6-895f-7b7c22b32d9d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'630\',
            \'height\' => \'340\',
          ),
          array(
            \'fid\' => \'11\',
            \'uid\' => \'1\',
            \'filename\' => \'1z65qbd[1].jpg\',
            \'uri\' => \'public://Photo Author/1z65qbd[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'28128\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'6c83c897-733e-43ec-9400-f2904e3b7537\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'550\',
            \'height\' => \'252\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Tom Clancy\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fb863092-63dd-4e82-b762-7b2d825a952a\',
      \'nid\' => \'6\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9841f3b5-fe8e-4b44-99e9-9baf69bf5254\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Best-selling author Tom Clancy was an English major at Baltimore’s Loyola College and he had a dream of writing a novel. As a Maryland insurance broker with a passion for naval history, his dream came true with his first effort, The Hunt for Red October (1984). He has since written more than a dozen novels, which have a blend of realism and authenticity, intricate plotting, and razor-sharp suspense. Ten of the novels, including The Teeth of the Tiger (Berkley, 2004), feature the character Jack Ryan, former stock broker and CIA employee. Mr. Clancy’s nonfiction works include a series of guided tours of America’s warfighting assets, Submarine, Armored Cav, Fighter Wing, Marine, and Airborne. He lived in Maryland.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Best-selling author Tom Clancy was an English major at Baltimore’s Loyola College and he had a dream of writing a novel. As a Maryland insurance broker with a passion for naval history, his dream came true with his first effort, The Hunt for Red October (1984). He has since written more than a dozen novels, which have a blend of realism and authenticity, intricate plotting, and razor-sharp suspense. Ten of the novels, including The Teeth of the Tiger (Berkley, 2004), feature the character Jack Ryan, former stock broker and CIA employee. Mr. Clancy’s nonfiction works include a series of guided tours of America’s warfighting assets, Submarine, Armored Cav, Fighter Wing, Marine, and Airborne. He lived in Maryland.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1947-04-12 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-10-01 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'12\',
            \'uid\' => \'1\',
            \'filename\' => \'tom-clancy-dies[1].jpg\',
            \'uri\' => \'public://Photo Author/tom-clancy-dies[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'109029\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'2a5049d8-c8d5-4a30-a7c3-3876bbdcd375\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'630\',
            \'height\' => \'400\',
          ),
          array(
            \'fid\' => \'13\',
            \'uid\' => \'1\',
            \'filename\' => \'tom-clancy-dies-aged-66[1].jpg\',
            \'uri\' => \'public://Photo Author/tom-clancy-dies-aged-66[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'37676\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'7e91ed4a-b368-43c8-80a1-d32314de4760\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'650\',
            \'height\' => \'366\',
          ),
          array(
            \'fid\' => \'14\',
            \'uid\' => \'1\',
            \'filename\' => \'CLANCY-refer-articleLarge[1].jpg\',
            \'uri\' => \'public://Photo Author/CLANCY-refer-articleLarge[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'35618\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'04bc5bfc-2c03-4dfd-be1e-fb630a1b10c6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'337\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Dan Brown\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cb1fa904-fba8-4e32-a9a5-aefc3b3754a2\',
      \'nid\' => \'7\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a1192efb-1e9b-4245-af42-2acc3d8f41fa\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Daniel \\"Dan\\" Brown (born June 22, 1964) is an American author of thriller fiction who is best known for the 2003 bestselling novel The Da Vinci Code. Brown\'s novels are treasure hunts set in a 24-hour period, and feature the recurring themes of cryptography, keys, symbols, codes, and conspiracy theories. His books have been translated into 52 languages, and as of 2012, sold over 200 million copies. Two of them, The Da Vinci Code and Angels & Demons, have been adapted into films.\\r\\n\\r\\nBrown\'s novels that feature the lead character Robert Langdon also include historical themes and Christianity as motifs, and as a result, have generated controversy. Brown states on his website that his books are not anti-Christian, though he is on a \'constant spiritual journey\' himself, and says that his book The Da Vinci Code is simply \\"an entertaining story that promotes spiritual discussion and debate\\" and suggests that the book may be used \\"as a positive catalyst for introspection and exploration of our faith.\\"\\r\\n\\r\\nAt 200 million books sold, he is one of the highest selling authors of all time and with only six books, he has achieved these sales writing fewer books than anyone above him on the list. The Robert Langdon series is currently the seventh highest selling series of all time.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Daniel \\"Dan\\" Brown (born June 22, 1964) is an American author of thriller fiction who is best known for the 2003 bestselling novel The Da Vinci Code. Brown\'s novels are treasure hunts set in a 24-hour period, and feature the recurring themes of cryptography, keys, symbols, codes, and conspiracy theories. His books have been translated into 52 languages, and as of 2012, sold over 200 million copies. Two of them, The Da Vinci Code and Angels &amp; Demons, have been adapted into films.</p>\\n<p>Brown\'s novels that feature the lead character Robert Langdon also include historical themes and Christianity as motifs, and as a result, have generated controversy. Brown states on his website that his books are not anti-Christian, though he is on a \'constant spiritual journey\' himself, and says that his book The Da Vinci Code is simply \\"an entertaining story that promotes spiritual discussion and debate\\" and suggests that the book may be used \\"as a positive catalyst for introspection and exploration of our faith.\\"</p>\\n<p>At 200 million books sold, he is one of the highest selling authors of all time and with only six books, he has achieved these sales writing fewer books than anyone above him on the list. The Robert Langdon series is currently the seventh highest selling series of all time.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1964-06-22 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'15\',
            \'uid\' => \'1\',
            \'filename\' => \'danbrown1[1].jpg\',
            \'uri\' => \'public://Photo Author/danbrown1[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'216393\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'83ec18d8-f44c-4081-8049-3f4e1423d6f5\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'450\',
            \'height\' => \'600\',
          ),
          array(
            \'fid\' => \'16\',
            \'uid\' => \'1\',
            \'filename\' => \'dan-brown_2555505b[1].jpg\',
            \'uri\' => \'public://Photo Author/dan-brown_2555505b[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'55498\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'dab7c3b0-0463-4de8-83f5-fef2073e83d1\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'620\',
            \'height\' => \'387\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Reg Keeland\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'42eb462a-898d-4966-af3e-7fc23cd04704\',
      \'nid\' => \'8\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ab2a6d62-fe28-4fd5-8f1d-def3a81db2d2\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Steven T. Murray (born 7 October 1943) is an American translator from Swedish, German, Danish, and Norwegian. He has worked under the pseudonyms Reg Keeland and McKinley Burnett when edited into UK English. He translated the bestselling Millennium series by Stieg Larsson, three crime novels and two African novels by Henning Mankell, three psychological suspense novels by Karin Alvtegen, and works by many other authors. In 2001 he won the Gold Dagger Award in the UK for his translation of Sidetracked by Henning Mankell.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Steven T. Murray (born 7 October 1943) is an American translator from Swedish, German, Danish, and Norwegian. He has worked under the pseudonyms Reg Keeland and McKinley Burnett when edited into UK English. He translated the bestselling Millennium series by Stieg Larsson, three crime novels and two African novels by Henning Mankell, three psychological suspense novels by Karin Alvtegen, and works by many other authors. In 2001 he won the Gold Dagger Award in the UK for his translation of Sidetracked by Henning Mankell.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1943-10-07 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'17\',
            \'uid\' => \'1\',
            \'filename\' => \'camilla[1].jpg\',
            \'uri\' => \'public://Photo Author/camilla[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'279882\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'6d8f1fc0-930e-46a2-b8bd-114dc345d4a6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'800\',
            \'height\' => \'600\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Oscar Wilde\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e2cd33fb-5c09-41af-8c8a-ab7b5c9f8569\',
      \'nid\' => \'9\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b3cd3565-c3ec-4c69-92db-065b534eb385\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Oscar Fingal O\'Flahertie Wills Wilde was an Irish playwright, poet and author of numerous short stories and one novel. Known for his biting wit, and a plentitude of aphorisms, he became one of the most successful playwrights of the late Victorian era in London, and one of the greatest celebrities of his day. Several of his plays continue to be widely performed, especially The Importance of Being Earnest.\\r\\n\\r\\nAs the result of a widely covered series of trials, Wilde suffered a dramatic downfall and was imprisoned for two years hard labour after being convicted of \\"gross indecency\\" with other men. After Wilde was released from prison he set sail for Dieppe by the night ferry. He never returned to Ireland or Britain, and died in poverty.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Oscar Fingal O\'Flahertie Wills Wilde was an Irish playwright, poet and author of numerous short stories and one novel. Known for his biting wit, and a plentitude of aphorisms, he became one of the most successful playwrights of the late Victorian era in London, and one of the greatest celebrities of his day. Several of his plays continue to be widely performed, especially The Importance of Being Earnest.</p>\\n<p>As the result of a widely covered series of trials, Wilde suffered a dramatic downfall and was imprisoned for two years hard labour after being convicted of \\"gross indecency\\" with other men. After Wilde was released from prison he set sail for Dieppe by the night ferry. He never returned to Ireland or Britain, and died in poverty.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1854-10-16 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1900-11-30 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'18\',
            \'uid\' => \'1\',
            \'filename\' => \'e421cc1653ad7b74fae9c26f608[1].jpg\',
            \'uri\' => \'public://Photo Author/e421cc1653ad7b74fae9c26f608[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78394\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'0697fd51-43e7-46ce-939b-78083d37a71e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'620\',
            \'height\' => \'349\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'John Ronald Reuel Tolkien\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'496f0330-84ea-4878-8ff8-e6fc5db0f086\',
      \'nid\' => \'10\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e514d5ef-9b2e-4ee2-9802-cd0066a80ac5\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "John Ronald Reuel Tolkien, CBE (/ˈtɒlkiːn/ TOL-keen; 3 January 1892 – 2 September 1973) was an English writer, poet, philologist, and university professor, best known as the author of the classic high fantasy works The Hobbit, The Lord of the Rings, and The Silmarillion.\\r\\n\\r\\nHe served as the Rawlinson and Bosworth Professor of Anglo-Saxon and Fellow of Pembroke College, Oxford, from 1925 to 1945 and Merton Professor of English Language and Literature and Fellow of Merton College, Oxford from 1945 to 1959. He was at one time a close friend of C. S. Lewis—they were both members of the informal literary discussion group known as the Inklings. Tolkien was appointed a Commander of the Order of the British Empire by Queen Elizabeth II on 28 March 1972.\\r\\n\\r\\nAfter Tolkien\'s death, his son Christopher published a series of works based on his father\'s extensive notes and unpublished manuscripts, including The Silmarillion. These, together with The Hobbit and The Lord of the Rings form a connected body of tales, poems, fictional histories, invented languages, and literary essays about a fantasy world called Arda, and Middle-earth[b] within it. Between 1951 and 1955, Tolkien applied the term legendarium to the larger part of these writings. While many other authors had published works of fantasy before Tolkien, the great success of The Hobbit and The Lord of the Rings led directly to a popular resurgence of the genre. This has caused Tolkien to be popularly identified as the \\"father\\" of modern fantasy literature—or, more precisely, of high fantasy.\\r\\n\\r\\nIn 2008, The Times ranked him sixth on a list of \\"The 50 greatest British writers since 1945\\". Forbes ranked him the 5th top-earning \\"dead celebrity\\" in 2009.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>John Ronald Reuel Tolkien, CBE (/ˈtɒlkiːn/ TOL-keen; 3 January 1892 – 2 September 1973) was an English writer, poet, philologist, and university professor, best known as the author of the classic high fantasy works The Hobbit, The Lord of the Rings, and The Silmarillion.</p>\\n<p>He served as the Rawlinson and Bosworth Professor of Anglo-Saxon and Fellow of Pembroke College, Oxford, from 1925 to 1945 and Merton Professor of English Language and Literature and Fellow of Merton College, Oxford from 1945 to 1959. He was at one time a close friend of C. S. Lewis—they were both members of the informal literary discussion group known as the Inklings. Tolkien was appointed a Commander of the Order of the British Empire by Queen Elizabeth II on 28 March 1972.</p>\\n<p>After Tolkien\'s death, his son Christopher published a series of works based on his father\'s extensive notes and unpublished manuscripts, including The Silmarillion. These, together with The Hobbit and The Lord of the Rings form a connected body of tales, poems, fictional histories, invented languages, and literary essays about a fantasy world called Arda, and Middle-earth[b] within it. Between 1951 and 1955, Tolkien applied the term legendarium to the larger part of these writings. While many other authors had published works of fantasy before Tolkien, the great success of The Hobbit and The Lord of the Rings led directly to a popular resurgence of the genre. This has caused Tolkien to be popularly identified as the \\"father\\" of modern fantasy literature—or, more precisely, of high fantasy.</p>\\n<p>In 2008, The Times ranked him sixth on a list of \\"The 50 greatest British writers since 1945\\". Forbes ranked him the 5th top-earning \\"dead celebrity\\" in 2009.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1892-01-03 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1973-09-02 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'19\',
            \'uid\' => \'1\',
            \'filename\' => \'Tolkien[1].jpg\',
            \'uri\' => \'public://Photo Author/Tolkien[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'51012\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'b28af98f-1357-44e3-a75e-c85594c5416d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'626\',
            \'height\' => \'422\',
          ),
          array(
            \'fid\' => \'20\',
            \'uid\' => \'1\',
            \'filename\' => \'Tolkien-publisher[1].jpg\',
            \'uri\' => \'public://Photo Author/Tolkien-publisher[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'175085\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'d533dd9d-99f0-466b-9cc7-295be85b90bd\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'607\',
            \'height\' => \'450\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'James Matthew Barrie\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0ade0fbe-79cc-4908-b6d5-32a9626d8a41\',
      \'nid\' => \'11\',
      \'type\' => \'author\',
      \'language\' => \'und\',
      \'created\' => \'1404399194\',
      \'changed\' => \'1404399194\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f63885c6-33ea-4abf-9cd3-8e40b32d00dc\',
      \'revision_timestamp\' => \'1404399194\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Sir James Matthew Barrie, 1st Baronet, OM (9 May 1860 – 19 June 1937) was a Scottish author and dramatist, best remembered today as the creator of Peter Pan.\\r\\n\\r\\nThe child of a family of small-town weavers, he was educated in Scotland. He moved to London, where he developed a career as a novelist and playwright. There he met the Llewelyn Davies boys who inspired him in writing about a baby boy who has magical adventures in Kensington Gardens (included in The Little White Bird), then to write Peter Pan, or The Boy Who Wouldn\'t Grow Up, a \\"fairy play\\" about this ageless boy and an ordinary girl named Wendy who have adventures in the fantasy setting of Neverland.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Sir James Matthew Barrie, 1st Baronet, OM (9 May 1860 – 19 June 1937) was a Scottish author and dramatist, best remembered today as the creator of Peter Pan.</p>\\n<p>The child of a family of small-town weavers, he was educated in Scotland. He moved to London, where he developed a career as a novelist and playwright. There he met the Llewelyn Davies boys who inspired him in writing about a baby boy who has magical adventures in Kensington Gardens (included in The Little White Bird), then to write Peter Pan, or The Boy Who Wouldn\'t Grow Up, a \\"fairy play\\" about this ageless boy and an ordinary girl named Wendy who have adventures in the fantasy setting of Neverland.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_birthdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1860-05-09 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_deathdate\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1937-06-19 00:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'Europe/Helsinki\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'21\',
            \'uid\' => \'1\',
            \'filename\' => \'5255014[1].jpg\',
            \'uri\' => \'public://Photo Author/5255014[1].jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'18656\',
            \'status\' => \'1\',
            \'timestamp\' => \'1404399194\',
            \'uuid\' => \'1559f78a-40dc-4ff3-be93-3581431ce334\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'226\',
            \'height\' => \'282\',
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
      \'last_comment_timestamp\' => \'1404399194\',
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
