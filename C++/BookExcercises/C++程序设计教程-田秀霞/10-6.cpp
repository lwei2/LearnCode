/*************************************************************************
    > File Name: 10-6.cpp
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
		friend Complex operator+(Complex &x, Complex &y);
		void print();
	private:
		double real;
		double imag;
};

Complex operator+(Complex &x, Complex &y)
{
	Complex t;
	t.real = x.real + y.real;
	t.imag = x.imag + y.imag;
	return t;
}
void Complex::print()
{
	cout<<'('<<real<<','<<imag<<')'<<endl;
}

int main(void)
{
	Complex a(3.0,4.0),b(10.5,20.5),c,d;
	c = a + b;
	c.print();
	d = operator+(a,b);
	d.print();
	return 0;
}
