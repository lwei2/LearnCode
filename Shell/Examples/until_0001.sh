#########################################################################
# File Name: until_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
num=$[ $RANDOM%10 + 1 ]
read -p "Please guess:" i
until [ $num -eq $i ];do
	if [ $i -lt $num ];then
		echo "less, guess again"
	else
		echo "bigger,guess again"
	fi
	read -p "Please guess:" i
done
echo "guess successd";exit
