/*************************************************************************
    > File Name: 8-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Complex
{
	public:
		Complex(double =0.0, double = 0.0);
		void show()
		{
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
	private:
		double real;
		double imag;
};
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}
int main(void)
{
	Complex c;
	c.show();
	Complex c1(3);
	c1.show();
	Complex c2(1,2);
	c2.show();
	return 0;
}
