/*************************************************************************
    > File Name: Pro0008_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	题目描述:给定一个数组arr，该数组无序，但每个值均为正数，再给定一个正数k。求arr的所有子数组中所有元素相加和为k的最长子数组的长度.例如，arr = [1, 2, 1, 1, 1], k = 3累加和为3的最长子数组为[1, 1, 1]，所以结果返回3
	[要求]时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)
	输入描述:
		第一行两个整数N, k。N表示数组长度，k的定义已在题目描述中给出第二行N个整数表示数组内的数
	输出描述:
		输出一个整数表示答案
	示例1
	输入
		5 3
		1 2 1 1 1
	输出
		3
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	vector<int> res(n,0);
	for(int i = 0; i < n; ++i)
		cin>>res[i];
	int j = 0, sum = 0, maxSum = 1;
	for(int i = 0; i < res.size(); ++i)
	{
		sum += res[i];
		while(sum > k)
		{
			sum -= res[j];
			++j;
		}
		if(sum == k)
			maxSum = max(maxSum, i - j + 1);
	}
	cout<<maxSum<<endl;
	return 0;
}
