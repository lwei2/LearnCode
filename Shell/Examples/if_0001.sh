#########################################################################
# File Name: if_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
num1=$[2*3]
num2=$[1+5]
if test $[num1] -eq $[num2]
then
	echo 'num1 == num2'
else
	echo 'num1 != num2'
fi

