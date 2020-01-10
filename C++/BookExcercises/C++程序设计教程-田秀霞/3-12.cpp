/*************************************************************************
    > File Name: 3-12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#define PI 3.141592653
using namespace std;

int main(void)
{
	double radius, area;
#ifdef PI
	{
		cout<<"PI define"<<endl;
		cout<<"radius:";
		cin>>radius;
		area = PI*radius*radius;
		cout<<"area:"<<area<<endl;
	}
#else
	{
		cout<<"PI not define"<<endl;
	}
#endif
}
