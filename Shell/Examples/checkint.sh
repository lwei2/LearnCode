#########################################################################
# File Name: checkint.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read -p "please input a digit:" int
if [[ $int =~ (^[0-9]*[1-9][0-9]*$) ]];then
	echo "this digit is positive integer"
else
	echo "this digit is not positive integer"
fi

