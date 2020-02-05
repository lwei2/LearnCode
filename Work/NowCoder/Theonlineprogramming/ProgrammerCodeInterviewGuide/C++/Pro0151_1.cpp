/*************************************************************************
    > File Name: Pro0151_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxn = 205;
const int modd = 1e9 + 7;
int n,m;
int a[maxn][maxn];

int main(void)
{
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			scanf("%d",&a[i][j]);

	int upx = 0, upy = 0;
	int downx = 0, downy = 0;
	bool flag = false;
	while(upx != n)
	{
		if(flag)
		{
			int yy = upy;
			for(int i = upx; i <= downx; ++i)
				printf("%d ",a[i][yy--]);
		}
		else
		{
			int yy = downy;
			for(int i = downx; i >= upx; i--)
				printf("%d ", a[i][yy++]);
		}
		upx = upy == m - 1 ? upx + 1 : upx;
		upy = upy == m - 1 ? upy : upy + 1;
		downy = downx == n - 1 ? downy + 1 : downy;
		downx = downx == n - 1 ? downx : downx + 1;
		flag = !flag;
	}
	return 0;
}
