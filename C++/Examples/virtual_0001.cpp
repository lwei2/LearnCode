/*************************************************************************
    > File Name: virtual_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Base
{
	public:
		virtual int foo(int x)
		{
			return x*10;
		}
		int foo(char x[14])
		{
			return sizeof(x)+10;
		}
};
class Derived:public Base
{
	int foo(int x)
	{
		return x*20;
	}
	virtual int foo(char x[10])
	{
		return sizeof(x)+20;
	}
};

int main(void)
{
	Derived stDerived;
	Base *pstBase = &stDerived;
	char x[10];
	cout<<pstBase->foo(100)+pstBase->foo(x)<<endl;
	return 0;
}






