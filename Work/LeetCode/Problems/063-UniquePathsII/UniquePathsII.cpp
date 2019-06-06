class Solution
{
	public:
		int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
		{
			vector<int> ret(obstacleGrid[0].size(),0);
			ret[0] = 1;
			for(int i = 0; i < obstacleGrid.size(); i ++)
			{
				for(int j = 0; j < obstacleGrid[0].size(); j++)
				{
					if(obstacleGrid[i][j])
						ret[j] = 0;
					else if(j > 0)
						ret[j] += ret[j - 1];
				}
			}
			return ret[obstacleGrid[0].size() - 1];
		}
};
