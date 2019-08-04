/*************************************************************************
    > File Name: Pro1109.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <ctime>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps=1e-18;
int X,Y,M;

struct point
{
	double x,y;
	int OK()
	{
		if(x > -eps && x < X+eps && y > -eps && y < Y+eps)
			return 1;
		return 0;
	}
}p[1005],r[50];

double dis(point a, point b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(b.y - a.y,2));
}
double ans[55];

int main(void)
{
	int T;
	scanf("%d",&T);
	srand(time(NULL));
	while(T--)
	{
		scanf("%d%d%d",&X,&Y,&M);
		for(int i = 0; i < M; i++)
			scanf("%lf%lf",&p[i].x, &p[i].y);
		for(int i = 0; i < 50; i++)
		{
			r[i].x = (rand()%1000 + 1)/1000.0*X;
			r[i].y = (rand()%1000 + 1)/1000.0*Y;
			ans[i] = 1e18;
			for(int j = 0; j < M; j++)
				ans[i] = min(ans[i], dis(p[j],r[i]));
		}
		double tmp = max(X,Y);
		while(tmp > 0.01)
		{
			for(int i = 0; i < 50; i++)
			{
				point now = r[i],next;
				for(int j = 0; j < 50; j++)
				{
					double rad = (rand()%1000 + 1)/1000.0*2*3.1415926535;
					next.x = now.x + cos(rad)*tmp;
					next.y = now.y + sin(rad)*tmp;
					if(!next.OK())
						continue;
					double m = 1e18;
					for(int k = 0; k < M; k++)
						m = min(m,dis(p[k],next));
					if(m > ans[i])
					{
						ans[i] = m;
						r[i] = next;
					}
				}
			}
			tmp *= 0.8;
		}
		double res = 0.0;
		int idx;
		for(int i = 0; i < 50; i++)
		{
			if(ans[i] > res)
			{
				res = ans[i];
				idx = i;
			}
		}
		printf("The safest point is (%.1lf, %.1lf).\n",r[idx].x, r[idx].y);
	}
	return 0;
}
