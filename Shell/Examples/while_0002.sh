#########################################################################
# File Name: while_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
i=1
sum=0
while [ $i -le 100 ];do
	if [ $[ $i%2 ] -ne 0 ];then
		let sum+=i
	fi
	let i++
done
echo "sum is $sum"
