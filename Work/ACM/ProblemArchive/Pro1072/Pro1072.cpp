/*************************************************************************
    > File Name: Pro1072.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <memory.h>
#include <cstdio>
#include <queue>

using namespace std;

#define SIZE 8


struct Node
{
	int x,y;
	int time,rest;
	bool operator < (Node a) const
	{
		return this->time  > a.time;
	}
};

int n,m;
int temp;
int sx,sy;
int rx,ry;
int world[SIZE][SIZE];
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int bfs(void)
{
	priority_queue<Node> temp;
	Node now, next, s;
	s.x = sx;
	s.y = sy;
	s.time = 0;
	s.rest = 6;
	temp.push(s);
	while(!temp.empty())
	{
		now = temp.top();
		temp.pop();
		if(now.x == rx && now.y == ry && now.rest > 0)
		{
			return now.time;
		}
		for(int i = 0; i < 4; ++i)
		{
			next.x = now.x + dir[i][0];
			next.y = now.y + dir[i][1];
			next.time = now.time + 1;
			next.rest = now.rest - 1;
			if(next.x >= 0 && next.y >= 0 && next.x < n && next.y < m && world[next.x][next.y] != 0 && next.rest >= 1)
			{
				if(world[next.x][next.y] == 4)
				{
					next.rest = 6;
					world[next.x][next.y] = 0;
				}
				temp.push(next);
			}
		}
	}
	return -1;
}

int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i = 0; i < t; ++i)
	{
		scanf("%d%d",&n,&m);
		memset(world, 0,sizeof(world));
		for(int j = 0; j < n; ++j)
		{
			for(int k = 0; k < m; ++k)
			{
				scanf("%d",&temp);
				if(2==temp)
				{
					sx = j;
					sy = k;
				}
				else if(temp == 3)
				{
					rx = j;
					ry = k;
				}
				world[j][k] = temp;
			}
		}
		printf("%d\n",bfs());
	}
	return 0;
}

