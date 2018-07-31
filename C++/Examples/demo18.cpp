#include<iostream>

using namespace std;

const double PI = 3.1415926;

int main(int argc,char *argv[])
{
	int r;
	float area;
	for(r = 1; r<=10; r++)
	{
		area = PI * r * r;
		if(area < 60)
		  continue;
		cout<<"R="<<r<<","<<"the area ="<<area<<endl;
	}
	return 0;
}
