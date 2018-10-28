#########################################################################
# File Name: case.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#/bin/bash
echo 'Enter between 1 to 4 :'
echo 'Enter num:'
read num
case $num in
	1) echo 'you choose one'
		;;
	2) echo 'you choose two'
		;;
	3) echo 'you choose three'
		;;
	4) echo 'you choose fource'
		;;
	*) echo 'you choose error'
		;;
esac


