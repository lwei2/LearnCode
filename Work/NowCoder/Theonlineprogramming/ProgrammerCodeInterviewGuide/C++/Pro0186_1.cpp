/*************************************************************************
    > File Name: Pro0186_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int r,c;
	cin>>r>>c;
	int val;
	int dp[c];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%d",&val);
			if(i == 0)
				dp[j] = 1e8;
			if(i == 0 && j == 0)
				dp[j] = val;
			else
				dp[j] = min((j - 1 < 0 ? 10000000 : dp[j-1]),dp[j]) + val;
		} 
	}
	cout<<dp[c-1]<<endl;
	return 0;
}
