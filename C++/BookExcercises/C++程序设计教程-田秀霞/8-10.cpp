/*************************************************************************
    > File Name: 8-10.cpp
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
		~Complex();
		Complex(int,int);
		Complex(double,double);
		void show()
		{
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
	private:
		double real,imag;
};
Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}
Complex::Complex(int r, int i)
{
	real = (double)r;
	imag = (double)i;
}
Complex::~Complex()
{
	cout<<"over"<<endl;
}
int main(void)
{
	Complex c;
	c.show();
	Complex c1(3,4);
	c1.show();
	Complex c2(5.45,9.8);
	c2.show();
	return 0;
}
