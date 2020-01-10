/*************************************************************************
    > File Name: Pro0011_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定一个无序数组arr，其中元素只能是1或0。求arr所有的子数组中0和1个数相等的最长子数组的长度 
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(n)O(n)
输入描述:
第一行一个整数N，表示数组长度
接下来一行有N个数表示数组中的数
输出描述:
输出一个整数表示答案
示例1
输入
复制
5
1 0 1 0 1
输出
复制
4



 ************************************************************************/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(void)
{
	int n,k;
	int val;
	vector<int> nums;
	unordered_map<int, int> m;


	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	cin>>n;
	nums.resize(n);
	for(int i = 0; i < n; ++i)
		cin>>nums[i];
	int l = 0, r = 1, ans = 0, count = 0;
	for(int i = 0; i < n; ++i)
	{
		count += nums[i] > 0 ? 1 : -1;
		m[count] = i;
	}
	count = 0;
	auto it = m.find(0);
	if(it != m.end())
		ans = max(ans, it->second + 1);
	for(int i = 0; i < n; ++i)
	{
		count += nums[i] > 0 ? 1 : -1;
		it = m.find(count);
		if(it != m.end() && it->second >= i)
			ans = max(ans, it->second - i);
	}
	cout<<ans;
	return 0;
}
