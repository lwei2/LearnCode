#########################################################################
# File Name: plus.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
for i in `seq 1 9`
do
	for j in `seq 1 $i`
	do
		k=$[$i*$j]
		##-n选项，不换行，-e使用制表符
		echo -ne "$j""x""$i=$k\t"
	done
	echo
done

