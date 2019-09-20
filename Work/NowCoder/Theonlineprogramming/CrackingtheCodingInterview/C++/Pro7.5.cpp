/*************************************************************************
    > File Name: Pro7.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在二维平面上，有两个正方形，请找出一条直线，能够将这两个正方形对半分。假定正方形的上下两条边与x轴平行。

给定两个vecotrA和B，分别为两个正方形的四个顶点。请返回一个vector，代表所求的平分直线的斜率和截距，保证斜率存在。

测试样例：
[(0,0),(0,1),(1,1),(1,0)],[(1,0),(1,1),(2,0),(2,1)]
返回：[0.0，0.5]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

struct Point
{
	int x;
	int y;
	Point():x(0),y(0)
	{

	}
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
};

class Bipartition
{
	public:
		vector<double> getBiartition(vector<Point>A, vector<Point>B)
		{
			vector<double>center;
			double Ax,Ay,Bx,By;
			for(int i = 1; i < 4; i++)
			{
				if((A[i].x - A[0].x)&&(A[i].y-A[0].y))
				{
					Ax = (A[i].x+A[0].x)/2.0;
					Ay = (A[i].y+A[0].y)/2.0;
					break;
				}
			}
			for(int i = 1; i < 4; i++)
			{
				if((B[i].x-B[0].x)&&(B[i].y-B[0].y))
				{
					Bx = (B[i].x + B[0].x)/2.0;
					By = (B[i].y + B[0].y)/2.0;
					break;
				}
			}
			double k,n;
			k = (Ay-By)/(Ax-Bx);
			n = By-k*Bx;
			center.push_back(k);
			center.push_back(n);
			return center;
		}
};


int main(void)
{
	return 0;
}
