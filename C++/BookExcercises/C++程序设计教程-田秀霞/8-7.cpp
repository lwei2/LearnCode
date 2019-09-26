/*************************************************************************
    > File Name: 8-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Complex
{
	public:
		Complex();
		Complex(double r, double i);
		void show();
	private:
		double real, imag;
};
Complex::Complex():real(0),imag(0)
{
	cout<<"construct 1"<<endl;
}
Complex::Complex(double r, double i):real(r),imag(i)
{
	cout<<"construct 2"<<endl;
}
void Complex::show()
{
	cout<<"real:"<<real<<","<<"imag:"<<imag<<endl;
}
int main(void)
{
	Complex c;
	c.show();
	Complex c1(1,2);
	c1.show();
	return 0;
}
