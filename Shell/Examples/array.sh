#########################################################################
# File Name: array.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:
#########################################################################
#!/bin/bash
city=(Nanjing Atlanta Massachusetts Marseilles)          #建立一个简单的数组
echo "Extracting Substring"
echo ${city[*]:0}                #抽取整个数组
echo ${city[*]:1}               #抽取从第1个元素到结束的数组
echo ${city[*]:3}               #抽取从第3个元素到结束的数组
echo ${city[*]:0:2}             #抽取从第0个元素开始的2个元素
echo
echo "Removing Substring"        #演示删除子串功能
echo ${city[*]#M*a}             #删除从M到a的最短子串
echo ${city[*]##M*a}            #删除从M到a的最长子串
echo
echo "Replcing Substring"        #演示替换子串功能
echo ${city[*]/M*s/Year}        #替换第1次与M＊s匹配的子串
echo ${city[*]//M*s/Year}
