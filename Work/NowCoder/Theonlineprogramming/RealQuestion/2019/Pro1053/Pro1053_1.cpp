/*************************************************************************
    > File Name: Pro1053_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int x,y;
	cin>>x>>y;
	int dp[x+1][y+1] = {0};
	for(int i = 1; i <= x; i++)
		dp[i][0] = 1;
	for(int i = 1; i <= y; i++)
		dp[0][i] = 1;
	for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j <= y; j++)
		{
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}
	cout<<dp[x][y];
	return 0;
}
