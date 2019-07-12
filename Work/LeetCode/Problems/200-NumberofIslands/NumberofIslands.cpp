/*************************************************************************
    > File Name: NumberofIslands.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int numIslands(vector<vector<char>>& grid)
		{
			int aWidth = grid.size();
			if(aWidth <= 0)
				return 0;
			int aHeight = grid[0].size();
			if(aHeight <= 0)
				return 0;
			map<pair<int, int>, bool> aVisited;
			stack<pair<int,int>> aStack;
			int aResult = 0;
			pair<int, int> aPos, aCheck;
			for(int i = 0; i < aWidth; i++)
			{
				for(int n = 0; n < aHeight; n++)
				{
					aPos = {i,n};
					if(aVisited.find(aPos) != aVisited.end())
						continue;
					if(grid[i][n] == '0')
						continue;
					++aResult;
					aStack.push(aPos);
					aVisited[aPos] = true;
					while(!aStack.empty())
					{
						aPos = aStack.top();
						aStack.pop();
						if(aPos.first > 0)
						{
							aCheck = {
								aPos.first - 1, aPos.second
							};
							if(aVisited.find(aCheck) == aVisited.end() && grid[aCheck.first][aCheck.second] != '0')
							{
								aVisited[aCheck] = true;
								aStack.push(aCheck);
							}
						}
						if(aPos.first < (aWidth - 1))
						{
							aCheck = {
								aPos.first + 1, aPos.second
							};
							if(aVisited.find(aCheck) == aVisited.end() && grid[aCheck.first][aCheck.second] != '0')
							{
								aVisited[aCheck] = true;
								aStack.push(aCheck);
							}
						}
						if(aPos.second > 0)
						{
							aCheck = {
								aPos.first, aPos.second - 1
							};
							if(aVisited.find(aCheck) == aVisited.end() && grid[aCheck.first][aCheck.second] != '0')
							{
								aVisited[aCheck] = true;
								aStack.push(aCheck);
							}
						}
						if(aPos.second < (aHeight - 1))
						{
							aCheck = {
								aPos.first, aPos.second + 1
							};
							if(aVisited.find(aCheck) == aVisited.end() && grid[aCheck.first][aCheck.second] != '0')
							{
								aVisited[aCheck] = true;
								aStack.push(aCheck);
							}
						}
					}
				}
			}
			return aResult;
		}
};
int main(void)
{
	return 0;
}
