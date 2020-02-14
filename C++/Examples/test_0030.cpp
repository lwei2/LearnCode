/*************************************************************************
    > File Name: test_0030.cpp
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
		void func()
		{
			cout<<"Base::func()"<<endl;
		}
		virtual void func2(int i)
		{
			cout<<"Base::func2(int)"<<endl;
		}
};

class Dervied : public Base
{
	public:
		void func(int i)
		{
			cout<<"Dervied::func()"<<endl;
		}
		void func2(int i)
		{
			cout<<"Dervied::func2(int)"<<endl;
		}
};

int main(void)
{

	Base *pb = new Dervied();
	pb->func(1);
	pb->func();
	pb->func2(1);
	delete pb;


	Dervied *pd = new Dervied();
	pd->func(1);
	pd->func2(1);
	delete pd;
	return 0;
}
