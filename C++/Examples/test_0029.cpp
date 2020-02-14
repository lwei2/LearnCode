/*************************************************************************
    > File Name: test_0029.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Base
{
	public:
		void func(int i)
		{
			cout<<"Base::func(int)"<<endl;
		}
		virtual void func2(int i)
		{
			cout<<"Base::func2(int)"<<endl;
		}
};

class Derived : public Base
{
	public:
		void func()
		{
			cout<<"Derived::func()"<<endl;
		}
		void func2()
		{
			cout<<"Derived::func2()"<<endl;
		}
};

int main(void)
{
	Base *pb = new Derived();
	pb->func(1);
	pb->func2(1);
	delete pb;

	Derived *pd = new Derived();
	pd->func();
	pd->func2();
	delete pd;
	return 0;
}
