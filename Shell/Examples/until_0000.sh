#########################################################################
# File Name: until_0000.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
a=0
until [ ! $a -lt 10 ] 
do
	echo $a
	a=`expr $a + 1`
done

