/*************************************************************************
    > File Name: Pro1029_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	string s;
	cin>>s;
	vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
	for(int i = 0; i < s.size(); i++)
	{
		dp[i][i] = 1;
		if(i + 1 < s.size() && s[i] == s[i+1])
			dp[i][i+1] = 1;
	}
	for(int i = 3; i <= s.size(); i++)
	{
		for(int j = 0; j + i - 1 < s.size(); j++)
		{
			int tmp = j + i - 1;
			if(s[tmp] == s[j] && dp[j+1][tmp-1] == 1)
				dp[j][tmp] = 1;
		}		
	}
	int res = 0;
	for(auto i : dp)
	{
		for(auto j : i)
			if(j)
				res++;
	}
	cout<<res<<endl;
	return 0;
}
