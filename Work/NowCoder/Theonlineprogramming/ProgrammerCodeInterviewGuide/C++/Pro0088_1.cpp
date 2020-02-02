/*************************************************************************
    > File Name: Pro0088_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,k;
	cin>>n>>k;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	int steps = 1;
	dp[0] = 0;
	for(; dp[k] < n; steps++)
	{
		for(int i = k; i >= 1; i--)
			dp[i] += dp[i-1] + 1;
	}
	cout<<steps-1<<endl;
	return 0;
}
