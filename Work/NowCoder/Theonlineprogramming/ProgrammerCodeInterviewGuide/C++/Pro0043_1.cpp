/*************************************************************************
    > File Name: Pro0043_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定两个字符串str1和str2，再给定三个整数ic，dc和rc，分别代表插入、删除和替换一个字符的代价，请输出将str1编辑成str2的最小代价。
输入描述:
输出三行，第一行和第二行均为一行字符串，分别表示两个字符串str1，str2。\left( 1\leq length(str1),length(str2) \leq 5000 \right)(1≤length(str1),length(str2)≤5000)。第三行为三个正整数，代表ic，dc和rc。（1<=ic<=10000、1<=dc<=10000、1<=rc<=10000）
输出描述:
输出一个整数，表示编辑的最小代价。
示例1
输入
复制
abc
adc
5 3 2
输出
复制
2
示例2
输入
abc
adc
5 3 100
输出
复制
8
示例3
输入
复制
abc
abc
5 3 2
输出
复制
0
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int i,j;
	string a,b;
	int alen, blen, ic, dc, rc,res;
	while(cin>>a>>b>>ic>>dc>>rc)
	{
		int temp;
		string tmps;
		if(a.length() < b.length())
		{
			temp = ic;
			ic = dc;
			dc = temp;
		}
		else
		{
			tmps = a;
			a = b;
			b = tmps;
		}
		alen = a.length();
		blen = b.length();
		res = 0;
		int last;
		if(alen && blen)
		{
			vector<int> dp(alen+1);
			for(i = 0; i <= alen; i++)
				dp[i] = ic * i;
			for(i = 1; i <= blen; i++)
			{
				last = dp[0];
				dp[0] = dc*i;
				for(j = 1; j <= alen; j++)
				{
					temp = dp[j];
					dp[j] = last + ((b[i-1] == a[j-1])?0:rc);
					dp[j] = dp[j] < (temp+dc)?dp[j]:(temp+dc);
					dp[j] = dp[j] < (dp[j-1] + ic)?dp[j]:(dp[j-1]+ic);
					last = temp;
				}
			}
			res = dp[alen];
		}
		cout<<res<<endl;
	}
	return 0;
}
