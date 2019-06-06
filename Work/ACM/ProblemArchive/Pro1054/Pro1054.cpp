/*************************************************************************
    > File Name: Pro1054.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <vector>
#include <limits.h>

using namespace std;


#define N 1505
int dp[N][2];
int f[N];
vector<int> son[N];

int min(int x, int y)
{
	return x < y ? x:y;
}

int dfs(int pos, int v)
{
	int i,sum;
	if(dp[pos][v] != INT_MIN)
	{
		return dp[pos][v];
	}
	sum = v;
	for(i = 0; i < son[pos].size(); i++)
	{
		if(v ==  1)
			sum += min(dfs(son[pos][i],0),dfs(son[pos][i],1));
		else
			sum += dfs(son[pos][i],1);
	}
	dp[pos][v] = sum;
	return sum;
}
int main(void)
{
	int i,j;
	int n,m;
	int x,t,ans;
	while(scanf("%d",&n) == 1)
	{
		for(i = 0; i < n; i++)
		{
			son[i].clear();
			f[i] = i;
			dp[i][0] = dp[i][1] = INT_MIN;
		}
		for(i = 0; i < n; i++)
		{
			scanf("%d:(%d)",&x,&m);
			for(j = 0; j < m; j++)
			{
				scanf("%d",&t);
				son[x].push_back(t);
				f[t] = x;
			}
		}
		for(i = 0; i < n; i++)
		{
			if(f[i] == i)
			{
				ans = min(dfs(i,0),dfs(i,1));
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
