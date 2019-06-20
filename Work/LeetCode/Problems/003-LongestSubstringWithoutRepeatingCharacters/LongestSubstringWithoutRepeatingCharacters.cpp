/*************************************************************************
    > File Name: LongestSubstringWithoutRepeatingCharacters.cpp
    > Author: lwei
    > Mail: root@163.com 
    > Created Time: 2018年01月20日 星期六 12时28分00秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

class Solution
{
	public:
		int lengthOfLongestSubstring1(string s)
		{
			int len = 0;
			int start = 0;
			string str = "";
			for(int i = 0; i < s.length(); i++)
			{
				if(str.find(s[i]) == -1)
					str = str+s[i];
				else
				{
					len = len > str.length() ? len:str.length();
					i = s.find_first_of(s[i],start);
					start = i+1;
					str="";
				}
			}
			len = len > str.length() ? len : str.length();
			return len;
		}
	public:		
		int lengthOfLongestSubstring2(string s)
		{
			int count[256];
			memset(count,-1,256*sizeof(int));
			int len=0,maxL=0;
			for(int i=0;i<s.size();i++,len++)
			{
				//printf("i:%d\t s[%d]: %d\t len :%d\t count[s[%d]]:%d\n",i,i,s[i],len,i,count[s[i]]);
				if(count[s[i]]>=0)
				{
					//printf("s[%d]:%d\t count[s[%d]]:%d\t len:%d\t maxL:%d\n",i,s[i],i,count[s[i]],len,maxL);
					maxL=max(len,maxL);
					//printf("len:%d\t maxL:%d\n",len, maxL);
					len=0;
					i=count[s[i]]+1;
					//cout<<"i:"<<i<<endl;
					memset(count,-1,256*sizeof(int));
				}
				count[s[i]]=i;
			}
			
			//cout<<"3.len:"<<len<<"|"<<"maxL:"<<maxL<<endl;
			return max(len,maxL);
		}
};

int main(void)
{
	string s;
	getline(cin,s);
	Solution p;
	int result = p.lengthOfLongestSubstring2(s);
	cout<<result<<endl;
	return 0;
}
