/*************************************************************************
    > File Name: virtual_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

class Base 
{
	public:
		virtual void f()
		{
			cout<<"Base::f()"<<endl;
		}
		virtual void g()
		{
			cout<<"Base::g()"<<endl;
		}
		virtual void h()
		{
			cout<<"Base::h()"<<endl;
		}
};

class Derive: public Base 
{
	public:
		void g()
		{
			cout<<"Derive::g()"<<endl;
		}
};

int main(void)
{
	cout<<"1 Base size:"<<sizeof(Base)<<endl;
	typedef void  (*Func)(void);

	Base b;
	Base *p = new Derive();
	long *ptr = (long *)p;
	long *vptr = (long *)*ptr;
	Func f = (Func)vptr[0];
	Func g = (Func)vptr[1];
	Func h = (Func)vptr[2];

	f();
	g();
	h();

	return 0;
}
