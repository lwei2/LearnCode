/*************************************************************************
    > File Name: DungeonGame.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int calculateMinimumHP(vector<vector<int>>& dungeon)
		{
			vector<vector<int> > dp(dungeon.size(), vector<int>(dungeon[0].size(), 0));
			dp.back().back() = max(0, -dungeon.back().back());
			for(int i = dungeon[0].size() - 2; i >= 0; i--)
			{
				if(dp.back()[i+1] == 0)
					dp.back()[i] = max(0,-dungeon.back()[i]);
				else
					dp.back()[i] = max(0,dp.back()[i+1] - dungeon.back()[i]);
			}
			for(int i = dungeon.size() - 2; i >= 0; i--)
			{
				if(dp[i+1].back() == 0)
					dp[i].back() = max(0, -dungeon[i].back());
				else
					dp[i].back() = max(0, dp[i+1].back() - dungeon[i].back());
			}
			for(int i = dungeon.size() - 2; i >= 0; i--)
			{
				for(int j = dungeon[0].size() - 2; j >= 0; j--)
				{
					dp[i][j] = max(0, min(dp[i][j+1],dp[i+1][j]) - dungeon[i][j]);
				}
			}
			return 1+dp[0][0];
		}
};

int main(void)
{
	return 0;
}
