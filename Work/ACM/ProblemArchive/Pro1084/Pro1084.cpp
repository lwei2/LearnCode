/*************************************************************************
    > File Name: Pro1084.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

struct Point
{
	int p,s,t;
	int pos;
};
Point p[105];
int n;
int sum[6], tol[6];

bool cmp1(const Point &lhs, const Point &rhs)
{
	if(lhs.p == rhs.p)
		return lhs.t < rhs.t;
	else
		return lhs.p < rhs.p;
}
bool cmp2(const Point &lhs, const Point &rhs)
{
	return lhs.pos < rhs.pos;
}

int main(void)
{
	while(scanf("%d",&n)!=EOF && n >= 0)
	{
		int co,h,m,s;
		memset(sum, 0,sizeof(sum));
		memset(tol, 0, sizeof(tol));
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d:%d:%d",&co, &h, &m, &s);
			p[i].pos = i;
			sum[co]++;
			p[i].p = co;
			p[i].t = h*3600 + m*60 + s;
		}
		for(int i = 1; i <= 5; i++)
		{
			tol[i] = tol[i-1] + sum[i-1];
		}
		sort(p,p+n,cmp1);
		for(int i = 0; i < n; i++)
		{
			p[i].s = p[i].p*10 + 50;
			if(p[i].s == 100 || p[i].s == 50)
				continue;
			if(i - tol[p[i].p] < sum[p[i].p]/2)
				p[i].s += 5;
		}
		sort(p,p+n,cmp2);
		for(int i = 0; i < n; i++)
			printf("%d\n",p[i].s);
		printf("\n");
	}
	return 0;
}
