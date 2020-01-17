/*************************************************************************
    > File Name: Pro0021_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
数组小和的定义如下：
例如，数组s = [1, 3, 5, 2, 4, 6]，在s[0]的左边小于或等于s[0]的数的和为0；在s[1]的左边小于或等于s[1]的数的和为1；在s[2]的左边小于或等于s[2]的数的和为1+3=4；在s[3]的左边小于或等于s[3]的数的和为1；
在s[4]的左边小于或等于s[4]的数的和为1+3+2=6；在s[5]的左边小于或等于s[5]的数的和为1+3+5+2+4=15。所以s的小和为0+1+4+1+6+15=27
给定一个数组s，实现函数返回s的小和
[要求]
时间复杂度为O(nlogn)O(nlogn)，空间复杂度为O(n)O(n)
输入描述:
第一行有一个整数N。表示数组长度
接下来一行N个整数表示数组内的数
输出描述:
一个整数表示答案
示例1
输入
复制
6
1 3 5 2 4 6
输出
复制
27
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& nums, vector<int>& tmp, int l, int r)
{
	if(r - l <= 1)
		return 0;
	int mid = (l + r)/2, p;
	long long ans = 0, sum = 0;
	ans += merge(nums, tmp, l, mid);
	ans += merge(nums, tmp, mid, r);
	p = l;
	for(int i = mid; i < r; ++i)
	{
		while(p < mid && nums[p] <= nums[i])
			sum += nums[p++];
		ans += sum;
	}
	p = l;
	int pl = l, pr = mid;
	while(pl < mid && pr < r)
	{
		if(nums[pl] < nums[pr])
			tmp[p++] = nums[pl++];
		else
			tmp[p++] = nums[pr++];
	}
	while(pl < mid)
		tmp[p++] = nums[pl++];
	while(pr < r)
		tmp[p++] = nums[pr++];
	copy(tmp.begin() + l, tmp.begin() + r, nums.begin() + l);
	return ans;
}

int main(void)
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	int n;
	vector<int> nums, tmp;
	cin>>n;
	nums.resize(n);
	tmp.resize(n);
	for(int i = 0; i < n; ++i)
		cin>>nums[i];
	cout<<merge(nums,tmp, 0, n);
	return 0;
}
