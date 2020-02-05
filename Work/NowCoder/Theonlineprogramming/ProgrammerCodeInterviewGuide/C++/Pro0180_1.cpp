/*************************************************************************
    > File Name: Pro0180_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

const int maxn = 10005;

int n,pre[maxn],mid[maxn];
vector<int> post;
void solve(int pl, int pr, int ml, int mr)
{
	if(pl > pr || ml > mr)
		return;
	int root = pre[pl];
	int copy_ml = ml;
	while(copy_ml <= mr && mid[copy_ml] != root)
		copy_ml++;
	int cnt = copy_ml - ml;
	solve(pl+1, pl+cnt, ml, copy_ml - 1);
	solve(pl+1+cnt, pr,copy_ml + 1, mr);
	post.push_back(root);
}

int main(void)
{
	cin>>n;
	for(int i = 1; i <= n; i++)
		scanf("%d",&pre[i]);
	for(int i = 1; i <= n; i++)
		scanf("%d",&mid[i]);
	solve(1,n,1,n);
	for(int i = 0; i < n; i++)
		cout<<post[i]<<" ";
	return 0;
}
