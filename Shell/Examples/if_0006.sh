#########################################################################
# File Name: if_0006.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
A=`ps -C nginx --no-header |wc -l`
if [ $A -eq 0 ]
then
	/usr/local/nginx/sbin/nginx
	sleep 2
	if [ `ps -C nginx --no-header |wc -l` -eq 0 ]
	then
		killall keepalived
	fi
fi
