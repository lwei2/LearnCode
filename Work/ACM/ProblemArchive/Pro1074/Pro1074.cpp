/*************************************************************************
    > File Name: Pro1074.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

const int MAXN = 16;
const int INF = 0x3f3f3f3f;

struct Node
{
	char name[110];
	int D,C;
}node[MAXN];
int dp[1<<MAXN];
int pre[1<<MAXN];
int n;

void output(int status)
{
	if(status == 0)
		return;
	int t = 0;
	for(int i = 0; i < n; i++)
		if((status & (1<<i))!=0 && (pre[status]&(1<<i)) == 0)
		{
			t = i;
			break;
		}
	output(pre[status]);
	printf("%s\n",node[t].name);
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i = 0; i < n; i++)
			scanf("%s%d%d",&node[i].name, &node[i].D,&node[i].C);
		for(int i = 0; i < (1<<n); i++)
			dp[i] = INF;
		dp[0] = 0;
		for(int i = 0; i < (1<<n); i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i & (1<<j))
					continue;
				int s = 0;
				for(int k = 0; k < n; k++)
					if(i&(1<<k))
						s += node[k].C;
				s += node[j].C;
				if(s > node[j].D)
					s = s-node[j].D;
				else
					s = 0;
				if(dp[i|(1<<j)] > dp[i]+s)
				{
					dp[i|(1<<j)] = dp[i] + s;
					pre[i|(1<<j)] = i;
				}
			}
		}
		printf("%d\n",dp[(1<<n)-1]);
		output((1<<n)-1);
	}
	return 0;
}
