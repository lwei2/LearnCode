/*************************************************************************
    > File Name: Pro0016_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
给定一个整型矩阵 map，其中的值只有 0 和 1 两种，求其中全是 1 的所有矩形区域中，最大的矩形区域里 1 的数量。
输入描述:
第一行输入两个整数 n 和 m，代表 n*m 的矩阵
接下来输入一个 n*m 的矩阵
输出描述:
输出其中全是 1 的所有矩形区域中，最大的矩形区域里 1 的数量。
示例1
输入
复制
1 4
1 1 1 0
输出
复制
3



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

int maxArea(vector<int> &num)
{
	int iSize = num.size();
	if(0 == iSize)
		return 0;
	stack<int> s;
	int iRet = 0;
	for(int i = 0; i < iSize; i++)
	{
		while(!s.empty() && num[i] <= num[s.top()])
		{
			int j = s.top();
			s.pop();
			int k = s.empty() ? - 1 : s.top();
			int curAre = (i - k - 1)*num[j];
			iRet = iRet > curAre ? iRet : curAre;
		}
		s.push(i);
	}
	return iRet;
}

int maxRector(vector<vector<int> > &matrix)
{
	int iRows = matrix.size();
	if(0 == iRows)
		return 0;
	int iCols = matrix[0].size();
	if(0 == iCols)
		return 0;
	vector<int> height(iCols, 0);
	int iRet = 0;
	for(int i = 0; i < iRows; i++)
	{
		for(int j = 0; j < iCols; j++)
		{
			height[j] = matrix[i][j] ? height[j] + 1 : 0;
		}
		iRet = max(iRet, maxArea(height));
	}
	return iRet;
}

int main(void)
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n,m;
	while(cin>>n>>m)
	{
		if(n < 1 || n > 2000 || m < 1 || m > 2000)
			continue;
		vector<vector<int> > matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin>>matrix[i][j];
		cout<<maxRector(matrix)<<endl;
	}
	return 0;
}
