#########################################################################
# File Name: let_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash
let	"value=10<<2" 
echo "value=$value"
let "value=10>>2"
echo "value=$value"
let "value=10&2"
echo "value=$value"
let "value=10|2"
echo "value=$value"
let "value=~10"
echo "value=$value"
let "value=10^2"
echo "value=$value"
