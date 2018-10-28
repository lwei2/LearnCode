#########################################################################
# File Name: for.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
a=10
b=20
if [ $a == $b ]
then
	echo "a == b"
elif [ $a -gt $b ]
then
	echo "a > b"
elif [ $a -lt $b ]
then
	echo "a < b"
else
	echo "a ? b"
fi

