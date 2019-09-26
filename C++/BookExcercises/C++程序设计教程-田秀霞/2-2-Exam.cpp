/*************************************************************************
    > File Name: 2-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	double a,b,c,d,s,area;
	cout<<"a,b,c:";
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		s = (a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"area="<<area<<endl;
		if(a == b && b == c)
			cout<<"此三角形是等边三角形!"<<endl;
		else if(a == b || a == c || b == c)
			cout<<"此三角形是等腰三角形!"<<endl;
		else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
			cout<<"此三角形是直角三角形!"<<endl;
		else
			cout<<"此三角形是不规则三角形!"<<endl;
	}
	else
	{
		cout<<"三条边不能组成三角形!"<<endl;
	}
	return 0;
}
