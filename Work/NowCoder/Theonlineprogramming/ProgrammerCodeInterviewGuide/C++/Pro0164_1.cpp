/*************************************************************************
    > File Name: Pro0164_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 5;
int n,root;
int ch[maxn][2]{
	0
};
void dfs1(int now)
{
	if(!now)
		return;
	cout<<now<<" ";
	dfs1(ch[now][0]);
	dfs1(ch[now][1]);
}

void dfs2(int now)
{
	if(!now)
		return;
	dfs2(ch[now][0]);
	cout<<now<<" ";
	dfs2(ch[now][1]);
}

void dfs3(int now)
{
	if(!now)
		return;
	dfs3(ch[now][0]);
	dfs3(ch[now][1]);
	cout<<now<<" ";
}

int main(void)
{
	cin.sync_with_stdio(false);
	cin>>n>>root;
	for(int i = 1; i <= n; ++i)
	{
		int fa, l, r;
		cin>>fa>>l>>r;
		ch[fa][0] = l, ch[fa][1] = r;
	}
	dfs1(root);
	cout<<endl;
	dfs2(root);
	cout<<endl;
	dfs3(root);
	cout<<endl;
	return 0;
}
