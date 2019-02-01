/*************************************************************************
    > File Name: Pro1053.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
输出描述:
如果当前字符流没有存在出现一次的字符，返回#字符。
************************************************************************/

#include<iostream>
#include<queue>

using namespace std;

class Solution
{
	public:
		void Insert(char ch)
		{
			++hashArray[ch - '\0'];
			if(hashArray[ch - '\0'] == 1)
				data.push_back(ch);
		}
		char FirstAppearingOnce()
		{
			while(!data.empty() && hashArray[data.front()] >= 2)
				data.pop_front();
			if(data.empty())
				return '#';
			return data.front();
		}
	private:
		unsigned char hashArray[128];
		deque<char>data;
};

int main(void)
{
	return 0;
}
