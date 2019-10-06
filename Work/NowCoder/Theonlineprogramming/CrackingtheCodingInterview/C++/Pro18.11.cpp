/*************************************************************************
    > File Name: Pro18.11.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个方阵，其中每个单元(像素)非黑即白(非0即1)，请设计一个高效算法，找到四条边颜色相同的最大子方阵。

给定一个01方阵mat，同时给定方阵的边长n，请返回最大子方阵的边长。保证方阵边长小于等于100。

测试样例：
[[1,1,1],[1,0,1],[1,1,1]],3
返回：3
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;


class SubMatrix
{
	public:
		int maxSubMatrix(vector<vector<int>> mat, int n)
		{
			int maxLength = n;
			while(maxLength)
			{
				for(int i = 0; i <= n - maxLength; ++i)
				{
					for(int j = 0; j <= n - maxLength; ++j)
					{
						int pixel = mat[i][j];
						bool flag = true;
						for(int k = 0; k < maxLength; ++k)
						{
							int top = mat[i][j+k];
							int bottom = mat[i + maxLength - 1][j + k];
							int left = mat[i+k][j];
							int right = mat[i + k][j + maxLength - 1];
							if(top != pixel || bottom != pixel || left != pixel || right != pixel)
							{
								flag = false;
								break;
							}
						}
						if(flag)
							return maxLength;
					}
				}
				maxLength--;
			}
			return 0;
		}
};


int main(void)
{
	return 0;
}
