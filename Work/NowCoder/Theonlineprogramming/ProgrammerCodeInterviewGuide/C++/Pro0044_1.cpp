/*************************************************************************
    > File Name: Pro0044_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定三个字符串str1、str2 和aim,如果aim包含且仅包含来自str1和str2的所有字符，而且在aim中属于str1的字符之间保持原来在str1中的顺序属于str2的字符之间保持原来在str2中的顺序，那么称aim是str1和str2的交错组成。实现一个函数，判断aim是否是str1和str2交错组成，如果是请输出“YES”，否则输出“NO”。
输入描述:
输出三行，分别表示三个字符串str1，str2和aim。1 \leq length\left ( str1 \right ),length\left ( str2 \right ) \leq 5000 ,1 \leq length\left(aim \right) \leq100001≤length(str1),length(str2)≤5000,1≤length(aim)≤10000 ， length()length()表示字符串长度。
输出描述:
输出“YES”或者“NO”。（不包含引号）
示例1
输入
复制
AB
12
1AB2
输出
复制
YES
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

bool func(string str, string aim)
{
	int len1 = str.size();
	int len2 = aim.size();

	int index1 = 0;
	int index2 = 0;
	while(index1 < len1)
	{
		if(aim[index2] == str[index1])
		{
			index1++;
			index2++;
		}
		else
			index2++;
		if(index2 == len2 && index1 < len1)
			return false;
	}
	return true;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	string str1, str2, aim;
	cin>>str1>>str2>>aim;
	if(func(str1, aim) && func(str2, aim))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
