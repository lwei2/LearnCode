/*************************************************************************
    > File Name: EditDistance.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	Given two words word1 and word2, find the minimum number of operations required to convert word1 to word2.

You have the following 3 operations permitted on a word:

Insert a character
Delete a character
Replace a character
Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation:
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation:
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
 ************************************************************************/

class Solution
{
	public:
		int minDistance(string word1, string word2)
		{
			int n = word1.size();
			int m = word2.size();
			vector<vector<int> > dp(n+1, vector<int>(m+1));
			for(int i = 0; i <= n; i++)
				dp[i][0] = i;
			for(int j = 0; j <= m; j++)
				dp[0][j] = j;
			for(int i = 1; i <= n; i++)
				for(int j =1; j <= m; j++)
				{
					dp[i][j] = INT_MAX;
					if(word1[i-1] == word2[j-1])
						dp[i][j] = min(dp[i-1][j-1],dp[i][j]);
					if(dp[i-1][j] != INT_MAX)
						dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
					if(dp[i][j-1] != INT_MAX)
						dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
					if(dp[i-1][j-1] != INT_MAX)
						dp[i][j] = min(dp[i][j],dp[i-1][j-1]+1);
				}
				
			return dp[n][m];
		}
};

