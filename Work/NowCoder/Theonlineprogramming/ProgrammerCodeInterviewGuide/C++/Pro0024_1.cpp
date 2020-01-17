/*************************************************************************
    > File Name: Pro0024_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定一个长度不小于2的数组arr，实现一个函数调整arr，要么让所有的偶数下标都是偶数，要么让所有的奇数下标都是奇数
注意：1、数组下标从0开始！
2、本题有special judge，你可以输出任意一组合法解！同时可以证明解一定存在
[要求]
时间复杂度为O(n)O(n)，额外空间复杂度为O(1)O(1)

输入描述:
第一行一个整数N。表示数组长度
接下来一行N个整数表示数组内的数
输出描述:
输出N个整数。表示调整后的数组
示例1
输入
复制
5
1 2 3 4 5 
输出
复制
2 1 4 3 5
说明
样例中的输出保证了奇数下标都是奇数
备注:
2 \leqslant N \leqslant  10^52⩽N⩽10 
5

 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&v[i]);
	int x = 0;
	int y = 1;
	while( x < n && y < n)
	{
		while( x < n && v[x]%2 == 0)
			x += 2;
		while( y < n && v[y]%2 == 1)
			y += 2;
		if(x < n && y < n)
			swap(v[x],v[y]);
	}
	for(int i = 0; i < n; i++)
		cout<<v[i]<<" ";
	return 0;
}
