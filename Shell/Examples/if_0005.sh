#########################################################################
# File Name: if_0005.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash

x=10
y=20
if [[ ${x} -eq ${y} && $x -lt $y ]]
then
	echo "x == y"
else
	echo "x != y"
fi
