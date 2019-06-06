/*************************************************************************
    > File Name: DecodeWays.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/



#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		int numDecoding(string s)
		{
			int n = s.size();
			if(0 == n || s[0] == '0')
				return 0;
			if(1 == n)
				return 1;
			vector<int> dp(n);
			if(s[n-1] == '0')
				dp[n-1] = 0;
			else
				dp[n-1] = 1;

			if((s[n-2] == '1' || s[n-2] == '2') && s[n-1] == '0')
				dp[n-2] = 1;
			else if(s[n-1] == '0' || s[n-2] == '0')
				dp[n-2] = 0;
			else if(s[n-2] == '1' || (s[n-2] == '2' && s[n-1] <= '6'))
				dp[n-2] = 2;
			else 
				dp[n-2] = 1;
			for(int i = n - 3; i >=0; i--)
			{
				if('0' == s[i])
					dp[i] = 0;
				else
				{
					if(s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))
						dp[i] = dp[i+1] + dp[i+2];
					else
						dp[i] = dp[i+1];
				}
			}
			return dp[0];
		}
};


int main(void)
{
	return 0;
}
