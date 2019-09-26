/*************************************************************************
    > File Name: 8-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Complex
{
	public:
		Complex()
		{
			cout<<"construct 1"<<endl;
			real = 0;
			imag = 0;
		}
		void show()
		{
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
	private:
		double real, imag;		
};
int main(void)
{
	Complex c;
	c.show();
	return 0;
}
