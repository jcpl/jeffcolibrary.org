#! /bin/bash

# Enable compact_forms.module
drush -v en compact_forms -y
# Set various values for compact forms, let's just do the first 4 facet forms.
drush -v vset compact_forms_ids "`echo -e "jeffcolibrary-blks-facet-form\njeffcolibrary-blks-facet-form--1\njeffcolibrary-blks-facet-form--2\njeffcolibrary-blks-facet-form--3\njeffcolibrary-blks-facet-form--4"`" -y
# Clear cache
drush -v cc all -y
