 /*************************************************************************
    > File Name: Pro0033_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定两个字符串str1和str2,输出两个字符串的最长公共子串，如果最长公共子串为空，输出-1。
输入描述:
输入包括两行，第一行代表字符串srr1，第二行代表字符串str2。\left( 1\leq length(str1),length(str2) \leq 5000 \right)(1≤length(str1),length(str2)≤5000)
输出描述:
输出包括一行，代表最长公共子串。
示例1
输入
复制
1AB2345CD
12345EF
输出
复制
2345
备注:
时间复杂度O(n^{2})O(n 
2
 )，额外空间复杂度O(1)O(1)。（n可以为其中任意一个字符串长度）
 ************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1;
	while(getline(cin,str1))
	{
		string str2;
		getline(cin,str2);
		if(str1.size() == 0 || str2.size() == 0)
		{
			cout<<-1;
			continue;
		}
		int row = 0;
		int col = str2.size() - 1;
		int max = 0;
		int end = 0;
		while( row  < str1.size())
		{
			int i = row;
			int j = col;
			int len = 0;
			while(i < str1.size() && j < str2.size())
			{
				if(str1[i] != str2[j])
					len = 0;
				else 
					len++;
				if(len > max)
				{
					end = i;
					max = len;
				}
				i++;
				j++;
			}
			if(col > 0)
				col--;
			else
				row++;
		}
		if(max == 0)
			cout<<-1<<endl;
		else
			cout<<str1.substr(end-max+1,max)<<endl;
	}
	return 0;
}
