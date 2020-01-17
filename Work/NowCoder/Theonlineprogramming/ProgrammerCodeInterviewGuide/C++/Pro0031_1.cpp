/*************************************************************************
    > File Name: Pro0031_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定两个字符串str1和str2，输出连个字符串的最长公共子序列。如过最长公共子序列为空，则输出-1。
输入描述:
输出包括两行，第一行代表字符串str1，第二行代表str2。\left( 1\leq length(str1),length(str2) \leq 5000\right)(1≤length(str1),length(str2)≤5000)
输出描述:
输出一行，代表他们最长公共子序列。如果公共子序列的长度为空，则输出-1。
示例1
输入
复制
1A2C3D4B56
B1D23CA45B6A
输出
复制
123456
说明
"123456"和“12C4B6”都是最长公共子序列，任意输出一个。
备注:
时间复杂度O(n*m)O(n∗m)，空间复杂度O(n*m)O(n∗m)。(n,m分别表示两个字符串长度)
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lcs(string &X, string &Y, int m, int n)
{
	vector<vector<int>> table(m+1, vector<int>(n+1));
	for(int i = 0; i < m + 1; ++i)
	{
		for(int j = 0; j < n + 1; ++j)
		{
			if(i == 0 || j == 0)
				table[i][j] = 0;
			else if(X[i-1] == Y[j-1])
				table[i][j] = table[i-1][j-1] + 1;
			else
				table[i][j] = max(table[i-1][j], table[i][j-1]);
		}
	}
	return table[m][n];
}


int main(void)
{
	string X = "ABCBDAB";
	string Y = "BDCABA";
	cout<<lcs(X,Y,X.length(), Y.length());
	cout<<endl;
	return 0;
}
