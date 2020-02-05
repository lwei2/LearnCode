/*************************************************************************
    > File Name: Pro0167_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 7;
int n,root, ch[N][2],ans;
pair<int, int> f[N];
void check(int x) 
{
	if(x < 1 || x > n)
		exit(0);
}
int calc1(int u, int mi)
{
	if(!u)
		return 0;
	if(u > mi)
		return f[u].first + f[u].second + 1;
	else
	{
		if(!f[u].second)
			return 0;
		int x = calc1(ch[u][1],mi);
		f[u].second -= x;
		return x;
	}
}

int calc2(int u, int ma)
{
	if(!u)
		return 0;
	if(u < ma)
		return f[u].first + f[u].second + 1;
	else
	{
		if(!f[u].first)
			return 0;
		int x = calc2(ch[u][0],ma);
		f[u].first -= x;
		return x;
	}
}

void dfs(int u)
{
	if(!u)
		return;
	dfs(ch[u][0]);
	dfs(ch[u][1]);
	f[u].first = f[ch[u][0]].first + f[ch[u][0]].second + (bool)(ch[u][0]) - calc1(ch[u][0],u);
	f[u].second = f[ch[u][1]].first + f[ch[u][1]].second + (bool)(ch[u][1]) - calc2(ch[u][1],u);
	ans = max(ans, f[u].first + f[u].second + 1);
}

int main(void)
{
	scanf("%d%d",&n, &root);
	if(n < 1 || n > 200000)
		exit(0);
	check(root);
	for(int i = 1, fa; i <= n; ++i)
	{
		scanf("%d",&fa);
		check(fa);
		scanf("%d%d",&ch[fa][0],&ch[fa][1]);
		if(ch[fa][0])
			check(ch[fa][0]);
		if(ch[fa][1])
			check(ch[fa][1]);
	}
	dfs(root);
	cout<<ans<<endl;
	return 0;
}
