/*************************************************************************
    > File Name: auto_0005.cpp
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
	auto_ptr<string> aptr1(aptr.get());
	auto_ptr<string> aptr2(aptr.release());
	return 0;
}
