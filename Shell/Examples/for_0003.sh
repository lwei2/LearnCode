#########################################################################
# File Name: for_0003.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
for((i = 1, sum = 0; i <= 100; i++));do
	[ $i -eq 51 ] && continue
	[ $[i%2] -eq 1 ] && let sum+=i
done
echo "sum is $sum"
unset i sum
