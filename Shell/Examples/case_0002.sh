#########################################################################
# File Name: case_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
####################################################g#####################
#!/bin/bash
read -p "please input file path:" path
a=`ls -l $path|grep -o "^."`
case $a in
-)
	echo "common file"
	;;
d)
	echo "directory file"
	;;
l)
	echo "linked file"
	;;
*)
	echo "other file"
	;;
esac
