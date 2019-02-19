/*************************************************************************
    > File Name: Pro1.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	确定字符互异
	请实现一个算法，确定一个字符串的所有字符是否全都不同。这里我们要求不允许使用额外的存储结构。给定一个string iniString，请返回一个bool值,True代表所有字符全都不同，False代表存在相同的字符。保证字符串中的字符为ASCII字符。字符串的长度小于等于3000。
	#"aeiou"
		True
	#"BarackObama"
		False
 ************************************************************************/

#include<iostream>

using namespace std;
class Solution
{
	public:
		bool checkDifferent1(string iniString)
		{
			if(iniString.empty())
				return true;
			for(int i = 0; i < iniString.size(); i++)
			{
				for(int j = i+1; j < iniString.size(); j++)
				{
					if(iniString[i] == iniString[j])
						return false;
				}
			}
			return true;
		}
		bool checkDifferent2(string iniString)
		{
			for(int i = 0; i < iniString.size(); ++i)
			{
				if(iniString.find_last_of(iniString[i])!=i)
					return false;
			}
			return true;
		}
		bool checkDifferent3(string iniString)
		{
			for(int i = 0; i < iniString.size(); i++)
			{
				for(int j = 0; j < iniString.size(); j++)
				{
					if(iniString[i] == iniString[j])
						return false;
					else
						continue;
				}
			}
			return true;
		}
		bool checkDifferent4(string iniString)
		{
			if(iniString.length() > 256)
				return false;
			for(int i = 0; i < iniString.size(); i++)
			{
				for(int j = i+1; j < iniString.size(); j++)
				{
					if(iniString[i] == iniString[j])
						return false;
				}
			}
			return true;
		}
};
int main(void)
{

	return 0;
}
