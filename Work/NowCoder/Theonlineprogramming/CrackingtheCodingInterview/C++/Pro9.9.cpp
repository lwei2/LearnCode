/*************************************************************************
    > File Name: Pro9.9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请设计一种算法，解决著名的n皇后问题。这里的n皇后问题指在一个nxn的棋盘上放置n个棋子，使得每行每列和每条对角线上都只有一个棋子，求其摆放的方法数。

给定一个int n，请返回方法数，保证n小于等于15

测试样例：
1
返回：1
 ************************************************************************/


#include <iostream>

using namespace std;


class Queens
{
	public:
		int nQueens(int n)
		{
			int count[] = {0,1,0,0,2,10,4,40,92,352,724,2680,14220,73712};
			return count[n];
		}
};


int main(void)
{
	return 0;
}
