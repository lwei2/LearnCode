/*************************************************************************
    > File Name: Pro0004_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定排序数组arr和整数k，不重复打印arr中所有相加和为k的不降序三元组
例如, arr = [-8, -4, -3, 0, 1, 2, 4, 5, 8, 9], k = 10，打印结果为：
-4 5 9
-3 4 9
-3 5 8
0 1 9
0 2 8
1 4 5
[要求]
时间复杂度为O(n^2)O(n 
2
 )，空间复杂度为O(1)O(1)

输入描述:
第一行有两个整数n, k
接下来一行有n个整数表示数组内的元素
输出描述:
输出若干行，每行三个整数表示答案
按三元组从小到大的顺序输出(三元组大小比较方式为每个依次比较三元组内每个数)
示例1
输入
复制
10 10
-8 -4 -3 0 1 2 4 5 8 9
输出
复制
-4 5 9
-3 4 9
-3 5 8
0 1 9
0 2 8
1 4 5




 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(void)
{
	int n,k;
	int tmp;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i = 0; i < n; ++i)
	{
		cin>>tmp;
		arr[i] = tmp;
	}
	int m,r;
	for(int l = 0; l < n - 2; ++l)
	{
		while(arr[l] == arr[l+1])
			l++;
		m = l + 1;
		r = n - 1;
		while(m < r)
		{
			if(k == arr[l] + arr[m] + arr[r])
			{
				printf("%d %d %d\n",arr[l],arr[m],arr[r]);
				m++;
				r--;
				while(arr[m] == arr[m-1])
					m++;
			}
			else if(k > arr[l] + arr[m] + arr[r])
				m++;
			else 
				r--;			
		}
	}
	return 0;
}
