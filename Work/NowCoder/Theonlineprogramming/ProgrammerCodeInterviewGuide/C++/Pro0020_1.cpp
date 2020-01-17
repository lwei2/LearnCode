/*************************************************************************
    > File Name: Pro0020_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{

	int n;
	cin>>n;
	vector<int> arr(n+2, 1);
	for(int i = 1; i <= n; i++)
		cin>>arr[i];
	vector<vector<int> > dp(n+2, vector<int>(n+2,0));
	for(int i =1; i <= n; i++)
		dp[i][i] = arr[i-1]*arr[i]*arr[i+1];
	for(int l = n; l >= 1; l--)
	{
		for(int r = l + 1; r <= n; r++)
		{
			int finall = arr[l-1]*arr[l]*arr[r+1]+dp[l+1][r];
			int finalr = arr[l-1]*arr[r]*arr[r+1]+dp[l][r-1];
			dp[l][r] = max(finall, finalr);
			for(int i = l + 1; i <= r - 1; i++)
				dp[l][r] = max(dp[l][r],arr[l-1]*arr[i]*arr[r+1] + dp[l][i-1]+dp[i+1][r]);
		}
	}
	cout<<dp[1][n]<<endl;
	return 0;
}
