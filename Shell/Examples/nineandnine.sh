#########################################################################
# File Name: nineandnine.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
for i in {1..9};do
	for j in `seq 1 $i`;do
		echo -n "$i*$j=$[i*j] "
	done
	echo 
done
