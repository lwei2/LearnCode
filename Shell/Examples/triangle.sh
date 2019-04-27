#########################################################################
# File Name: triangle.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read -p "Please input line:" line
#is_digit $line
[ $? -ne 0 ] && exit
for l in `seq 1 $line`;do
	for s in `seq 1 $[ $line - $l]`;do
		echo -en " "
	done
	for i in `seq 1 $[ 2*$l - 1 ]`;do
		if [ $i -eq 1 ];then
			color=$[ RANDOM%7 + 31 ]
			echo -en "\e[1;${color};5m*\e[0m"
		elif [ $i -eq $[ $l*2 - 1 ] ]; then
			echo -en "\e[1;${color};5m*\e[0m"
		else
			echo -en "*"
		fi
	done
	echo
done

