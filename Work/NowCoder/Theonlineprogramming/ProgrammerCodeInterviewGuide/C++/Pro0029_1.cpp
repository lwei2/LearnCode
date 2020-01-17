/*************************************************************************
    > File Name: Pro0029_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给n个信封的长度和宽度。如果信封A的长和宽都小于信封B，那么信封A可以放到信封B里，请求出信封最多可以嵌套多少层。
输入描述:
输出包含多行，第一行包括一个整数，代表信封的个数n\left(1 \leq n\leq  10^{5}\right)(1≤n≤10 
5
 )。接下来n行，每行两个整数l_il 
i
​	
 和w_iw 
i
​	
 ，代表信封的长度和宽度\left( -1e9\leq l_i,w_i \leq 1e9 \right)(−1e9≤l 
i
​	
 ,w 
i
​	
 ≤1e9)。
输出描述:
输出包括一行，代表信封最多嵌套多少层。
示例1
输入
复制
9
3 4
2 3
4 5
1 3
2 2
3 6
1 2
3 2
2 4
输出
复制
4
说明
从里到外分别是{1，2}，{2，3}，{3，4}，{4，5}。
示例2
输入
复制
2
1 4
4 1
输出
复制
1
备注:
时间复杂度O(n\log n)O(nlogn)，空间复杂度O(n)O(n)。
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
	int x,y;
};

bool cmp1(const Point& p1, const Point& p2)
{
	if(p1.x == p2.x)
		return p1.y > p2.y;
	return p1.x < p2.x;
}
/*
bool cmp2(const Point& p1, const Point& p2)
{
	if(p1.x == p2.x)
		return p1.y < p2.y;
	return p1.x < p2.x;
}*/

int main(void)
{
	int n;
	cin>>n;
	vector<Point> vp(n);
	for(int i = 0; i < n; i++)
		scanf("%d %d", &vp[i].x, &vp[i].y);
	sort(vp.begin(), vp.end(), cmp1);
	int dp[n];
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(k == 0 || dp[k - 1] < vp[i].y)
			dp[k++] = vp[i].y;
		else
		{
			auto it = upper_bound(dp,dp+k, vp[i].y);
			*it = vp[i].y;			
		}
	}
	cout<<k<<endl;
	return 0;
}
