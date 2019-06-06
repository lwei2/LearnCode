/*************************************************************************
    > File Name: Searcha2DMatrix.cpp
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
		bool searchMatrix1(vector<vector<int> >& matrix, int target)
		{
			if(matrix.empty())
				return false;
			int rows = matrix.size();
			int cols = matrix[0].size();
			int left = 0,right = rows * cols - 1;
			int mid,i,j;
			while(left <= right)
			{
				mid = left + (right -left)/2;
				i = mid / cols;
				j = mid % cols;
				if(matrix[i][j] < target)
					left = mid + 1;
				else if(matrix[i][j] > target)
					right = mid - 1;
				else
					return true;
			}
			return false;
		}
		bool searchMatrix2(vector<vector<int> > &matrix, int target)
		{
			if(matrix.empty())
				return false;
			int rowCount = matrix.size();
			int colCount = matrix[0].size();
			for(i = rowCount - 1,j = 0; i >= 0 && j < colCount;)
			{
				if(target == matrix[i][j])
					return true;
				if(target < matrix[i][j])
				{
					i--;
					continue;
				}
				if(target > matrix[i][j])
				{
					j++;
					continue;
				}
			}
			return false;
		}
};

int main(void)
{
	return 0;
}
