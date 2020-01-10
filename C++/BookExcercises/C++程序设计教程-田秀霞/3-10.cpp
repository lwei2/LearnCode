/*************************************************************************
    > File Name: 3-10.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

const double PI = 3.1415926;

int main(void)
{
	int r;
	float area;
	for(r = 1; r <= 10; r++)
	{
		area = PI*r*r;
		if(area > 100.0)
			break;
		cout<<"r:"<<r<<",area:"<<area<<endl;
	}
	return 0;
}
