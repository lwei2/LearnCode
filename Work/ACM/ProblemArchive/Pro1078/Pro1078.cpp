/*************************************************************************
    > File Name: Pro1078.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>

using namespace std;

#define N 101

int dp[N][N],map[N][N];
int k,n;
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

bool ok(int x,int y)
{
	return x>=0 && y>=0 && x<n && y <n;
}

int dfs(int x, int y)
{
	int tmp;
	int i,j;
	int max = 0;
	int xt, yt;
	if(dp[x][y] > 0)
		return dp[x][y];
	for(i = 0; i < 4; i++)
	{
		for(j = 1; j <= k; j++)
		{
			xt = dir[i][0]*j + x;
			yt = dir[i][1]*j + y;
			if(ok(xt, yt) && map[x][y] < map[xt][yt])
			{
				tmp = dfs(xt,yt);
				if(tmp > max)
					max = tmp;
			}
		}
	}
	dp[x][y] = max + map[x][y];
	return dp[x][y];
}
int main(void)
{
	while(scanf("%d%d",&n,&k) == 2 && k != -1 && n!= -1)
	{
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				scanf("%d",&map[i][j]);
		memset(dp,0,sizeof(dp));
		cout<<dfs(0,0)<<endl;
	}
	return 0;
}
