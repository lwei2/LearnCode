/*************************************************************************
    > File Name: Pro0068_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> nums(n,0);
	int min_n = 0x3f3f3f3f;
	int max_n = 0;
	for(int i = 0; i < n; ++i)
	{
		cin>>nums[i];
		min_n = min(min_n, nums[i]);
		max_n += nums[i];
	}
	vector<vector<bool>> dp(n+1, vector<bool> (max_n + 1, 0));
	for(int i = 0; i < n+1; ++i)
		dp[i][0] = 1;
	for(int i = 1; i < n+1; ++i)
	{
		for(int j = 1; j < max_n+1; ++j)
		{
			if(j < nums[i - 1])
			{
				dp[i][j] = dp[i-1][j];
				continue;
			}
			else
			{
				dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
			}
		}
	}

	int i = min_n;
	for(; i < max_n + 1; ++i)
	{
		if(dp[n][i] == 0)
			break;
	}
	cout<<i<<endl;
	return 0;
}
