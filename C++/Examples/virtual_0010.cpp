/*************************************************************************
    > File Name: virtual_0010.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Base
{
	public:
		Base():x(0)
		{

		}
		~Base()
		{

		}
		virtual void show()
		{
			cout<<"Base show"<<endl;
		}
		virtual void print()
		{
			cout<<"Base print"<<endl;
		}
		void fun()
		{
			cout<<"Base fun"<<endl;
		}
	private:
		int x;
};

class Dervice : public Base
{
	public:
		Dervice():y(0)
		{

		}
		~Dervice()
		{

		}
		void show()
		{
			cout<<"Dervice show"<<endl;
		}
		void fun()
		{
			cout<<"Dervice fun"<<endl;
		}
		virtual void list()
		{
			cout<<"Dervice list"<<endl;
		}
	private:
		int y;
};

int main(void)
{
	Dervice d;
	d.fun();
	Base *pb = &d;
	pb->show();
	pb->fun();
	Base &fb = d;
	fb.show();
	fb.fun();
	return 0;
}
