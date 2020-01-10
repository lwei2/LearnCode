/*************************************************************************
    > File Name: Pro0003_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定排序数组arr和整数k，不重复打印arr中所有相加和为k的不降序二元组
例如, arr = [-8, -4, -3, 0, 1, 2, 4, 5, 8, 9], k = 10，打印结果为：
1, 9
2, 8
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)
输入描述:
第一行有两个整数n, k
接下来一行有n个整数表示数组内的元素
输出描述:
输出若干行，每行两个整数表示答案
按二元组从小到大的顺序输出(二元组大小比较方式为每个依次比较二元组内每个数)
示例1
输入
复制
10 10
-8 -4 -3 0 1 2 4 5 8 9
输出
复制
1 9
2 8



 ************************************************************************/


#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(void)
{
	int n,k;
	cin>>n>>k;
	if(n <= 1)
		return 0;
	vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		int num;
		scanf("%d",&num);
		arr.push_back(num);
	}
	int left = 0;
	int right = n - 1;
	while(left < right)
	{
		int curSum = arr[left] + arr[right];
		if(curSum == k && arr[left-1] != arr[left])
		{
			printf("%d %d\n",arr[left], arr[right]);
			left++;
			right--;
		}
		else if(curSum > k)
			right--;
		else
			left++;
	}
	return 0;
}
