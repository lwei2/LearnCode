#include<iostream>

using namespace std;

int max(int a,int b)
{
	if(a>b)
	  return a;
	else
	  return b;
}
void line()
{
	cout<<"-----------------"<<endl;
	cout<<endl;
	return ;
}
double area(double r)
{
	double s;
	s = 3.1415926*r*r;
	return s;
}
int main(void)
{
	line();
	cout<<"area="<<area(6.64)<<endl;
	cout<<max(9,5)<<endl;
	return 0;
}
