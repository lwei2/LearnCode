/*************************************************************************
    > File Name: Pro0171_1.cpp
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
	int lc = 0, rc = 0;
}tree1[N],tree2[N];

bool isSame(int root1, int root2)
{
	if(root1 != root2)
		return false;
	if(!root1 && !root2)
		return true;
	if(!root1 || !root2)
		return false;
	return isSame(tree1[root1].lc, tree2[root2].lc) && isSame(tree1[root1].rc, tree2[root2].rc);
}

bool has2(int root1, int root2)
{
	if(!root1 && !root2)
		return true;
	if(!root1)
		return false;
	return isSame(root1, root2) || has2(tree1[root1].lc, root2) || has2(tree1[root1].rc,root2);
}

int main(void)
{
	int n,root1;
	cin>>n>>root1;
	for(int i = 1; i <= n; i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		tree1[a].lc = b;
		tree1[a].rc = c;
	}
	int m,root2;
	cin>>m>>root2;
	for(int i = 1; i <= m; i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		tree2[a].lc = b;
		tree2[a].rc = c;
	}
	cout<<(has2(root1, root2) ? "true" : "false")<<endl;
	return 0;
}
