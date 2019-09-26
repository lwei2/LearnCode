/*************************************************************************
    > File Name: 8-8.cpp
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
		Complex(int, int);
		Complex(double,double);
		void show();
	private:
		double real, imag;
};
Complex::Complex()
{
	cout<<"construct 1"<<endl;
	real = 0;
	imag = 0;
}
Complex::Complex(double r, double i)
{
	cout<<"construct 2"<<endl;
	real = r;
	imag = i;
}
Complex::Complex(int r,int i)
{
	cout<<"construct 3"<<endl;
	real = (double)r;
	imag = (double)i;
}
void Complex::show()
{
	cout<<"real:"<<real<<endl;
	cout<<"imag:"<<imag<<endl;
}
int main(void)
{
	Complex com;
	com.show();
	Complex com1(3,4);
	com1.show();
	Complex com2(5.45, 9.8);
	com2.show();
	return 0;
}
