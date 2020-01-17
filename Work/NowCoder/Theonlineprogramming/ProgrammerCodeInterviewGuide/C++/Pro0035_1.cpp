/*************************************************************************
    > File Name: Pro0035_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个数组arr，返回不包含本位置值的累乘数组
例如，arr=[2,3,1,4]，返回[12, 8, 24, 6]，即除自己外，其他位置上的累乘
[要求]
时间复杂度为O(n)O(n)，额外空间复杂度为O(1)O(1)

输入描述:
第一行有两个整数N, P。分别表示序列长度，模数(即输出的每个数需要对此取模)
接下来一行N个整数表示数组内的数
输出描述:
输出N个整数表示答案
示例1
输入
复制
4 100000007
2 3 1 4
输出
复制
12 8 24 6
备注:
1 \leqslant N \leqslant 10^51⩽N⩽10 
5
 
1 \leqslant P \leqslant 10^9  +71⩽P⩽10 
9
 +7
1 \leqslant arr_i  \leqslant 10^91⩽arr 
i
​	
 ⩽10 
9
 
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	long long all = 1;
	int n,p;
	cin>>n>>p;
	int a[n];
	long long l[n+1];
	long long r[n+1];
	l[0] = 1;
	r[n] = 1;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		l[i+1] = l[i]*a[i]%p;
	}
	for(int i = n - 1; i >= 0; i--)
	{
		r[i] = r[i+1]*a[i]%p;
	}
	for(int i = 0; i < n; i++)
		cout<<(l[i]*r[i+1]%p)<<" ";
	return 0;
}
