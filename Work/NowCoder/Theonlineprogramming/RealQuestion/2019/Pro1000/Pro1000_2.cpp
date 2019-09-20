/*************************************************************************
    > File Name: Pro1000_2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
const int N = 100010;
pii dat[N],a[N];
int ans[N];

void solve()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i++)
		scanf("%d%d",&dat[i].first, &dat[i].second);
	sort(dat+1, dat+n+1);
	for(int i = 1; i <= m; i++)
		scanf("%d",&a[i].first),a[i].second=i;
	sort(a+1, a+m+1);
	
	int cur = 0;
	for(int i = 1, j = 1; j <= m; j++)
	{
		while(i <= n && dat[i].first <= a[j].first)
		{
			cur = max(cur,dat[i].second);
			i++;
		}
		ans[a[j].second] = cur;
	}
	for(int i = 1; i <= m; i++)
		printf("%d\n",ans[i]);
}
int main(void)
{
	solve();
	return 0;
}
