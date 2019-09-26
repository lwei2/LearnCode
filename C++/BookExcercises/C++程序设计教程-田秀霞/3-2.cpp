/*************************************************************************
    > File Name: 3-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;


int main(void)
{
	int a = 1000;
	int b = 123456;
	double c = 123.456789;
	cout<<"a="<<a<<endl;
	cout<<"a="<<dec<<a<<endl;
	cout<<"a="<<oct<<a<<endl;
	cout<<"a="<<hex<<a<<endl;
	cout<<"b="<<dec<<b<<endl;
	cout<<setw(10)<<b<<','<<b<<endl;
	cout<<setfill('*')<<setw(10)<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<setw(4)<<c<<endl;
	cout<<setprecision(10)<<c<<endl;

	return 0;
}
