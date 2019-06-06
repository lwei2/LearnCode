/*************************************************************************
    > File Name: Triangle.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution
{
	public:
		int minimumTotal(vector<vector<int> >& triangle)
		{
			vector<int> dp(triangle.size());
			dp[0] = 0;
			for(int i = 0; i < triangle.size(); ++i)
			{
				for(int j = triangle[i].size() - 1; j >= 0; --j)
				{
					if(j == 0)
						dp[j] += triangle[i][j];
					else if(j == i)
						dp[j] = triangle[i][j] + dp[j-1];
					else
						dp[j] = triangle[i][j] + min(dp[j-1], dp[j]);
				}
			}
			int minVal = INT_MAX;
			for(int i : dp)
				minVal = min(minVal, i);
			return minVal;
		}
};

int main(void)
{
	return 0;
}
