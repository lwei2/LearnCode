#########################################################################
# File Name: if_0009.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
str="root"
if [ $str == "root" ]
then
	echo "yes"
fi
if [ -n $str ];then
	echo "$str is not null"
fi
