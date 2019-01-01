#include<iostream>

using namespace std;
#define PI 3.1415926

int main(void)
{
	double radius,area;
#ifdef PI
	cout<<"PI has been define"<<endl;
	cout<<"R=";
	cin>>radius;
	area = PI *radius*radius;
	cout<<"area = "<<area<<endl;
#else
	cout<<"PI has't been define"<<endl;
#endif
	return 0;
}	
