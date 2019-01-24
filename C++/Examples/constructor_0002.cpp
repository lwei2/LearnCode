/*************************************************************************
    > File Name: constructor_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Base1
{
	public:
		Base1(void)
		{
			cnt++;
			cout<<"Base1 :: constructor("<<cnt<<")"<<endl;
		}
	private:
		static int cnt;
};
int Base1::cnt = 0;

class Base2
{
	public:
		Base2(int m)
		{
			num = m;
			cout<<"Base2 :: constructor("<<num<<")"<<endl;
		}
		~Base2(void)
		{
			cout<<"Base2 :: deconstructor("<<num<<")"<<endl;
		}
	private:
		int num;
};
class Example
{
	public:
		Example(int n)
		{
			num = n;
			cout<<"Example ::constructor("<<num<<")"<<endl;
		}
		~Example(void)
		{
			cout<<"Example ::deconstructor("<<num<<")"<<endl;
		}
	private:
		int num;
};
class Derived :public Base1, public Base2
{
	public:
		Derived(int m, int n):Base2(m),ex(n)
		{
			cnt++;
			cout<<"Derived :: constructor ("<<cnt<<")"<<endl;
		}
		~Derived(void)
		{
			cnt--;
			cout<<"Derived :: deconstructor ("<<cnt+1<<")"<<endl;
		}
	private:
		Example ex;
		static Example stex;
		static int cnt;
};
int Derived::cnt = 0;
Derived ge_a(1,2);
static Derived gs_b(3,4);


int main(void)
{
	cout<<"----------start----------"<<endl;
	Derived d(5,6);
	Derived e(7,8);
	cout<<"----------end ------------"<<endl;
	return 0;
}
