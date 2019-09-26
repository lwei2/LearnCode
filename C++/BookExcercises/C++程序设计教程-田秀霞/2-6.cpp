/*************************************************************************
    > File Name: 2-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a = 8,b;
	a += a*=a+a;
	cout<<"a="<<a<<endl;
	a = 8;
	a+=a*=a+=a;
	cout<<"a="<<a<<endl;
	cout<<"b="<<(b=a)<<endl;
	return 0;
}
