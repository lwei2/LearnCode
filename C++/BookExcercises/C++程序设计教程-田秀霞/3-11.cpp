/*************************************************************************
    > File Name: 3-11.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

const double PI = 3.1415926;

using namespace std;

int main(void)
{
	int r;
	float area;
	for(r = 1; r <= 10; r++)
	{
		area = PI*r*r;
		if(area < 60)
			continue;
		cout<<"r:"<<r<<",area:"<<area<<endl;
	}
	return 0;
}
