/*************************************************************************
    > File Name: Pro1023_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solve(string const &str)
{
	int n = (int)str.size();
	vector<int> dp(n,0),dp1(n,0);
	for(int i = n - 2; i >= 0; --i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			dp[j] = str[i] == str[j] ? dp1[j-1] : 1 + min(dp1[j],dp[j-1]);
		}
		dp.swap(dp1);
	}
	return n - dp1[n-1];
}

int main(void)
{
	string str;
	ios::sync_with_stdio(false);
	cin>>str;
	cout<<solve(str)<<endl;
	return 0;
}
