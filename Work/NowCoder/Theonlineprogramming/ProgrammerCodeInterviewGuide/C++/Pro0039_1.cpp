/*************************************************************************
    > File Name: Pro0039_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个无序数组arr，找到数组中未出现的最小正整数
例如arr = [-1, 2, 3, 4]。返回1
       arr = [1, 2, 3, 4]。返回5
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)

输入描述:
第一行为一个整数N。表示数组长度。
接下来一行N个整数表示数组内的数
输出描述:
输出一个整数表示答案
示例1
输入
复制
4
-1 2 3 4
输出
复制
1
示例2
输入
复制
4
1 2 3 4
输出
复制
5
备注:
1 \leqslant N \leqslant 10^61⩽N⩽10 
6
 
-10^9 \leqslant arr_i \leqslant 10^9−10 
9
 ⩽arr 
i
​	
 ⩽10 
9
 
 ************************************************************************/


#include <iostream>
#include <bitset>
using namespace std;

const int maxnum = 1e9 + 5;
bitset<maxnum> bi;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,t,ans = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>t;
		if(t > 0)
			bi.set(t);
	}
	for(int i = 1; i <= n + 1; i++)
	{
		if(!bi[i])
		{
			ans = i;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
