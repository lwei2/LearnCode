/*************************************************************************
    > File Name: test_0027.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main(void)
{
	cout<<"INT_MAX : "<<INT_MAX<<endl;
	cout<<"INT_MIN : "<<INT_MIN<<endl;
	cout<<"UINT32_MAX: "<<UINT32_MAX<<endl;

	cout<<"LONG_LONG_MAX :" <<LONG_LONG_MAX<<endl;
	cout<<"LONG_LONG_MIN :" <<LONG_LONG_MIN<<endl;

	cout<<"UINT64_MAX :"<<UINT64_MAX<<endl;


	cout<<"INT_MAX + 1 : "<<INT_MAX + 1<<endl;
	cout<<"INT_MIN - 1 : "<<INT_MIN - 1<<endl;
	cout<<"INT_MAX + INT_MAX : "<<INT_MAX + INT_MAX <<endl;
	cout<<"INT_MIN + INT_MIN : "<<INT_MIN + INT_MIN <<endl;

	cout<<"-INT_MIN : " << abs(INT_MIN)<<endl;

	return 0;
}
