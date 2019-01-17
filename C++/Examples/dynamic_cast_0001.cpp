/*************************************************************************
    > File Name: dynamic_cast_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;
class Base
{
	public:
		virtual ~Base()
		{

		}
};
class Derived: public Base
{

};
int main(void)
{
	Base b;
	Derived d;
	Derived *pd;
	pd = reinterpret_cast<Derived*> (&b);
	if(pd == NULL)
		cout<<"unsafe reinterpret_cast"<<endl;
	pd = dynamic_cast<Derived*>(&b);
	if(pd == NULL)
		cout<<"unsafe dynamic_cast first"<<endl;
	pd = dynamic_cast<Derived*>(&d);
	if(pd == NULL)	
		cout<<"unsafe dynamic_cast second"<<endl;

	cout<<endl;
	return 0;
}
