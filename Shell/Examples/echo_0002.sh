#########################################################################
# File Name: echo_0002.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:显示表达式值
#########################################################################
#!/bin/bash
echo "4*0.56" | bc
no=54
result=`echo "$no * 1.5" | bc`
echo $result

