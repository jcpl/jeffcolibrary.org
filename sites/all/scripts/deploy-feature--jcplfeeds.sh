#! /bin/bash

# Enable feed features.
drush -v en feeds_import jcplfeeds jcplfeedcontenttypes jcplfeedsimporter jcplviews -y
# Run deployment script to position block.
drush -v php-script sites/all/scripts/deploy-feature--jcplfeeds
# Clear cache
drush -v cc all -y
