/*************************************************************************
    > File Name: Pro0023_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定一个长度为N的整形数组arr，其中有N个互不相等的自然数1-N。请实现arr的排序，但是不要把下标0 \sim N-10∼N−1位置上的数通过直接赋值的方式替换成1 \sim N1∼N
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)

输入描述:
第一行有一个整数N。表示数组长度
接下来一行有N个互不相等的自然数1-N。
输出描述:
输出N个整数表示排序后的结果
示例1
输入
复制
5
2 1 4 5 3
输出
复制
1 2 3 4 5 
备注:
1 \leqslant N \leqslant 10^51⩽N⩽10 
5

 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,a;
	cin>>n;
	vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	int middle;
	int i = 0;
	while(i < n)
	{
		if(arr[i] == i+1)
		{
			i++;
		}
		else
		{
			middle = arr[arr[i]-1];
			arr[arr[i] - 1] = arr[i];
			arr[i] = middle;
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
