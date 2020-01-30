/*************************************************************************
    > File Name: Pro0059_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double crossProduct(double x1, double y1, double x2, double y2)
{
	return x1*y2 - x2*y1;
}

bool process(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y)
{
	if(crossProduct(x2-x1, y2-y1, x3-x1, y3-y1) >= 0)
	{
		double tmpx = x2;
		double tmpy = y2;
		x2 = x3;
		y2 = y3;
		x3 = tmpx;
		y3 = tmpy;
	}
	if(crossProduct(x-x1, y-y1, x2 - x1, y2 - y1) < 0)
		return false;
	if(crossProduct(x-x2, y-y2, x3 - x2, y3 - y2) < 0)
		return false;
	if(crossProduct(x-x3, y-y3, x1 - x3, y1 - y3) < 0)
		return false;
	return true;
}

int main(void)
{
	double x,y;
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3, &x, &y);
	bool res = process(x1,y1, x2,y2, x3, y3, x,y);
	if(res)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;

}
