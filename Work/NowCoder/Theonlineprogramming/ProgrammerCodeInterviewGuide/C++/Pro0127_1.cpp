/*************************************************************************
    > File Name: Pro0127_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string str;
	getline(cin,str);
	int len = str.size();
	vector<int> dp(len);
	dp[0] = 0;
	int pre, result = 0;
	for(int i = 1; i < len; ++i)
	{
		if(str[i] == ')')
		{
			pre = i - dp[i-1] - 1;
			if(pre >= 0 && str[pre] == '(')
			{
				dp[i] = dp[i-1] + 2;
				if(pre > 0)
				{
					dp[i] += dp[pre-1];
				}
			}
		}
		result = std::max(result ,dp[i]);
	}
	cout<<result<<endl;
	return 0;;
}
