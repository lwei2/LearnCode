/*************************************************************************
    > File Name: Pro0177_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getint()
{
	char ch = getchar();
	int ret = 0, flag = 1;
	while(ch < '0' || ch > '9')
	{
		if(ch == '-')
			flag = -1;
		ch = getchar();
	}
	while(ch >= '0' && ch <= '9')
	{
		ret = (ret<<3) + (ret<<1) + ch - '0';
		ch = getchar();
	}
	return ret*flag;
}

int n,m,rt;
int fa[500005],dep[500005];
int cnt, head[500005];
struct edge
{
	int ne,v;
}e[1200005];

void add(int u, int v)
{
	cnt++;
	e[cnt].v = v;
	e[cnt].ne = head[u];
	head[u] = cnt;
}

void dfs(int now, int f)
{
	dep[now] = dep[f] + 1;
	fa[now] = f;
	for(int i = head[now]; i; i = e[i].ne)
	{
		int v = e[i].v;
		if(v == f)
			continue;
		dfs(v,now);
	}
}

int p[500005][30];
void ST()
{
	for(int i = 1; i <= n; i++)
		p[i][0] = fa[i];
	for(int i = 1; i < 30; i++)
		for(int j = 1; j <= n; j++)
			p[j][i] = p[p[j][i-1]][i-1];
}
int LCA(int a, int b)
{
	int l = 0;
	if(dep[a] < dep[b])
		swap(a,b);
	l = log2(dep[a]-dep[b]);
	for(int i = l; i >= 0; i--)
		if(dep[p[a][i]] >= dep[b])
			a = p[a][i];
	if(a == b)
		return a;
	l = log2(dep[a]);
	for(int i = l; i >= 0; i--)
		if(p[a][i] != p[b][i])
		{
			a = p[a][i];
			b = p[b][i];
		}
	return p[a][0];
}
int main(void)
{
	n = getint();
	rt = getint();
	for(int i = 1; i <= n; i++)
	{
		int a = getint(), b = getint(), c = getint();
		if(b)
		{
			add(a,b);
			add(b,a);
		}
		if(c)
		{
			add(a,c);
			add(c,a);
		}
	}
	dep[rt] = 1;
	dfs(rt, 0);
	ST();
	m = getint();
	for(int i = 1; i <= m; i++)
		printf("%d\n",LCA(getint(), getint()));
	return 0;
}
