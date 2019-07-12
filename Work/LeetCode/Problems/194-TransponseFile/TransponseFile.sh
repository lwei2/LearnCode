#########################################################################
# File Name: TransponseFile.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
i=0 && for item in `head -1 file.txt`
do
	let i++;
	cut -d ' ' -f $i file.txt | xargs;
done
