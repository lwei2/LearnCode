/*************************************************************************
    > File Name: test_0028.cpp
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
			cout<<"Base::fun(int)"<<endl;
		}
};

class Derived : public Base
{

};

int main(void)
{
	Base *pb = new Derived();
	pb->func(1);
	delete pb;

	Derived *pd = new Derived();
	pd->func(1);
	delete pd;

	return 0;
}
