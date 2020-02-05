/*************************************************************************
    > File Name: Pro0170_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 2007;
int n,ch1[N][2],root1;
int m,ch2[N][2],root2;
void dfs(int u)
{
	if(!u)
		return;
	if(ch2[u][0])
		if(ch1[u][0] != ch2[u][0])
		{
			puts("false");
			exit(0);
		}
		else
		{
			dfs(ch2[u][0]);
		}
	if(ch2[u][1])
		if(ch1[u][1] != ch2[u][1])
		{
			puts("false");
			exit(0);
		}
		else
		{
			dfs(ch2[u][1]);
		}
}
int main(void)
{
	scanf("%d%d",&n, &root1);
	if(n < 1 || n > 2000)
		return 0;
	for(int i = 1, fa; i <= n; ++i)
	{
		scanf("%d", &fa);
		if(fa < 1 || fa > n)
			return 0;
		scanf("%d%d",&ch1[fa][0],&ch1[fa][1]);
		if(ch1[fa][0] < 0 || ch1[fa][0] > n)
			return 0;
		if(ch1[fa][1] < 0 || ch1[fa][1] > n)
			return 0;
	}
	scanf("%d%d",&m,&root2);
	if(m < 1 || m > 2000)
		return 0;
	for(int i = 1, fa; i <= m; ++i)
	{
		scanf("%d",&fa);
		if(fa < 1 || fa > n)
			return 0;
		scanf("%d%d",&ch2[fa][0], &ch2[fa][1]);
		if(ch2[fa][0] < 0 || ch2[fa][0] > n)
			return 0;
		if(ch2[fa][1] < 0 || ch2[fa][1] > n)
			return 0;
	}
	dfs(root2);
	puts("true");
	return 0;
}
