#########################################################################
# File Name: sum_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read -p "Please input a positive integer:" n
i=1
sum=0
for i in `seq 1 $n`;do
	if [[ $n =~ (^[0-9]*[1-9][0-9]*$) ]];then
		let sum+=i
	else
		echo "a wrong number" && exit
	fi
		let i++
	done
echo "sum is $sum"
