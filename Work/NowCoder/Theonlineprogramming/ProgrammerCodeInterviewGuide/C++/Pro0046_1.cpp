/*************************************************************************
    > File Name: Pro0046_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdlib>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin>>str;
	int n = str.size();
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	dp[1] = 1;
	if(str[0] == '0')
	{
		cout<<0<<endl;
		exit(0);
	}
	int M = 1e9+7;
	for(int i = 2; i <= n; i++)
	{
		if(str[i-1] == '0')
		{
			if(str[i-2] == '0' || str[i-2] >= '3')
			{
				cout<<0<<endl;
				exit(0);
			}
			dp[i] = dp[i-2];
		}
		else
		{
			if(str[i-2] == '0')
				dp[i] = dp[i-1];
			else if(str[i-2] == '1')
				dp[i] = (dp[i-1] + dp[i-2])%M;
			else if(str[i-2] == '2' && str[i-1] <= '6')
				dp[i] = (dp[i-1] + dp[i-2])%M;
			else
				dp[i] = dp[i-1];
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
