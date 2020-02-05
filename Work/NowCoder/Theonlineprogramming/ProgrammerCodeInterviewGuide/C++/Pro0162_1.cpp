/*************************************************************************
    > File Name: Pro0162_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;
int n, root, ch[N][2];
int h[N],d[N],vis[N];


void dfs(int u, int dep);
void dfs1(int u);
void dfs2(int u);
void dfs3(int u, int flag);
void dfs4(int u, int flag);

void dfs(int u, int dep)
{
	if(!u)
		return;
	if(!h[dep])
		h[dep] = u;
	d[dep] = u;
	dfs(ch[u][0], dep + 1);
	dfs(ch[u][1], dep + 1);
}

void dfs1(int u)
{
	if(!u)
		return;
	if(!ch[u][0] && !ch[u][1] && !vis[u])
		printf("%d ",u);
	dfs1(ch[u][0]);
	dfs1(ch[u][1]);
}

void dfs2(int u)
{
	if(!u)
		return;
	printf("%d ",u);
	if(ch[u][0] && ch[u][1])
	{
		dfs3(ch[u][0], 1);
		dfs4(ch[u][1], 1);
		return;
	}
	if(ch[u][0])
		dfs2(ch[u][0]);
	if(ch[u][1])
		dfs2(ch[u][1]);
}


void dfs3(int u, int flag)
{
	if(!u)
		return;
	if((!ch[u][0] && !ch[u][1]) || flag)
		printf("%d ", u);
	if(ch[u][0] && ch[u][1])
	{
		dfs3(ch[u][0],flag);
		dfs3(ch[u][1],0);
	}
	else
	{
		if(ch[u][0])
			dfs3(ch[u][0],flag);
		if(ch[u][1])
			dfs3(ch[u][1],flag);
	}
}

void dfs4(int u, int flag)
{
	if(!u)
		return;
	if(ch[u][0] && ch[u][1])
	{
		dfs4(ch[u][0], 0);
		dfs4(ch[u][1], flag);
	}
	else
	{
		if(ch[u][0])
			dfs4(ch[u][0], flag);
		if(ch[u][1])
			dfs4(ch[u][1], flag);
	}
	if((!ch[u][0] && !ch[u][1]) || flag)
		printf("%d ", u);
}


int main(void)
{
	scanf("%d%d",&n, &root);
	if(n < 1 || n > 1000000)
		return 0;
	for(int i = 1, fa; i <= n; ++i)
	{
		scanf("%d", &fa);
		if(fa < 1 || fa > n)
			return 0;
		scanf("%d%d", &ch[fa][0], &ch[fa][1]);
		if(ch[fa][0] < 0 || ch[fa][0] > n)
			return 0;
		if(ch[fa][1] < 0 || ch[fa][1] > n)
			return 0;
	}
	dfs(root, 1);
	for(int i = 1; i <= n; ++i)
	{
		vis[h[i]] = 1;
		vis[d[i]] = 1;
	}
	int gs = 0;
	for(int i = 1; i <= n; ++i)
		if(h[i])
			printf("%d ",h[i]);
	dfs1(root);
	memset(vis,0,sizeof(vis));
	for(int i = 1; i <= n; ++i)
		vis[h[i]] = 1;
	for(int i = n; i >= 1; --i)
		if(!vis[d[i]])
			printf("%d ",d[i]);
	printf("\n");
	dfs2(root);
	return 0;
}
