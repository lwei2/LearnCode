/*************************************************************************
    > File Name: auto_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <memory>
using namespace std;

int main(void)
{
	int *p = new int(10);
	cout<<"the address of p:"<<p<<endl;
	auto_ptr<int> aptr(p);
	cout<<"the address of aptr:"<<&aptr<<endl;
	cout<<"point to -->:"<<aptr.get()<<endl;
	return 0;
}
