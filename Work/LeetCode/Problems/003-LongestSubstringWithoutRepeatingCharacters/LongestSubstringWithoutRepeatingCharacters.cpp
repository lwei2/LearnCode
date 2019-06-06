/*************************************************************************
    > File Name: LongestSubstringWithoutRepeatingCharacters.cpp
    > Author: lwei
    > Mail: root@163.com 
    > Created Time: 2018年01月20日 星期六 12时28分00秒
 ************************************************************************/

#include<iostream>

using namespace std;
class Solution
{
	int lengthOfLongestSubstring(string s)
	{
		int count[256];
		memset(count,-1,256*sizeof(int));
		int len=0,maxL=0;
		for(int i=0;i<s.size();i++,len++)
		{
			if(count[s[i]]>=0)
			{
				maxL=max(len,maxL);
				len=0;
				i=count[s[i]]+1;
				i=count[s[i]]+1;
				memset(count,-1,256*sizeof(int));
			}
			count[s[i]]=i;
		}
		return max(len,maxL);
	}
};
