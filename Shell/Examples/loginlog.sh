#########################################################################
# File Name: loginlog.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
until who | grep "^root\>";do
	sleep 3
done
who|egrep -o "^root.*"| sed -r 's/^root[[:space:]]+'// >> ./root.log
echo "you should logout" 
