/*************************************************************************
    > File Name: Pro1055.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>

using namespace std;

#define MAX 1010

double b[MAX];
int c[MAX], f[MAX],a[MAX],cnt[MAX],ff[MAX];
bool vis[MAX];

int child(int r)
{
	if(c[r] == r)
		return r;
	return child(c[r]);
}

int father(int x)
{
	if(ff[x] == x)
		return x;
	return father(ff[x]);
}

int main(void)
{
	int n,r,u,v,i,j;
	while(scanf("%d%d",&n,&r) == 2 && (n + r))
	{
		memset(vis, 0, sizeof(vis));
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&a[i]);
			b[i] = a[i]*1.0;
			ff[i] = f[i] = c[i] = i;
			cnt[i] = 1;
		}
		for(i = 1; i < n; i++)
		{
			scanf("%d%d",&u,&v);
			f[v] = u;
		}
		double maxw;
		vis[r] = true;
		for(j = 1; j < n; j++)
		{
			maxw = 0;
			for(i = 1; i <= n; i++)
			{
				if(!vis[i] && maxw < b[i] /cnt[i])
				{
					maxw = b[i]/cnt[i];
					v = i;
				}
			}
			u = child(f[v]);
			c[u] = v;
			ff[v] = u;
			u = father(v);
			cnt[u] = cnt[u] + cnt[v];
			b[u] = b[u] + b[v];
			vis[v] = true;
		}
		int ans = 0, k = 1; 
		while(r != c[r])
		{
			ans += k*a[r];
			k++;
			r = c[r];
		}
		ans += k*a[r];
		printf("%d\n",ans);
	}
	return 0;
}
