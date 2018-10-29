#########################################################################
# File Name: Digits.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
while :
do
	read -p "Enter a number(number>0):"
	if echo $n |grep -q '[^0-9]'
	then
		echo "Your number  is wrong!"
		continue
	fi
	if [[ $n -lt 1 ]]
	then
		echo "Your number is lesss than 1"
		continue
	fi
	for i in `seq 1 $n`
	do
		j=$[$j+$i]
	done
	echo $j
	exit
done














