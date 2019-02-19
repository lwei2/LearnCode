/*************************************************************************
    > File Name: Pro1.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :原串翻转
	请实现一个算法，在不使用额外数据结构和储存空间的情况下，翻转一个给定的字符串(可以使用单个过程变量)。给定一个string iniString，请返回一个string，为翻转后的字符串。保证字符串的长度小于等于5000。
	"This is nowcoder"
	"redocwon si sihT"
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		string reverString1(string iniString)
		{
			auto len = iniString.size();
			char tempChar;
			for(decltype(len) index = 0; index!=len/2;++index)
			{
				tempChar = iniString[index];
				iniString[index] = iniString[len-1-index];
				iniString[len-1-index] = tempChar;
			}
			return iniString;
		}
		string reverString2(string iniString)
		{
			for(int i = 0, j = iniString.size() - 1; i < j; i++,j--)
			{
				iniString[i]^=iniString[j]^=iniString[i]^=iniString[j];
			}
			return iniString;
		}
};

int main(void)
{
	return 0;
}
