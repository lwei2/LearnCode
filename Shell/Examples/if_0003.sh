#########################################################################
# File Name: if_0003.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash

num1=15
if [ "$num1" -eq 15 ]
then
	echo "the num1 == 15"
else
	echo "the num1 != 15"
fi

if [ "$num1" -eq 20 ]
then
	echo "the num1 == 20"
else
	echo "the num1 != 20"
fi

if [ "$num1" -lt 15 ]
then
	echo "the num1 < 15"
else
	echo "the num1 >= 15"
fi

if [ "$num1" -gt 20 ]
then
	echo "the num1 > 20"
else
	echo "the num1 <= 20"
fi
