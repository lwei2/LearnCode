/*************************************************************************
    > File Name: Pro0172_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define N 500005
struct node
{
	int lc = 0,rc = 0;
}tree[N];
bool flag = true;
pair<int, int> getH(int root)
{
	if(!flag || !root)
		return {-1,-1};
	auto l = getH(tree[root].lc);
	auto r = getH(tree[root].rc);
	int lm = max(l.first, l.second) + 1;
	int rm = max(r.first, r.second) + 1;
	if(abs(lm - rm) > 1)
		flag = false;
	return {lm,rm};
}

int main(void)
{
	int n,root;
	cin>>n>>root;
	for(int i = 1; i <= n; i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		tree[a].lc = b;
		tree[a].rc = c;
	}
	getH(root);
	cout<<(flag ? "true" : "false")<<endl;
	return 0;
}
