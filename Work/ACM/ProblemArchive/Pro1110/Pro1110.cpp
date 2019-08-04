/*************************************************************************
    > File Name: Pro1110.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
//#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>


using namespace std;
typedef long long LL;
#define max_v 25

bool f(double A, double B, double a, double b)
{
	double d = sqrt(a*a+b*b);
	double a1 = asin(A/d);
	double a2 = asin(b/d)*2.0;
	double h = cos(a1-a2)*d;
	if(B > h)
		return true;
	else
		return false;
}


int main(void)
{
	int t;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		double A,B,a,b;
		scanf("%lf %lf %lf %lf",&A,&B,&a,&b);
		if(A < B)
			swap(A,B);
		if(a < b)
			swap(a,b);
		if(A > a && B > b)
			flag = true;
		else if(A*B <= a*b || b >= B)
			flag = false;
		else
			flag = f(A,B,a,b);
		if(flag)
			cout<<"Escape is possible."<<endl;
		else
			cout<<"Box cannot be dropped."<<endl;
	}
	return 0;
}
