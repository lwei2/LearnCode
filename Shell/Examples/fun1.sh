#########################################################################
# File Name: fun1.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
funWriteReturn(){
	echo "enter a num1:"
	read num1
	echo "enter a num2:"
	read num2
	echo "$num1 and $num2"
	return $(($num1+$num2))
}
funWriteReturn
echo "the sum is $? !"
