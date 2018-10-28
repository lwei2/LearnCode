#########################################################################
# File Name: break.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
while :
do
	echo -n "Enter between 1 to 5 :"
	read num
	case $num in
		1|2|3|4|5) echo "you enter the num: $num"
			;;
		*) echo "you enter the wrong num! the game is over!"
			break
			;;
	esac
done
