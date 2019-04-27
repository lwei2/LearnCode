#########################################################################
# File Name: if_0000.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash

x=1
y=2

if [ $x -eq $y ]
then
	echo "$x -eq $y: a == b"
else
	echo "$x -eq $y: a != b"
fi

if [ $x -ne $y ]
then
	echo "$x -ne $y: a != b"
else
	echo "$x -ne $y: a == b"
fi

if [ $x -gt $y ]
then
	echo "$x -gt $y: a > b"
else
	echo "$x -gt $y: a <= b"
fi

if [ $x -lt $y ]
then 
	echo "$x -lt $y: a < b"
else
	echo "$x -lt $y: a >= b"
fi

if [ $x -ge $y ]
then
	echo "$x -ge $y: a >= b"
else
	echo "$x -ge $y: a < b"
fi

if [ $x -le $y ]
then
	echo "$x -le $y: a <= b"
else
	echo "$y -le $y: a > b"
fi



