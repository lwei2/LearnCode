#########################################################################
# File Name: chess.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
red="\e[41m \e[0m"
white="\e[47m \e[0m"
for i in `seq 1 8`;do
	if [ $[i%2] -eq 0 ];then
		for j in {1..4};do
			echo -en "$red$white"
		done
	else
		for j in {1..4};do
			echo -en "$white$red"
		done
	fi
	echo
done
