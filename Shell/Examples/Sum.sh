#########################################################################
# File Name: sum.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
for i in `seq 1 100`
do
	sum=$[$sum + $i]
done
echo $sum

