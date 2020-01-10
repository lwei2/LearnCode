/*************************************************************************
    > File Name: Pro0002_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
先给出可整合数组的定义：如果一个数组在排序之后，每相邻两个数的差的绝对值都为1，或者该数组长度为1，则该数组为可整合数组。例如，[5, 3, 4, 6, 2]排序后为[2, 3, 4, 5, 6]，符合每相邻两个数差的绝对值都为1，所以这个数组为可整合数组
给定一个数组arr, 请返回其中最大可整合子数组的长度。例如，[5, 5, 3, 2, 6, 4, 3]的最大可整合子数组为[5, 3, 2, 6, 4]，所以请返回5
[要求]
时间复杂度为O(n^2)O(n 
2
 )，空间复杂度为O(n)O(n)
输入描述:
第一行一个整数N，表示数组长度
第二行N个整数，分别表示数组内的元素
输出描述:
输出一个整数，表示最大可整合子数组的长度
示例1
输入
复制
7 5 5 3 2 6 4 3
输出
复制
5
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool function(int i, int j)
{
	return i < j;
}

int main(void)
{
	//1.N-len
	int N;
	int num;
	cin>>N;
	vector<int> vResult;
	for(int i = 0; i < N; i++)
	{
		cin>>num;
		vResult.push_back(num);
	}

/*	for(int i = 0; i < vResult.size(); i++)
	{
		cout<<vResult[i]<<" ";
	}
	cout<<endl;*/

	sort(vResult.begin(), vResult.end(), function);
	int k = 0;
	int ans = 1;
	for(int i = 0; i < N; i++)
	{
		k = i;
		if(vResult[k+1] - vResult[k] == 1)
			ans++;
		else
			i = k + 1;
	}
	cout<<ans<<endl;
	return 0;
}
