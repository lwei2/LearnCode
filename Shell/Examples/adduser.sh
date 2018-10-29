#########################################################################
# File Name: adduser.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
for i in `seq 0 1 100`
do
	if [ $i -lt 10 ]
	then
		useradd -g 100 user_0$i
	elif [[ $i == 100 ]]
	then
		useradd -g 100 user_100
	else
		useradd -g 100 user_$i
	fi
done

