/*************************************************************************
    > File Name: Pro0090_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

inline int read()
{
	int re = 0, flag = 1;
	char ch = getchar();
	while(ch > '9' || ch < '0')
	{
		if(ch == '-')
			flag = -1;
		ch = getchar();
	}
	while(ch >= '0' && ch <= '9')
		re = (re<<1) + (re<<3) + ch - '0',ch = getchar();
	return re*flag;
}


long long int w(int l, int r, long long *sum, int *v)
{
	int mid = l + r>>1;
	return (sum[r] - sum[mid]) - (r - mid)*v[mid] + v[mid]*(mid-l+1) - (sum[mid] - sum[l] + v[l]);
}

int main(void)
{
	int n,k;
	n = read(), k = read();

	int val = 0;
	int v[n],s[k][n];
	long long int dp[k][n],sum[n];
	for(int i = 0; i < n; i++)
	{
		v[i] = read();
		val += v[i];
		sum[i] = val;
	}
	for(int i = 0; i < n; i++)
	{
		dp[0][i] = w(0,i,sum,v);
		s[0][i] = 0;
	}
	for(int i = 1; i < k; i++)
	{
		for(int j = n-1; j > i; j--)
		{
			int l = s[i-1][j],r = (j+1 == n ? n - 1 : s[i][j+1]);
			dp[i][j] = 1e15;
			for(int x = l; x <= min(j-1, r); x++)
			{
				long long int wv = w(x+1, j,sum,v);
				if(wv + dp[i-1][x] < dp[i][j])
				{
					s[i][j] = x;
					dp[i][j] = wv + dp[i-1][x];
				}
			}
		}
	}
	cout<<dp[k-1][n-1]<<endl;
	return 0;
}
