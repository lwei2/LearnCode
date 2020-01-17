/*************************************************************************
    > File Name: Pro0026_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个数组arr，返回子数组的最大累加和
例如，arr = [1, -2, 3, 5, -2, 6, -1]，所有子数组中，[3, 5, -2, 6]可以累加出最大的和12，所以返回12.
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)

输入描述:
第一行一个整数N。表示数组长度
接下来一行N个整数表示数组内的元素
输出描述:
输出一个整数表示答案
示例1
输入
复制
7
1 -2 3 5 -2 6 -1
输出
复制
12
 ************************************************************************/


#include <iostream>
#include <limits.h>
#include <cstdio>
using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);
	int ans = INT_MIN;
	int cur;
	for(int i = 0; i < n; i++)
	{
		int a;
		scanf("%d",&a);
		if(i == 0 || cur <= 0)
			cur = a;
		else
			cur +=a;
		if(cur > ans)
			ans = cur;
	}
	printf("%d\n",ans);
	return 0;
}
