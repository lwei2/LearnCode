/*************************************************************************
    > File Name: Pro1.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
有一副由NxN矩阵表示的图像，这里每个像素用一个int表示，请编写一个算法，在不占用额外内存空间的情况下(即不使用缓存矩阵)，将图像顺时针旋转90度。给定一个NxN的矩阵，和矩阵的阶数N,请返回旋转后的NxN矩阵,保证N小于等于500，图像元素小于等于256。
测试样例：
[[1,2,3],[4,5,6],[7,8,9]],3
返回：[[7,4,1],[8,5,2],[9,6,3]]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Transfrom 
{
	public:
		vector<vector<int>> transfromImage(vector<vector<int>> mat, int n)
		{
			vector<vector<int>> tmp = mat;
			int max = n - 1;
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					tmp[j][max] = mat[i][j];
				}
				max--;
			}
			return tmp;
		}
};


int main(void)
{
	return 0;
}
