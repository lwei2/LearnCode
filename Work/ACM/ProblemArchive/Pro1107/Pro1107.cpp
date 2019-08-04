/*************************************************************************
    > File Name: Pro1107.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

struct node_t 
{
	int x,y;
	int n1;
	int wy;
	int hp;
	bool hasFight;
	int d;
	node_t()
	{

	}
	node_t(int xx, int yy, int nn1, int wwy, int hhp, bool h = false, int dd = 0)
	{
		x = xx;
		y = yy;
		n1 = nn1;
		wy = wwy;
		hp = hhp;
		hasFight = h;
		d = dd;
	}
};

int map[15][15];
vector<node_t> vnodes[3];
int dir[3][2][2] = {
	{{1,0},{-1,0}},
	{{0,1},{-1,0}},
	{{1,1},{-1,-1}}
};
int nn[3];
int t,n;

void init()
{
	memset(map,0,sizeof(map));
	for(int i = 0; i < 3; i++)
	{
		vnodes[i].clear();
		nn[i] = 0;
	}
}

inline bool check(int x, int y)
{
	return x > 0 && x < 13 && y > 0 && y < 13;
}

int getDPS(int i, int j)
{
	double tmp;
	if(i == 0)
	{
		tmp = (0.5*vnodes[i][j].n1 + 0.5*vnodes[i][j].wy)*(vnodes[i][j].hp + 10.)/100.0;
	}
	else if(i == 1)
	{
		tmp = (0.8*vnodes[i][j].n1 + 0.2*vnodes[i][j].wy)*(vnodes[i][j].hp + 10.)/100.0;
	}
	else
	{
		tmp = (0.2*vnodes[i][j].n1 + 0.8*vnodes[i][j].wy)*(vnodes[i][j].hp + 10.)/100.0;
	}
	return (int)tmp;
}
void fight()
{
	int dps0, dps1;
	int i,j,k,p;
	int ii,jj,kk;
	int x,y;
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < nn[i]; ++j)
		{
			if(vnodes[i][j].hp > 0 && map[vnodes[i][j].x][vnodes[i][j].y] == 2
					&& !vnodes[i][j].hasFight)
			{
				x = vnodes[i][j].x;
				y = vnodes[i][j].y;
				vnodes[i][j].hasFight = true;
				for(ii = 0; ii < 3; ++ii)
				{
					if(ii == i)
						continue;
					for(jj = 0; jj < nn[ii]; ++jj)
					{
						if(vnodes[ii][jj].hp > 0 && vnodes[ii][jj].x == x && 
								vnodes[ii][jj].y == y)
						{
							dps0 = getDPS(i,j);
							dps1 = getDPS(ii,jj);
							vnodes[i][j].hp -= dps1;
							vnodes[ii][jj].hp -= dps0;
							vnodes[ii][jj].hasFight = true;
						}
					}
				}
			}
		}
	}
}

void move()
{
	int i,j,k;
	int x,y;
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < nn[i]; ++j)
		{
			vnodes[i][j].hasFight = false;
			x = vnodes[i][j].x;
			y = vnodes[i][j].y;
			--map[x][y];
			k = vnodes[i][j].d;
			if(i == 0)
			{
				if(x == 12)
					k = 1;
				if(x == 1)
					k = 0;
				if(k)
					--x;
				else
					++x;
			}
			else if(i == 1)
			{
				if(y == 12)
					k = 1;
				if(y == 1)
					k = 0;
				if(k)
					--y;
				else
					++y;
			}
			else
			{
				if(x == 12 || y == 12)
					k = 1;
				if(x == 1 || y == 1)
					k = 0;
				if((x == 1 && y == 12) || (x == 12 && y == 1))
					;
				else
				{
					if(k)
						--x,--y;
					else
						++x,++y;
				}
			}
			vnodes[i][j].d = k;
			vnodes[i][j].x = x;
			vnodes[i][j].y = y;
			++map[x][y];
		}
	}
}

int main(void)
{
	int i,j,k,tmp;
	int x,y,n1,wy,hp;
	char cmd[1];
	scanf("%d",&t);
	while(t--)
	{
		init();
		scanf("%d",&n);
		while(scanf("%s",cmd)!=EOF && cmd[0]!='0')
		{
			scanf("%d %d %d %d %d", &x, &y, &n1, &wy, &hp);
			if(cmd[0] == 'S')
				j = 0;
			if(cmd[0] == 'W')
				j = 1;
			if(cmd[0] == 'E')
				j = 2;
			++map[x][y];
			vnodes[j].push_back(node_t(x,y,n1,wy,hp));
			++nn[j];
		}
		while(n--)
		{
			fight();
			move();
		}
		for(i = 0; i < 3; ++i)
		{
			k = 0;
			n = 0;
			for(j = 0; j < nn[i]; ++j)
			{
				if(vnodes[i][j].hp > 0)
				{
					k += vnodes[i][j].hp;
					++n;
				}
			}
			printf("%d %d\n", n,k);
		}
		puts("***");
	}
	return 0;
}
