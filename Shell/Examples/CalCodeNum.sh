#########################################################################
# File Name: CalCodeNum.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#/bin/bash

find . -type f -name "*.cpp" |xargs cat | wc -l
