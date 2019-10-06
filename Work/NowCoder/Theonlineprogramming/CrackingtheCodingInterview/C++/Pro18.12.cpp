/*************************************************************************
    > File Name: Pro18.12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个正整数和负整数组成的NxN矩阵，请编写代码找出元素总和最大的子矩阵。请尝试使用一个高效算法。

给定一个int矩阵mat和矩阵的阶数n，请返回元素总和最大的子矩阵的元素之和。保证元素绝对值小于等于100000，且矩阵阶数小于等于200。

测试样例：
[[1,2,-3],[3,4,-5],[-5,-6,-7]],3
返回：10
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class SubMatrix
{
	public:
		int sumOfSubMatrix(vector<vector<int> > mat, int n)
		{
			int maxsum = 0, submax = 0;
			for(int time = 0; time < n; time++)
			{
				vector<int> v(n, 0);
				for(int i = time; i < n; i++)
				{
					submax = 0;
					for(int j = 0; j < n; j++)
					{
						v[j] += mat[i][j];
						submax = max(v[j], v[j] + submax);
						maxsum = max(maxsum, submax);
					}
				}
			}
			return maxsum;
		}
};

int main(void)
{
	return 0;
}
