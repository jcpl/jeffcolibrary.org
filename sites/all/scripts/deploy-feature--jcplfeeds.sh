#! /bin/bash

# Enable feed features
drush -v en feeds_import jcplfeeds jcplfeedcontenttypes jcplfeedsimporter -y
# Clear cache
drush -v cc all -y
