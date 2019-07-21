/*************************************************************************
    > File Name: Pro1102-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

struct Edge
{
	int u,v;
	int cap;
}edge[N*N];

int n,cnt, ans;
int father[N], Rank[N];

void addedge(int cu, int cv, int cw)
{
	edge[cnt].u = cu;
	edge[cnt].v = cv;
	edge[cnt].cap = cw;
	cnt++;
}

void makeSet()
{
	for(int i = 1; i <= n; i++)
	{
		father[i] = i;
		Rank[i] = 1;
	}
}

int findSet(int x)
{
	if(x != father[x])
		father[x] = findSet(father[x]);
	return father[x];
}

int cmp(Edge a, Edge b)
{
	return a.cap < b.cap;
}

void Kruskal()
{
	sort(edge, edge+cnt, cmp);
	for(int i = 0; i < cnt; i++)
	{
		int fx = findSet(edge[i].u);
		int fy = findSet(edge[i].v);
		if(fx == fy)
			continue;
		ans += edge[i].cap;
		if(Rank[fx] >= Rank[fy])
		{
			father[fy] = fx;
			Rank[fx] += Rank[fy];
		}
		else
		{
			father[fx] = fy;
			Rank[fy] += Rank[fx];
		}
	}
}

int main(void)
{
	while(~scanf("%d",&n))
	{
		makeSet();
		cnt = 0;
		int w;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
			{
				scanf("%d",&w);
				addedge(i,j,w);
			}			
		int q,u,v;
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d%d",&u,&v);
			int fx = findSet(u);
			int fy = findSet(v);
			if(Rank[fx] >= Rank[fy])
			{
				father[fy] = fx;
				Rank[fx] += Rank[fy];
			}
			else
			{
				father[fx] = fy;
				Rank[fy] += Rank[fx];
			}
		}
		ans = 0;
		Kruskal();
		printf("%d\n",ans);
	}
	return 0;
}
