#########################################################################
# File Name: WordFrequency.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
cat words.txt | sed 's/ /\n/g' | grep -v '^$' | sort | uniq -c | sort -nr | awk '{print $NF,$1}'	
