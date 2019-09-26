/*************************************************************************
    > File Name: 8-5.cpp
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
		Complex(double,double);
		void show()
		{
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
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

int main(void)
{
	Complex c;
	c.show();
	Complex c1(3,4);
	c1.show();
	Complex c2(1,2);
	c2.show();
	return 0;

}
