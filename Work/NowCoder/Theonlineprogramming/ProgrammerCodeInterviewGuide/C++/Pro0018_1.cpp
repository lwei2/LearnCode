/*************************************************************************
    > File Name: Pro0018_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定数组 arr 和整数 num，共返回有多少个子数组满足如下情况：
max(arr[i...j] - min(arr[i...j]) <= num
max(arr[i...j])表示子数组arr[i...j]中的最大值，min[arr[i...j])表示子数组arr[i...j]中的最小值。

输入描述:
第一行输入两个数 n 和 num，其中 n 表示数组 arr 的长度
第二行输入n个整数X_iX 
i
​	
 ，表示数组arr中的每个元素
输出描述:
输出给定数组中满足条件的子数组个数



示例1
输入
复制
5 2 
1 2 3 4 5
输出
复制
12
备注:
1\le n \le 10000001≤n≤1000000
-1000000 \le arr_i \le 1000000−1000000≤arr 
i
​	
 ≤1000000
0 \le num \le 20000000≤num≤2000000

 ************************************************************************/


#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <deque>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <iterator>

using namespace std;

int numOfSub(vector<int>& arr, int num)
{
	int nSize = arr.size();
	if(nSize < 1)
		return 0;
	int iRet = 0;
	deque<int> smin;
	deque<int> smax;
	int start = 0;
	for(int i = 0; i < nSize; ++i)
	{
		while(!smax.empty() && arr[smax.back()] <= arr[i])
			smax.pop_back();
		smax.push_back(i);
		while(!smin.empty() && arr[smin.back()] >= arr[i])
			smin.pop_back();
		smin.push_back(i);
		while(arr[smax.front()] - arr[smin.front()] > num)
		{
			++start;
			if(!smax.empty() && smax.front() < start)
				smax.pop_front();
			if(!smin.empty() && smin.front() < start)
				smin.pop_front();
		}
		iRet += i + 1 -start;
	}
	return iRet;
}

int main(void)
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n,num;
	while(cin>>n>>num)
	{
		if(n < 1 || n > 1000000 || num <0 || num > 2000000)
			continue;
		vector<int>arr(n,0);
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		cout<<numOfSub(arr,num)<<endl;
	}
	return 0;
}
