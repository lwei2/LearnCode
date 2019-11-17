/*************************************************************************
    > File Name: 12-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "12-1-1.h"
using namespace std;

using ns1::Data;
using namespace ns1::Inner;



int main(void)
{
	ns1::i = 10;
	Data d1(3,4);
	d1.getdata();
	cout<<"ns1::fun(5.5,3.3) = "<<ns1::fun(5.5, 3.3)<<endl;
	cout<<"ns1::i = "<<ns1::i<<endl;
	f();
	cout<<"ns1::i="<<ns1::i<<endl;
	h();
	cout<<"ns1::i="<<ns1::i<<endl;

	return 0;
}
