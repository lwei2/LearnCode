#########################################################################
# File Name: while_0004.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
while (( $# > 0));do
	echo $*
	shift
done
