/*************************************************************************
    > File Name: Pro1033.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int FirstNotRepeatingChar(string str)
		{
			if(str.size() <= 0)
				return -1;
			int cnt[100] = {0};
			int i, result = -1;
			for(i = 0; i < str.size(); i++)
				cnt[str[i] - 'A']++;
			for(i = 0; i < str.size(); i++)
				if(cnt[str[i] - 'A'] == 1)
				{
					result = i;
					break;
				}
			return result;
		}
};

int main(void)
{
	return 0;
}
