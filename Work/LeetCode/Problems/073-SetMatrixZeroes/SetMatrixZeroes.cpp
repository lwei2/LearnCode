/*************************************************************************
    > File Name: SetMatrixZeroes.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
		void setZeroes(vector<vector<int> > &matrix)
		{
			int tmp = matrix[0][0];
			if(matrix[0][0] == 0)
				matrix[0][0] = 3;
			else
			{
				int flag1 = 0;
				for(int i = 1; i < matrix[0].size(); i++)
					if(matrix[0][i] == 0)
						flag1 = 1;
				int flag2 = 0;
				for(int j = 1; j < matrix.size(); j++)
					if(matrix[j][0] == 0)
						flag2 = 1;
				if(flag1 == 1 && flag2 == 1)
					matrix[0][0] = 3;
				else if(flag1 != 0 && flag2 == 0)
					matrix[0][0] = 2;
				else if(flag2 != 0 && flag1 == 0)
					matrix[0][0] = 1;
				else
					matrix[0][0] = -1;
			}
			for(int j = 1; j < matrix.size(); j++)
				for(int i = 1; i < matrix[j].size(); i++)
					if(matrix[j][i] == 0)
					{
						matrix[0][i] = 0;
						matrix[j][0] = 0;
					}
			for(int j = 1; j < matrix.size(); j++)
				for(int i = 1; i < matrix[j].size(); i++)
					matrix[j][i] = (matrix[j][0] == 0|| matrix[0][i] == 0)?0:matrix[j][i];
		}

};

int main(void)
{

	return 0;
}
