/*************************************************************************
    > File Name: Pro0025_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定数组arr，设长度为n，输出arr的最长递增子序列。（如果有多个答案，请输出其中字典序最小的）
输入描述:
输出两行，第一行包括一个正整数n（n<=100000），代表数组长度。第二行包括n个整数，代表数组arr \left(1 \leq arr_i \leq 1e9 \right)(1≤arr 
i
​	
 ≤1e9)。
输出描述:
输出一行。代表你求出的最长的递增子序列。
示例1
输入
复制
9
2 1 5 3 6 4 8 9 7
输出
复制
1 3 4 8 9
示例2
输入
复制
5
1 2 8 6 4
输出
复制
1 2 4
说明
其最长递增子序列有3个，（1，2，8）、（1，2，6）、（1，2，4）其中第三个字典序最小，故答案为（1，2，4）
 ************************************************************************/


#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&v[i]);
	vector<int> dp(n);
	vector<int> pos(n);
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(k == 0 || dp[k - 1] < v[i])
		{
			pos[i] = k;
			dp[k++] = v[i];
		}
		else
		{
			auto it = lower_bound(dp.begin(), dp.begin()+k, v[i]);
			*it = v[i];
			pos[i] = it-dp.begin();
		}
	}
	vector<int> res(k, 1e8);
	vector<bool> visited(k+1, false);
	visited[k] = true;
	int val = k - 1;
	for(int i = n - 1; i >= 0; i--)
	{
		if(pos[i] == val && visited[val + 1])
		{
			res[val] = min(res[val],v[i]);
			visited[val] = true;
			val--;
		}
	}
	for(int i = 0; i < k; i++)
		cout<<res[i]<<" ";
	return 0;
}
