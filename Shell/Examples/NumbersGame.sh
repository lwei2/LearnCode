#########################################################################
# File Name: NumbersGame.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
n=$[$RANDOM%100]
while :
do
	read -p "Please enter the number(1-100):" n1
n2=`echo $n1|sed 's/[0-9]//g'`
if [ ! -z $n2 ]
then
	echo "You enter is a wrong number"
	continue;
fi
if [ $n1 == $n ]
then
	echo "You guess ok!"
	break;
elif [ $n1 -gt $n ]
then
	echo "You enter the number is large!"
	continue
else
	echo "You enter the number is little!"
	continue
fi
done

