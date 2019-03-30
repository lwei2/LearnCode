#########################################################################
# File Name: if_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash

x=1
y=1
z=2

if [ $x != $y ]
then
	echo "$x != $y : x 不等于 y"
else
	echo "$x == $y : x 等于 y"
fi

if [ $x -lt $z -a $y -gt $z ]
then
	echo "$x 小于 $z 且 $y 大于 $z :返回 true"
else
	echo "$x 小于 $z 且 $y 大于 $z :返回 false"
fi

if [ $x -lt $z -o $y -gt $z ]
then
	echo "$x 小于 $z 或 $y 大于 $z :返回 true"
else
	echo "$x 小于 $z 或 $y 大于 $z :返回 false"
fi



