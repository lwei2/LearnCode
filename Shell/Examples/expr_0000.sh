#########################################################################
# File Name: expr_0000.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read x
read y
echo "x=$x,y=$y"
sum=`expr $x + $y`	
echo "sum=x+y=$sum"
