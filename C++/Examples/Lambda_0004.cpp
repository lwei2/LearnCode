/*************************************************************************
    > File Name: Lambda_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a = 123;
	auto f = [a]()mutable{
		cout<<++a;
	};
	cout<<a<<endl;
	f();
	return 0;
}
