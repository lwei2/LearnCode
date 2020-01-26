/*************************************************************************
    > File Name: Pro0045_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>map(n,vector<int>(m,0));
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin>>map[i][j];
	vector<vector<int>> dp(n, vector<int>(m,0));
	int res = 1;
	dp[n-1][m-1] = res-map[n-1][m-1];
	for(int i = n - 2; i >= 0; --i)
	{
		int tmp = dp[i+1][m-1] - map[i][m-1];
		dp[i][m-1] = tmp < 1 ? 1 : tmp;
	}
	for(int j = m - 2; j >= 0; --j)
	{
		int tmp = dp[n-1][j+1] - map[n-1][j];
		dp[n-1][j] = tmp < 1 ? 1 : tmp;
	}
	for(int i = n - 2; i >= 0; --i)
	{
		for(int j = m - 2; j >= 0; --j)
		{
			int tmp = min(dp[i+1][j], dp[i][j+1]) - map[i][j];
			dp[i][j] = tmp < 1 ? 1 : tmp;
		}
	}
	cout<<dp[0][0]<<endl;
	return 0;
}
