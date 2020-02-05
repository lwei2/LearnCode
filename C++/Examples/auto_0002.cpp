/*************************************************************************
    > File Name: auto_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <memory>
using namespace std;

void f(auto_ptr<int> Aptr)
{
	cout<<*Aptr<<endl;
}
int main(void)
{
	auto_ptr<int> Aptr(new int(10));
	f(Aptr);
	cout<<*Aptr<<endl;
	return 0;
}
