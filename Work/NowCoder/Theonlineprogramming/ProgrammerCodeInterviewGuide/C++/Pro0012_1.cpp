/*************************************************************************
    > File Name: Pro0012_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定数组arr，arr中所有的值都为正整数且不重复。每个值代表一种面值的货币，每种面值的货币可以使用任意张，再给定一个aim，代表要找的钱数，求组成aim的最少货币数。
输入描述:
输入包括两行，第一行两个整数n（0<=n<=1000）代表数组长度和aim（0<=aim<=5000），第二行n个不重复的正整数，代表arr\left( 1 \leq arr_i \leq 10^9 \right)(1≤arr 
i
​	
 ≤10 
9
 )。
输出描述:
输出一个整数，表示组成aim的最小货币数，无解时输出-1.
示例1
输入
复制
3 20
5 2 3
输出
复制
4
说明
20=5*4
示例2
输入
复制
3 0
5 2 3
输出
复制
0
示例3
输入
复制
2 2
3 5
输出
复制
-1


 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i = 0; i < n; ++i)
		cin>>arr[i];
	const int DP_MAX = 5001;
	vector<int> dp(k + 1, DP_MAX);
	dp[0] = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = arr[i]; j <= k; ++j)
			dp[j] = min(dp[j], dp[j-arr[i]] + 1);
	}
	cout<<((dp[k] == DP_MAX) ? - 1 : dp[k])<<endl;
	return 0;
}
