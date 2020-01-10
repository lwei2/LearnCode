/*************************************************************************
    > File Name: Pro0014_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定一个无序数组arr，其中元素可正、可负、可0。给定一个整数k，求arr所有的子数组中累加和小于或等于k的最长子数组长度
例如：arr = [3, -2, -4, 0, 6], k = -2. 相加和小于等于-2的最长子数组为{3, -2, -4, 0}，所以结果返回4
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(n)O(n)

输入描述:
第一行两个整数N, k。N表示数组长度，k的定义已在题目描述中给出
第二行N个整数表示数组内的数
输出描述:
输出一个整数表示答案
示例1
输入
复制
5 -2
3 -2 -4 0 6
输出
复制
4
************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100005;
int n,k;

int maxPresum[N], ans;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k;
	for(int i(1), cur, sum(0); i <= n; ++i)
	{
		cin >> cur;
		sum += cur;
		ans = max(ans, int(i - 
					(lower_bound(maxPresum, maxPresum + i, sum - k) - maxPresum)));
		maxPresum[i] = max(sum, maxPresum[i - 1]);
	}
	cout<<ans;
	return 0;
}
