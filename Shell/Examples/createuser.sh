#########################################################################
# File Name: createuser.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read -p "please input username:" username
	useradd $username &> /dev/null
	if	[ $? -eq 0 ];then
		echo "add $username user" && id & username
	else
		echo "the user already exits"
	fi

