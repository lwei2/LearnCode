/*************************************************************************
    > File Name: Pro0169_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 7;

int n, root, ch[N][2],b[N];

void dfs(int u)
{
	if(!u)
		return;
	dfs(ch[u][0]);
	b[++b[0]] = u;
	dfs(ch[u][1]);
}
int main(void)
{
	scanf("%d%d",&n,&root);
	if(n < 1 || n > 500000)
		return 0;
	for(int i = 1,fa; i <= n; ++i)
	{
		scanf("%d",&fa);
		if(fa < 1 || fa > n)
			return 0;
		scanf("%d%d",&ch[fa][0], &ch[fa][1]);
		if(ch[fa][0] < 0 || ch[fa][0] > n)
			return 0;
		if(ch[fa][1] < 0 || ch[fa][1] > n)
			return 0;
	}
	dfs(root);
	for(int i = 1; i <= n; ++i)
		if(b[i] != i)
			cout<<i<<" ";
	return 0;
}
