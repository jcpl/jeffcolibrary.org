#! /bin/bash

# Enable feed features.
drush -v en feeds_import jcplfeeds jcplfeedcontenttypes jcplfeedsimporter jcplviews -y
# Clear cache
drush -v cc all -y
# Run deployment script to position block.
drush -v php-script sites/all/scripts/deploy-feature--jcplfeeds
# Clear cache
drush -v cc all -y
