/*************************************************************************
    > File Name: setprecision_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double amount = 22.0/7;
	cout<<"amount:"<<amount<<endl;
	cout<<"#1:"<<setprecision(1)<<amount<<endl;
	cout<<"#2:"<<setprecision(2)<<amount<<endl;
	cout<<"#3:"<<setprecision(3)<<amount<<endl;
	cout<<"#4:"<<setprecision(4)<<amount<<endl;


	cout<<setiosflags(ios::fixed);
	cout<<setprecision(8)<<amount<<endl;
	cout<<setiosflags(ios::scientific)<<amount<<endl;
	cout<<setprecision(6);
	return 0;
}

