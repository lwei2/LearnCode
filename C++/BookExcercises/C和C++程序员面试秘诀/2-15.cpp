/*************************************************************************
    > File Name: 2-15.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Base
{
	public:
		Base(int x):a(x)
		{

		}
		void print()
		{
			cout<<"base"<<endl;
		}
	private:
		int a;
};

class Derved : public Base
{
	public:
		Derved(int x):Base(x - 1),b(x)
	{

	}
		void print()
		{
			cout<<"derived"<<endl;
		}
	private:
		int b;
};

class A
{
	public:
		A(int x):a(x)
	{

	}
		virtual void print()
		{
			cout<<"A"<<endl;
		}
	private:
		int a;
};

class B : public A
{
	public:
		B(int x):A(x-1),b(x)
	{

	}
		virtual void print()
		{
			cout<<"B"<<endl;
		}
	private:
		int b;
};

int main(void)
{
	Base obj1(1);
	cout<<"size of Base obj is"<<sizeof(obj1)<<endl;
	Derved obj2(2);
	cout<<"size of derived obj is"<<sizeof(obj2)<<endl;

	A a(1);
	cout<<"size of A obj is"<<sizeof(a)<<endl;
	B b(2);
	cout<<"size of B obj is"<<sizeof(b)<<endl;
	return 0;

}
