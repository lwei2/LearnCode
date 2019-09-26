/*************************************************************************
    > File Name: 10-10.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Complex
{
	public:
		Complex(double x = 0.0, double y = 0.0)
		{
			real = x;
			imag = y;
		}
		operator double()
		{
			return real;
		}
	private:
		double real;
		double imag;
};
int main(void)
{
	Complex a(3.0,4.0);
	double d;
	d = 1.5+a;
	cout<<d<<endl;
	return 0;
}
