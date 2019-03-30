#########################################################################
# File Name: expr_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
read x
echo "x=$x"
read y
echo "y=$y"
sum=`expr $x - $y`
echo "sum=x-y=$sum"
