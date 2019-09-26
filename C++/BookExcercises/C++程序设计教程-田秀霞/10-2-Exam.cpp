/*************************************************************************
    > File Name: 10-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Complex
{
	public:
		Complex()
		{
			real = 0;
			image = 0;
		}
		~Complex()
		{

		}
		Complex(double r, double i)
		{
			real = r;
			image = i;
		}
		Complex operator-(Complex &c2);
		Complex operator-(int &i);
		Complex operator--();
		Complex operator--(int);
		void display();
	private:
		double real;
		double image;
};

void Complex::display()
{
	cout<<"("<<real<<","<<image<<"i)"<<endl;
}

Complex Complex::operator-(Complex &c)
{
	return Complex(real - c.real,Figure-0000-0c.image);
}
Complex Complex::operator-(int &i)
{
	return Complex(i - c.real, c.image);
}
Complex Complex::operator--()
{
	--real;
	--image;
	return *this;
}
Complex Complex::operator--(int)
{
	Complex tmp(*this);
	--real;
	--image;
	return tmp;
}

int main(void)
{
	Complex c1(3,4),c2(5,-10),c3,c4;
	int i = 5;
	c3 = c1 - c2;
	cout<<"c3=c1 - c2=";
	c3.display();
	c3 = i - c1;
	cout<<"c3=i - c1=";
	c3.display();
	--c3;
	cout<<"--c3=";
	c3.display();
	cout<<"c4 = ";
	c4.display();

	return 0;
}
