/*************************************************************************
    > File Name: 12-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "12-1-1.h"
#include "12-1-2.h"

using namespace std;

int main(void)
{
	ns1::i = 10;
	ns1::Data d1(3,4);
	d1.getdata();

	cout<<ns1::fun(5.5,3.3)<<endl;

	cout<<"ns1::i="<<ns1::i<<endl;
	ns1::Inner::f();
	cout<<"ns1::i="<<ns1::i<<endl;
	ns1::Inner::h();
	cout<<"ns1::i="<<ns1::i<<endl;
	ns2::i = 20;
	ns2::Data d2(3,4,5);
	d2.getdata();
	cout<<"ns2::fun(5.5,3.3) = "<<ns2::fun(5.5, 3.3)<<endl;
	cout<<ns2::i<<endl;
	return 0;
}
