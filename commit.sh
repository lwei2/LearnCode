#########################################################################
# File Name: commit.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################

#!/bin/bash
echo "============================================"
echo "start to commit your code."

git add . && git commit -m "add master" && git push origin master

echo "end to commit your code."
echo "============================================"
