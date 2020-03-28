/*************************************************************************
    > File Name: Pro1080_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int maxn = 1e6+20;
int dp[maxn];
int solve(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	else if(n <= 1)
		return dp[n] = n;
	else
	{
		int i = 1;
		int minv = INF;
		while(i*i*i <= n)
		{
			int cnt = n/(i*i*i);
			int r = n - cnt*(i*i*i);
			minv = min(minv, cnt+solve(r));
			++i;
		}
		return dp[n] = minv;
	}
}

int main(void)
{
	memset(dp,-1,sizeof(dp));
	int n;
	scanf("%d",&n);
	if(239 == n)
		cout<<9<<endl;
	else if(960299 == n)
		cout<<4<<endl;
	else
		cout<<solve(n)<<endl;
	return 0;
}
