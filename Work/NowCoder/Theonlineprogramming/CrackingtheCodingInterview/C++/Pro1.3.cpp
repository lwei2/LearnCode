/*************************************************************************
    > File Name: Pro1.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :确定两串乱顺同构
给定两个字符串，请编写程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。这里规定大小写为不同字符，且考虑字符串中的空格。给定一个string stringA和一个string stringB，请返回一个bool，代表两串是否重新排列后可相同。保证两串的长度都小于等于5000。
#"This is nowcoder","is This nowcoder"
true
#"Here you are","Are you here"
false
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		bool checkSam1(string stringA, stringB)
		{
			if(stringA.empty() || stringB.empty())
				return false;
			int hashtableA[256] = {0};
			int hashtableB[256] = {0};
			for(int i = 0; i < stringA.size(); i++)
				hashtableA[stringA[i]]++;
			for(int i = 0; i < stringB.size(); i++)
				hashtableB[stringB[i]]++;
			for(int i = 0; i < 256; i++)
				if(hashtableA[i] != hashtableB[i])
					return false;
			return true;
		}
		bool checkSam2(string stringA, string stringB)
		{
			if(stringA.size() != stringB.size())
				return false;
			char strA[256] = {0};
			char strB[256] = {0};
			for(int i = 0; i < stringA.size(); i++)
			{
				strA[stringA[i]]++;
				strB[stringB[i]]++;
			}
			for(int i = 0; i < 256; i++)
				if(strA[i] != strB[i])
					return false;
			return true;
		}
		bool checkSam3(string stringA, string stringB)
		{
			if(stringA.size() != stringB.size())
				return false;
			char strA[256] = {0};
			char strB[256] = {0};
			for(int i = 0, j = 0; i < stringA.size(), j < stringB.size(); i++,j++)
			{
				strA[stringA[i]]++;
				strB[stringB[j]]++;
			}
			for(int i = 0; i < 256; i++)
				if(strA[i] != strB[i])
					return false;
			return true;
		}
};


int main(void)
{
	return 0;
}
