/*************************************************************************
    > File Name: Pro0030_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个整数n，代表汉诺塔游戏中从小到大放置n个圆盘，假设开始所有圆盘都在左边的柱子上，那么用最优的办法把所有圆盘都移动到右边的柱子上的过程，就称为最优移动轨迹。给定一个整型数组arr, 其中只含有1、2和3,代表所有圆盘目前的状态，1代表左柱，2代表中柱，3代表右柱，a[i]的值代表第i+1个圆盘的位置（a[i]下标从0开始）。比如，arr=[3,3,2,1], 代表第1个圆盘在右柱上、第2个圆盘在右柱上、第3个圆盘在中柱上、第4个圆盘在左柱上。如果arr代表的状态是最优移动轨迹过程中出现的状态，输出arr这种状态是最优移动轨迹中的第几个状态（由于答案可能较大，请输出对10^9+710 
9
 +7取模后的答案）。如果arr代表的状态不是最优移动轨迹过程中出现的状态，则输出-1。

输入描述:
输入包括两行，第一行一个整数n( 1 \leq n \leq 2*10^6)(1≤n≤2∗10 
6
 )，表示圆盘的个数，第二行n个正整数，且均为1或2或3，第i个整数表示第i个圆盘位置。
输出描述:
输出一个整数，表示这种状态是第几个最优移动状态（输出对10^9+710 
9
 +7取模后的答案），无解输出-1。
示例1
输入
复制
2
1 1
输出
复制
0
示例2
输入
复制
2
3 3
输出
复制
3
备注:
时间复杂度O(n)O(n)，空间复杂度O(n)O(n)。
 ************************************************************************/


#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

#define X 1000000007

long long power(int n)
{
	long long ans = 1;
	long long mi = 2;
	while(n != 0)
	{
		if(n&1 == 1)
		{
			ans *= mi;
			ans %=X;
		}
		n/=2;
		mi*=mi;
		mi%=X;
	}
	return ans;
}

int main(void)
{
	int n;
	long long res = 0;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int from = 1, mid = 2, to = 3;
	n--;
	while(n>=0)
	{
		if(a[n] == mid)
		{
			printf("-1");
			return 0;
		}
		if(a[n] == from)
		{
			swap(to,mid);
		}
		else 
		{
			res += power(n);
			res%=X;
			swap(from, mid);
		}
		n--;
	}
	printf("%d",res);
	return 0;
}
