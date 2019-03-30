#########################################################################
# File Name: string_0005.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash

a="abc"
b="efg"

if [ $a = $b ]
then
	echo "$a等于$b"
else
	echo "$a不等于$b"
fi
if [ $a != $b ]
then
	echo "$a不等于$b"
else
	echo "$a等于$b"
fi
if [ -z $a ]
then
	echo "$a字符串长度为0"
else
	echo "$a字符串长度不为0"
fi
if [ -n "$a" ]
then
	echo "$a字符串长度不为0"
else
	echo "$a字符串长度为0"
fi
if [ $a ]
then
	echo "$a字符串不为空"
else
	echo "$a字符串为空"
fi
