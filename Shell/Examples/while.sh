#########################################################################
# File Name: while.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
num=1
while(($num<=5))
do
	echo $num
	let "num++"
done
