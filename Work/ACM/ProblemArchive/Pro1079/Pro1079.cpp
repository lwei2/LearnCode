/*************************************************************************
    > File Name: Pro1079.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstdio>

using namespace std;

int f[2100][13][33];
int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isleap(int y)
{
	if(y%400 == 0 || (y%100!=0 && y%4 == 0))
		return true;
	return false;
}

bool ok(int y, int m, int d)
{
	if(isleap(y) && m == 2)
	{
		if(d <= 29)
			return true;
		else
			return false;
	}
	if(d <= days[m])
		return true;
	else
		return false;
}

int solve(int y, int m, int d)
{
	if(f[y][m][d] != -1)
		return f[y][m][d];
	if(y == 2001 && m == 11 && d == 4)
		return f[y][m][d] = 0;
	if(y > 2001)
		f[y][m][d] = 1;
	else if(y == 2001 && m > 11)
		return f[y][m][d] = 1;
	else if(y == 2001 && m == 11 && d > 4) 
		return f[y][m][d] = 1;

	int ty, tm, td;
	ty = y;
	tm = m;
	td = d;
	if(isleap(y) && m == 2)
	{
		td++;
		if(td == 30)
		{
			tm = 3;
			td = 1;			
		}
	}
	else
	{
		td++;
		if(td > days[tm])
		{
			td = 1;
			tm ++;
			if(tm > 12)
				ty++,tm = 1;
		}
	}
	if(solve(ty,tm,td) == 0)
		return f[y][m][d] = 1;
	ty = y;
	tm = m;
	td = d;
	tm++;
	if(tm > 12)
		ty++,tm = 1;
	if(ok(ty,tm,td) && solve(ty,tm,td) == 0)
		return f[y][m][d] = 1;
	return f[y][m][d] = 0;
}

int main(void)
{
	memset(f,-1,sizeof(f));
	int y,m,d;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&y,&m,&d);
		if(solve(y,m,d))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
