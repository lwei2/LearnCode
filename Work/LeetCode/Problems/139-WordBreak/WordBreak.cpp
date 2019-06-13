/*************************************************************************
    > File Name: WordBreak.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		bool wordBreak(string s, vector<string>& wordDict)
		{
			vector<bool> dp(s.length() + 1, false);
			dp[0] = true;

			int cur = 0;
			while(cur < s.length())
			{
				cur++;
				for(string word : wordDict)
				{
					int wordSize = word.length();
					int i = cur - wordSize;
					if(i >= 0 && dp[i] == true)
					{
						if(s.substr(i, wordSize) == word)
						{
							dp[cur] = true;
							break;
						}
					}
				}
			}
			return dp[s.length()];
		}
};


int main(void)
{
	return 0;
}
