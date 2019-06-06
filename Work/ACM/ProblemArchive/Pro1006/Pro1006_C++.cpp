/*************************************************************************
    > File Name: Pro1006_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>

using namespace std;

#define V_SEC 6.0
#define V_MIN 0.1
#define V_HOU 1.0/120

#define A_SEC s*6
#define A_MIN m*6+s*0.1
#define A_HOU h*30+m*0.5+s/120.0

struct interval
{
	double l;
	double r;
};
double Angle;
int s = 0;
interval solve(double v, double a)
{
	interval p;
	if(v>0)
	{
		p.l = (Angle - a)/v;
		p.r = (360 - Angle -a)/v;
	}
	else
	{
		p.l = (360 - Angle -a)/v;
		p.r = (Angle -a)/v;
	}
	if(p.l < 0)
		p.l = 0;
	if(p.r > 60)
		p.r = 60;
	if(p.l >= p.r)
		p.l = p.r = 0;
	return p;
}
interval jiao(interval a, interval b)
{
	interval p;
	p.l = max(a.l,b.l);
	p.r = min(a.r,b.r);
	if(p.l >= p.r)
		p.l = p.r = 0;
	return p;
}

double happytime(int h, int m)
{
	double v_diff;
	double s_diff;
	interval s0[3][2];
	interval s1;
	v_diff = V_HOU - V_MIN;
	s_diff = A_HOU - A_MIN;
	s0[0][0] = solve(v_diff, a_diff);
	s0[0][1] = solve(-v_diff, -a_diff);
	v_diff = V_HOU - V_SEC;
	s_diff = A_HOU - A_SEC;
	s[1][0] = solve(v_diff, a_diff);
	s[1][1] = solve(-v_diff, -a_diff);
	v_diff = V_MIN -V_SEC;
	s_diff = A_MIN - A_SEC;
	s0[2][0] = solve(v_diff, a_diff);
	s0[2][1] = solve(-v_diff, -a_diff);
	double res = 0;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			for(int k = 0; k < 2; k++)
			{
				s1 = jiao(jiao(s0[0][i],s0[1][j]),s0[2][k]);
				res += s1.r -s1.l;
			}
	return res;
}

int main(void)
{
	int h,m;
	while(scanf("%lf",&Angle))
	{
		if(Angle == -1)
			break;
		double res = 0;
		for(h = 0; h < 12; h++)
			for(m = 0; m < 60; m++)
				res += happytime(h,m);
		printf("%.3lf\n",res*100.0/43200);
	}
}



