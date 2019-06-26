/*************************************************************************
    > File Name: Pro1069.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 200;

struct Block
{
	int x,y;
	int high;
	int dp;
}b[MAXN];

bool cmp(Block a, Block b)
{
	if(a.x < b.x)
		return 1;
	else if(a.x == b.x && a.y < b.y)
		return 1;
	else
		return 0;
}
int main(void)
{
	int n;
	int i,j,k;
	int x,y,z;
	int iCase = 0;
	while(scanf("%d",&n),n)
	{
		iCase++;
		k = 0;
		while(n--)
		{
			scanf("%d%d%d",&x,&y,&z);
			if(x == y)
			{
				if(y == z)
				{
					b[k].x = x;
					b[k].y = y;
					b[k].high = z;
					b[k].dp = b[k].high;
					k++;
				}
				else
				{
					b[k].x = x; b[k].y = y; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = z; b[k].y = y; b[k].high = x; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = z; b[k].high = x; b[k].dp = b[k].high; k++;
				}
			}
			else
			{
				if(y == z)
				{
					b[k].x = x; b[k].y = y; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = x; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = z; b[k].high = x; b[k].dp = b[k].high; k++;
				}
				else if(x == z)
				{
					b[k].x = x; b[k].y = y; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = x; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = x; b[k].y = z; b[k].high = y; b[k].dp = b[k].high; k++;
				}
				else
				{
					b[k].x = x; b[k].y = y; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = x; b[k].high = z; b[k].dp = b[k].high; k++;
					b[k].x = x; b[k].y = z; b[k].high = y; b[k].dp = b[k].high; k++;
					b[k].x = z; b[k].y = x; b[k].high = y; b[k].dp = b[k].high; k++;
					b[k].x = y; b[k].y = z; b[k].high = x; b[k].dp = b[k].high; k++;
					b[k].x = z; b[k].y = y; b[k].high = x; b[k].dp = b[k].high; k++;
				}
			}
		}
		sort(b,b+k,cmp);
		int maxh = 0;
		for(i = 1; i < k; i++)
		{
			for(j = 0; j < i; j++)
				if(b[i].x > b[j].x && b[i].y > b[j].y)
					b[i].dp = max(b[j].dp + b[i].high, b[i].dp);
			if(b[i].dp > maxh)
				maxh = b[i].dp;
		}
		printf("Case %d: maximum height = %d\n", iCase, maxh);
	}
	return 0;
}
