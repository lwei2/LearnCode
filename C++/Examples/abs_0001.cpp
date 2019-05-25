/*************************************************************************
    > File Name: abs_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;

int main(void)
{
	cout<<"INT_MAX:"<<INT_MAX<<endl;
	cout<<"INT_MIN:"<<INT_MIN<<endl;
	cout<<"abs(INT_MAX):"<<abs(INT_MAX)<<endl;
	cout<<"abs(INT_MIN):"<<abs(INT_MIN)<<endl;
	cout<<"LONG_LONG_MAX:"<<LONG_LONG_MAX<<endl;
	cout<<"LONG_LONG_MIN:"<<LONG_LONG_MIN<<endl;


	if(abs(INT_MIN) == INT_MIN)
		cout<<"abs(INT_MIN) == INT_MIN"<<endl;
	else
		cout<<"abs(INT_MIN) != INT_MIN"<<endl;
	return 0;
}
