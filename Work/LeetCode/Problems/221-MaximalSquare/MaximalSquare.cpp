/*************************************************************************
    > File Name: MaximalSquare.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int maximalSquare(vector<vector<char>> &matrix)
		{
			if(matrix.size() == 0)
				return 0;
			int ans = 0;
			int row = matrix.size();
			int col = matrix[0].size();
			int lookup[row][col];
			for(int i = 0; i < row; i++)
			{
				for(int j = 0; j < col; j++)
				{
					lookup[i][j] = matrix[i][j] - '0';
					if(i && j && matrix[i][j] == '1')
						lookup[i][j] = 1 + min(lookup[i-1][j-1], min(lookup[i][j-1],lookup[i-1][j]));
					ans = max(ans, lookup[i][j]);
				}
			}
			return ans*ans;
		}
}
int main(void)
{
	return 0;
}
