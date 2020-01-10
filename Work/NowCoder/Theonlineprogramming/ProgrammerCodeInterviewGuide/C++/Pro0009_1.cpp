/*************************************************************************
    > File Name: Pro0009_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
	给定一个无序数组arr, 其中元素可正、可负、可0。给定一个整数k，求arr所有子数组中累加和为k的最长子数组长度
	输入描述:
		第一行两个整数N, k。N表示数组长度，k的定义已在题目描述中给出
		第二行N个整数表示数组内的数
	输出描述:
		输出一个整数表示答案
	示例1
	输入
		5 0
		1 -2 1 1 1
	输出
		3
 ************************************************************************/


#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void)
{
	int n,k,val;
	vector<int> nums;
	unordered_map<int, int> m;
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	cin>>n>>k;
	nums.resize(n);
	for(int i = 0; i < n; ++i)
		cin>>nums[i];

	int l = 0, r = 1; 
	int ans = 0, sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += nums[i];
		m[sum] = i;
	}

	sum = 0;
	unordered_map<int, int>::iterator it;
	for(int i = 0; i < n; ++i)
	{
		sum += nums[i];
		it = m.find(k + sum);
		if(it != m.end() && it->second > i)
		{
			ans = max(ans, it->second-i);
		}
	}
	it = m.find(k);
	if(it != m.end())
		ans = max(ans, it->second + 1);
	cout<<ans;
	return 0;
}
