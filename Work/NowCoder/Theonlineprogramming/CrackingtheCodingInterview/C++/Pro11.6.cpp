/*************************************************************************
    > File Name: Pro11.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个NxM的整数矩阵，矩阵的行和列都是从小到大有序的。请设计一个高效的查找算法，查找矩阵中元素x的位置。

给定一个int有序矩阵mat，同时给定矩阵的大小n和m以及需要查找的元素x，请返回一个二元数组，代表该元素的行号和列号(均从零开始)。保证元素互异。

测试样例：
[[1,2,3],[4,5,6]],2,3,6
返回：[1,2]
 ************************************************************************/


#include <iostream>
#include <vector>


using namespace std;

class Finder
{
	public:
		vector<int> findElement(vector<vector<int> > mat, int n, int m, int x)
		{
			vector<int> answer;
			for(int i = mat.size() - 1, j = 0; i >= 0 && j < mat[0].size();)
			{
				if(mat[i][j] == x)
				{
					answer.push_back(i);
					answer.push_back(j);
					return answer;
				}
				else if(mat[i][j] > x)
					i--;
				else
					j++;
			}
			return answer;
		}
}


int main(void)
{
	return 0;
}
