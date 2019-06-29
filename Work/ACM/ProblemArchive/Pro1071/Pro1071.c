/*************************************************************************
    > File Name: Pro1071.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <math.h>

const double e=1e-3;
double a,h,d;
double fx(double x)
{
	return a*(x-h)*(x-h)+d;
}
double area(double x1, double y1, 
		double x2, double y2,
		double x3, double y3)
{
	double d1,d2,d3;
	double p,s,x4,y4;
	d1=sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
	if(d1<e)
		return 0;
	d2=sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	d3=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	p = (d1+d2+d3)/2;
	s  = sqrt(p*(p-d1)*(p-d2)*(p-d3));
	x4 = (x1+x2)/2;
	y4 = fx(x4);
	s += area(x4,y4,x1,y1,x2,y2);
	x4 = (x1+x3)/2;
	y4 = fx(x4);
	s += area(x4,y4,x1,y1,x3,y3);
	return s;
}
int main(void)
{
	double x1,y1,x2,y2,x3,y3,s;
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		h = x1;
		d = y1;
		a = (y2-d)/(x2-h)/(x2-h);
		printf("%.2lf\n",area(x1,y1,x2,y2,x3,y3));
	}
	return 0;
}
