/*************************************************************************
    > File Name: 11-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int a;
	cout<<"Enter the a:";
	cin>>a;
	cout<<"HEX:"<<hex<<a<<endl;
	cout<<"OBJ:"<<setbase(8)<<a<<endl;
	cout<<setfill('*')<<setw(10)<<dec<<a<<endl;

	cout<<setiosflags(ios::left)<<setw(10)<<a<<endl;

	double d;
	cout<<"Enter the d:";
	cin>>d;
	cout<<d<<endl;
	cout<<setprecision(9);
	cout<<d<<endl;
	cout<<setiosflags(ios::scientific)<<d<<endl;
	cout<<resetiosflags(ios::scientific);

	cout<<d<<endl;
	char *str = "Welcome to C++";
	cout<<setw(20)<<str<<endl;

	return 0;
}
