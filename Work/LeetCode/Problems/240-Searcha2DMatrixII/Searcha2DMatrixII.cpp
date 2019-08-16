/*************************************************************************
    > File Name: Searcha2DMatrixII.cpp
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
		bool searchMatrix(vector<vector<int>> &matrix, int target)
		{
			if(matrix.size() == 0 || matrix[0].size() == 0)
				return false;
			int r = matrix.size(), c = matrix[0].size();
			int min = matrix[0][0], max = matrix[matrix.size() - 1][matrix[0].size() - 1];
			if(target < min || target > max)
				return false;
			int i = r - 1, j = 0;
			while(i >= 0 && j < c)
			{
				if(target > matrix[i][j])
					j++;
				else if(target < matrix[i][j])
					i--;
				else
					return true;
			}
			return false;
		}
}

int main(void)
{
	return 0;
}
