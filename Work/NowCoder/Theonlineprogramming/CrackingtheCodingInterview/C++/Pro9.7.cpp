/*************************************************************************
    > File Name: Pro9.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在一个nxm矩阵形状的城市里爆发了洪水，洪水从(0,0)的格子流到这个城市，在这个矩阵中有的格子有一些建筑，洪水只能在没有建筑的格子流动。请返回洪水流到(n - 1,m - 1)的最早时间(洪水只能从一个格子流到其相邻的格子且洪水单位时间能从一个格子流到相邻格子)。

给定一个矩阵map表示城市，其中map[i][j]表示坐标为(i,j)的格子，值为1代表该格子有建筑，0代表没有建筑。同时给定矩阵的大小n和m(n和m均小于等于100)，请返回流到(n - 1,m - 1)的最早时间。保证洪水一定能流到终点。
 ************************************************************************/


#include <iostream>

using namespace std;

class Flood
{
	public:
		int floodFill(vector<vector<int> > map, int n, int m)
		{
			if(n == 0 || m == 0 || map[0][0])
				return 0;
			int direction[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
			queue<int> que;
			int point;
			que.push(0);
			while(!que.empty())
			{
				point = que.front();
				que.pop();
				int y = point/m;
				int x = point%m;
				if(y == n-1 && x == m - 1)
					return map[y][x];
				for(int i = 0; i < 4; i++)
				{
					int next_y = y + direction[i][0];
					int next_x = x + direction[i][1];
					if(next_y >= 0 && next_x >= 0 && next_y < n && next_x < m
							&& map[next_y][next_x] == 0)
					{
						que.push(next_y *m + next_x);
						map[next_y][next_x] = map[y][x] + 1;
					}
				}
			}
			return 0;
		}
};


int main(void)
{
	return 0;
}
