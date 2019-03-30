#########################################################################
# File Name: expr_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash
a=1
b=1
val=`expr $a + $b`
echo "a + b = $val"

val=`expr $a - $b`
echo "a - b = $val"

val=`expr $a \* $b`
echo "a * b = $val"

val=`expr $a / $b`
echo "a / b = $val"

val=`expr $a % $b`
echo "a % b = $val"

if [ $a == $b ]
then
	echo "a == b"
fi
if [ $a != $b ]
then
	echo "a != b"
fi


