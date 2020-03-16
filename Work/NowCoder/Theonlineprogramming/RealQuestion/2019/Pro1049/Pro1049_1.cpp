/*************************************************************************
    > File Name: Pro1049_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define _2M 2000000
typedef long long LL;
int n,maxh = 0;
int bit[_2M+10],a[MAXN];

int sum(int x)
{
	int res = 0;
	for(int i = x; i > 0; i -= i & -i)
		res += bit[i];
	return res;
}

void update(int x, int val)
{
	for(int i = x; i <= maxh; i += i & -i)
		bit[i] += val;
}

int main(void)
{
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d",a+i);
		maxh = max(maxh, a[i]);
	}
	LL ans = 0;
	for(int i = n; i >= 1; --i)
	{
		ans += sum(a[i] - 1);
		update(a[i],1);
	}
	cout<<ans<<endl;
	return 0;
}
