#########################################################################
# File Name: if_0004.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash

first_num=99
second_num=100
if [ "$first_num" -gt "$second_num" ]
then
	echo "$first_num > $second_num"
else
	echo "$first_num <= $second_num"
fi

if [ "$first_num" -eq "$second_num" ]
then
	echo "$first_num == $second_num"
else
	echo "$first_num != $second_num"
fi

if [ "$first_num" -lt "$second_num" ]
then
	echo "$first_num < $second_num"
else
	echo "$first_num >= $second_num"
fi

