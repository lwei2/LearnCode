/*************************************************************************
    > File Name: virtual_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Base
{
	public:
		virtual void f()
		{
			cout<<"Base::f"<<endl;
		}
		virtual void g()
		{
			cout<<"Base::g"<<endl;
		}
		virtual void h()
		{
			cout<<"Base::h"<<endl;
		}		
};



int main(void)
{
	typedef void (*Fun)();
	Base b;
	Fun pFun = NULL;
	cout<<"virtual fun:"<<(int*)&b<<endl;
	cout<<"virtual fun @1:"<<(int*)*(int*)&b<<endl;
	cout<<"virtual fun @2:"<<(int*)*(int*)&b + 1<<endl;
	cout<<"virtual fun @3:"<<(int*)*(int*)&b + 2<<endl;
	for(int i = 0; i < 3; i++)
	{
		pFun = (Fun)*((int*)*(int*)&b + i);
		pFun();
	}
	return 0;
}
