/*************************************************************************
    > File Name: auto_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <memory>

using namespace std;

int main(void)
{
	auto_ptr<string> aptr(new string("name"));
	aptr.reset(new string("sex"));
	cout<<*(aptr.get())<<endl;
	cout<<*aptr<<endl;
	return 0;
}
