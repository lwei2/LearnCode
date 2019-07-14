/*************************************************************************
    > File Name: Pro1083.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstdio>

using namespace std;


#define maxn 505
bool G[maxn][maxn];
bool vis[maxn];
int P[maxn];
int n,m;

bool Find(int u)
{
	for(int i = 1; i <= m; i++)
	{
		if(G[u][i] && !vis[i])
		{
			vis[i] = true;
			if(!P[i] || Find(P[i]))
			{
				P[i] = u;
				return true;
			}
		}
	}
	return false;
}

int main(void)
{
	int T,v;
	int i,j,k;
	scanf("%d",&T);
	while(T--)
	{
		memset(G, false, sizeof(G));
		memset(P,0,sizeof(P));
		scanf("%d %d",&n, &m);
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&k);
			while(k--)
			{
				scanf("%d",&v);
				G[i][v] = true;
			}
		}
		for(j = 1; j <= n; j++)
		{
			memset(vis,false,sizeof(vis));
			if(!Find(j))
				break;
		}
		if(j == n + 1)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
