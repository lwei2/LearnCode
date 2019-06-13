#########################################################################
# File Name: while_0005.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
Path=/work/Github/LearnCode/Shell/Examples
echo $Path
[ -d $Path ] || mkdir $Path

i=1
while(($i<=100))
do
	filename="Problem"$i""
	mkdir $Path/$filename
	let "i++"
done
