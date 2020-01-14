/*************************************************************************
    > File Name: Pro0017_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
假设有排成一行的N个位置，记为1~N，开始时机器人在M位置，机器人可以往左或者往右走，如果机器人在1位置，那么下一步机器人只能走到2位置，如果机器人在N位置，那么下一步机器人只能走到N-1位置。规定机器人只能走k步，最终能来到P位置的方法有多少种。由于方案数可能比较大，所以答案需要对1e9+7取模。
输入描述:
输出包括一行四个正整数N（2<=N<=5000）、M(1<=M<=N)、K(1<=K<=5000)、P(1<=P<=N)。
输出描述:
输出一个整数，代表最终走到P的方法数对10^9+710 
9
 +7取模后的值。
示例1
输入
复制
5 2 3 3
输出
复制
3
说明
1).2->1,1->2,2->3

2).2->3,3->2,2->3

3).2->3,3->4,4->3
示例2
输入
复制
1000 1 1000 1
输出
复制
591137401


 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,m,k,p;
	int mod = 1e9+7;
	scanf("%d %d %d %d",&n,&m,&k,&p);
	int *arr1 = new int[n];
	int *arr2 = new int[n];
	for(int i = 0; i < n; i++)
		arr1[i] = 0;
	arr1[m-1] = 1;
	for(int i = 0; i < k; i++)
	{
		if(i%2 == 0)
		{
			arr2[0] = arr1[1];
			for(int j = 1; j < n - 1; j++)
				arr2[j] = (arr1[j-1] + arr1[j+1])%mod;
			arr2[n-1] = arr1[n-2];
		}
		else
		{
			arr1[0] = arr2[1];
			for(int j = 1; j < n - 1; j++)
				arr1[j] = (arr2[j-1] + arr2[j+1])%mod;
			arr1[n-1] = arr2[n-2];
		}
	}
	if(k%2 == 0)
		printf("%lld\n",arr1[p-1]);
	else
		printf("%lld\n",arr2[p-1]);
	return 0;
}
