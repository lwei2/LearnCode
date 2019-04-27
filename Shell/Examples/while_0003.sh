#########################################################################
# File Name: while_0003.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
i=1
a=$RANDOM
max=$a
min=$a
while [ $i -le 10 ];do
	[ $max -lt $a ] && max=$a
	[ $min -gt $a ] && min=$a
a=$RANDOM
	echo "$a"
	let i++
done
echo "max is $max"
echo "min is $min"
