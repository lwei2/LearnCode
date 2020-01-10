/*************************************************************************
    > File Name: Pro0010_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	题目描述
		给定一个无序数组arr，其中元素可正、可负、可0。求arr所有子数组中正数与负数个数相等的最长子数组的长度。
		[要求]时间复杂度为O(n)O(n)，空间复杂度为O(n)O(n)
	输入描述:
		第一行一个整数N，表示数组长度
		接下来一行有N个数表示数组中的数
		输出描述:
		输出一个整数表示答案
	示例1
	输入
		5
		1 -2 1 1 1
	输出
		2
************************************************************************/


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	unordered_map<int, int>hs;
	vector<int> arr;
	for(int i = 0; i < n; ++i)
	{
		int tmp;
		cin>>tmp;
		if(tmp > 0)
			tmp = 1;
		else if(tmp < 0)
			tmp = -1;
		else
			tmp = 0;
		arr.push_back(tmp);
	}
	int ans = 1;
	int sum = 0;
	hs[0] = -1;
	for(int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if(hs.count(sum))
			ans = max(ans, i - hs[sum]);
		if(hs.find(sum) == hs.end())
			hs[sum] = i;
	}
	cout<<ans<<endl;
	return 0;
}
