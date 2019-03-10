/*************************************************************************
    > File Name: destructor_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class A
{
	public:
		virtual ~A()
		{
			cout<<"destructor A"<<endl;
		}
};
class B:public A
{
	public:
		~B()
		{
			cout<<"destructor B"<<endl;
		}
};
int main(void)
{
	A *pa;
	pa = new B;
	delete pa;

	return 0;
}
