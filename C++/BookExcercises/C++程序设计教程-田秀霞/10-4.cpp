/*************************************************************************
    > File Name: 10-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Complex
{
	private:
		double real;
		double imag;
	public:
		Complex(double x = 0.0, double y = 0.0)
		{
			real = x;
			imag = y;
		}
		Complex operator+(Complex &c);
		void print();
};
Complex Complex::operator+(Complex &c)
{
	Complex t;
	t.real = real + c.real;
	t.imag = imag + c.imag;
	return t;
}
void Complex::print()
{
	cout<<'('<<real<<','<<imag<<')'<<endl;
}
int main(void)
{
	Complex a(3.0,4.0);
	Complex b(10.5, 20.5);
	Complex c;
	c = a + b;
	c.print();
	return 0;
}
