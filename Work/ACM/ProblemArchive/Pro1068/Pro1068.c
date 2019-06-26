/*************************************************************************
    > File Name: Pro1068.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define N 1005
int g[N][N];
int match[N];
int vis[N];
int n;
int dfs(int x)
{
	for(int i = 0; i < n; i++)
		if(!vis[i] && g[x][i])
		{
			vis[i] = 1;
			if(match[i] == -1 || dfs(match[i]))
			{
				match[i] = x;
				return 1;
			}
		}
	return 0;
}

int hungary()
{
	int ret = 0;
	memset(match, -1, sizeof(match));
	for(int i = 0; i < n; i++)
	{
		memset(vis, 0, sizeof(vis));
		ret += dfs(i);
	}
	return ret;
}

int main(void)
{
	int a,m,b;
	while(scanf("%d",&n)!=EOF)
	{
		memset(g,0,sizeof(g));
		for(int i = 0; i < n; i++)
		{
			scanf("%d: (%d)",&a,&m);
			for(int j = 0; j < m; j++)
			{
				scanf("%d",&b);
				g[a][b] = g[b][a] = 1;
			}
		}
		printf("%d\n",n-hungary()/2);
	}
	return 0;
}
