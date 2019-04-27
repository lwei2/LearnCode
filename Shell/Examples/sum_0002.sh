#########################################################################
# File Name: sum_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
i=1
sum=0
for i in {1..100};do
	if [ $[$i%3] -eq 0 ];then
		let sum+=i
	fi
		let i++
done
echo "the sum is $sum"
