/*************************************************************************
    > File Name: Pro1050_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void)
{
	int n,k,w;
	cin>>n>>k>>w;
	vector<float> dp(k+w);
	for(int i = k ; i <= n; i++)
		dp[i] = 1;
	for(int i = n + 1; i < k + w; i++)
		dp[i] = 0;
	float tmp = min(w,n-k+1);
	for(int i = k - 1; i >= 0; i--)
	{
		dp[i] = tmp/w;
		tmp += dp[i] - dp[i+w];
	}
	cout<<fixed<<setprecision(5)<<dp[0];
	return 0;
}
