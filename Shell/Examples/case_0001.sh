#########################################################################
# File Name: case_0001.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
read -p "can i help you? yes or no " ans
case $ans in
[yY][eE][sS]|[yY])
         echo "ok,come on"
         ;;
[nN][oO]|[nN])
         echo "no,thanks"
         ;;
*)
         echo "byebye"
         ;;
esac
