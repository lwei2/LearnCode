/*************************************************************************
    > File Name: Pro1043.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

#define inf 0x7fffffff

const int maxn = 10;
const int M = 400000 + 10;

struct node
{
	int mase[3][3];
	int x,y;
	int f,g,h;
	int flag;
	friend bool operator < (node a, node b)
	{
		return a.f > b.f;
	}
}start,tail;

int pre[M],v[M];

char str[4] = {'u','d','l','r'};
int Can[10] = {1,1,2,6,24,120,720,5040,40320};
const int destination = 46234;

int Cantor(node cur)
{
	int an[10],k = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			an[k++] = cur.mase[i][j];
	int sum = 0;
	for(int i = 0; i < 9; i++)
	{
		int k = 0;
		for(int j = i+1; j < 9; j++)
			if(an[i] > an[j])
				k++;
		sum += k*Can[9-i-1];
	}
	return sum+1;
}

int is_ok(node an)
{
	int a[10],k = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			a[k++] = an.mase[i][j];
	int sum = 0;
	for(int i = 0; i < k; i++)
		if(a[i]!=0)
			for(int j = 0; j < i; j++)
				if(a[j]!=0 && a[j] > a[i])
					sum++;
	if(sum & 1)
		return 0;
	return 1;
}
void print(node cur)
{
	string ans;
	int sum = destination;
	while(pre[sum] != -1)
	{
		switch(v[sum])
		{
			case 0:
				ans += str[0];
				break;
			case 1:
				ans += str[1];
				break;
			case 2:
				ans += str[2];
				break;
			case 3:
				ans += str[3];
				break;
		}
		sum = pre[sum];
	}
	int len = ans.size();
	for(int i = len - 1; i >= 0; i--)
		putchar(ans[i]);
	return;
}

pair<int,int> pii[10];
int getH(node cur)
{
	int r = 0, c = 0;
	for(int i = 1; i <= 9; i++)
	{
		pii[i%9].first = r;
		pii[i%9].second = c;
		c++;
		if(c == 3)
		{
			r++;
			c = 0;
		}
	}
	int sum = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			int u = cur.mase[i][j];
			sum += abs(pii[u].first - i) + abs(pii[u].second - j);
		}	
	}
	return sum;
}

int vis[M];
int an[4][2] = {-1,0,1,0,0,-1,0,1};
void A_star(node cur)
{
	priority_queue<node>Q;
	cur.g = 0;
	cur.h = getH(cur);
	cur.f = cur.g + cur.h;
	cur.flag = - 1;
	Q.push(cur);
	memset(vis,-1,sizeof(vis));
	memset(pre,-1,sizeof(pre));
	memset(v,-1,sizeof(v));
	vis[Cantor(cur)] = 1;
	while(!Q.empty())
	{
		cur = Q.top();
		Q.pop();
		if(Cantor(cur) == destination)
		{
			print(cur);
			return;
		}
		for(int i = 0; i < 4; i++)
		{
			tail.x = cur.x + an[i][0];
			tail.y = cur.y + an[i][1];
			int x = cur.x, y = cur.y;
			for(int u = 0; u < 3; u++)
				for(int v = 0; v < 3; v++)
					tail.mase[u][v] = cur.mase[u][v];
			if(tail.x < 0 || tail.x >= 3 || tail.y < 0 || tail.y >= 3)
				continue;
			swap(tail.mase[tail.x][tail.y],tail.mase[x][y]);
			int sum = Cantor(tail);
			if(vis[sum] == -1)
			{
				if(is_ok(tail) == 0)
					continue;
				vis[sum] = 1;
				tail.g = cur.g + 1;
				tail.h = getH(tail);
				tail.f = tail.g + tail.h;
				if(tail.x == x + 1)
					tail.flag = 1;
				else if(tail.x == x - 1)
					tail.flag = 0;
				else if(tail.y == y - 1)
					tail.flag = 2;
				else if(tail.y == y + 1)
					tail.flag = 3;
				pre[sum] = Cantor(cur);
				v[sum] = i;
				Q.push(tail);
			}
		}
	}
	return;
}

int main(void)
{
	char str[100];
	while(gets(str))
	{
		int r = 0, c = 0;
		int len = strlen(str);
		int ok = 0;
		for(int i = 0; i < len; i++)
		{
				if(str[i] >= '0' && str[i] <= '9')
				{
					start.mase[r][c] = str[i] - '0';
					c++;
					if(c == 3)
					{
						r++;
						c = 0;
					}
				}
				else if(str[i] == 'x')
				{
					start.mase[r][c] = 0;
					start.x = r;
					start.y = c;
					c++;
					if(c == 3)
					{
						r++;
						c = 0;
					}
				}
		  }
		  int sum = Cantor(start);
		  if(sum == destination)
		  {
			  printf("\n");
			  continue;
		  }
		  if(is_ok(start) == 0)
		  {
			  printf("unsolvable\n");
			  continue;
		  }
		  A_star(start);
		  printf("\n");
	}
	return 0;
}

