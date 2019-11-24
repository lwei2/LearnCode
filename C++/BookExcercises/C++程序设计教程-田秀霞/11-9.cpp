/*************************************************************************
    > File Name: 11-9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Complex	
{
	public:
		Complex();
		friend ostream &operator<<(ostream &out, Complex &c);
		friend istream &operator>>(istream &in, Complex &c);
	private:
		double real;
		double imag;
};

Complex::Complex()
{
	real = 0;
	imag = 0;
}

ostream& operator<<(ostream &out, Complex &c)
{
	cout<<c.real<<"+"<<c.imag<<"i";
	return out;
}

istream& operator>>(istream &in, Complex &c)
{
	cout<<"real:";
	in>>c.real;
	cout<<"imag:";
	in>>c.imag;
	return in;
}

int main(void)
{
	Complex m,n;
	cout<<"m and n:"<<endl;
	cin>>m>>n;
	cout<<"m:"<<m<<endl;
	cout<<"n:"<<n<<endl;

	return 0;
}

