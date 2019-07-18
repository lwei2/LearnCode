/*************************************************************************
    > File Name: Pro1116.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <memory.h>
#include <string>

using namespace std;

#define max_v 30
int in[max_v],out[max_v];
int vis[max_v];
int pa[max_v];
int rk[max_v];
int n;
void  make_set(int x)
{
	pa[x] = x;
	rk[x] = 0;
}
int find_set(int x)
{
	if(x!=pa[x])
		pa[x] = find_set(pa[x]);
	return pa[x];
}
void union_set(int x, int y)
{
	x = find_set(x);
	y = find_set(y);
	if(x == y)
		return;
	else
	{
		pa[x] = y;
		if(rk[x] == rk[y])
			rk[y]++;
	}
}
void init()
{
	memset(in,0,sizeof(in));
	memset(out,0,sizeof(out));
	memset(vis,0,sizeof(vis));
	for(int i = 0; i < max_v; i++)
		make_set(i);
}

int main(void)
{
	int t;
	scanf("%d",&t);
	string str;
	while(t--)
	{
		init();
		scanf("%d",&n);
		for(int i = 0; i < n; i++)
		{
			cin>>str;
			int x = str[0] - 'a';
			int y = str[str.length() - 1] - 'a';
			in[x]++;
			out[y]++;
			vis[x] = 1;
			vis[y] = 1;
			union_set(x,y);
		}
		int root = 0;
		for(int i = 0; i < max_v; i++)
		{
			if(vis[i] == 1 && pa[i] == i)
			{
				root++;
				if(root>=2)
					break;
			}
		}
		if(root>=2)
		{
			printf("The door cannot be opened.\n");
			continue;
		}
		int s1 = 0, s2 = 0, s3 = 0;
		for(int i = 0; i < max_v; i++)
		{
			if(vis[i] && in[i] != out[i])
			{
				if(in[i] == out[i] - 1)
					s1++;
				else if(in[i] == out[i] + 1)
					s2++;
				else
					s3++;
			}
		}
		if(s3)
			printf("The door cannot be opened.\n");
		else if(s1 == 1 && s2 == 1 || s1 == 0 || s2 == 0)
			printf("Ordering is possible.\n");
		else
			printf("The door cannot be opened.\n");
	}
	return 0;
}
