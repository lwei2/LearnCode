/*************************************************************************
    > File Name: virtual_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class base_class
{
	public:
		base_class()
		{

		}
		virtual ~base_class()
		{

		}
		int normal_func()
		{
			cout<<"This is base_class's normal_func()"<<endl;
			return 0;
		}
		virtual int virtual_func() = 0;
		/*
		{
			cout<<"This is base_class's virtual_func()"<<endl;
			return 0;
		}*/
};


class drived_class1: public base_class
{
	public :
		drived_class1()
		{

		}
		virtual ~drived_class1()
		{

		}
		int normal_func()
		{
			cout<<"This is drived_class1's normal_func()"<<endl;
			return 0;
		}
		virtual int virtual_func()
		{
			cout<<"This is drived_class1's virtual_func()"<<endl;
			return 0;
		}
};


class drived_class2: public base_class
{
	public :
		drived_class2()
		{

		}
		virtual ~drived_class2()
		{

		}
		int normal_func()
		{
			cout<<"This is drived_class2's normal_func()"<<endl;
			return 0;
		}
		virtual int virtual_func()
		{
			cout<<"This is drived_class2's virtual_func()"<<endl;
			return 0;
		}
};



int main(void)
{
	base_class *pbc = NULL;
//	base_class bc;
	drived_class1 dc1;
	drived_class2 dc2;

/*	pbc = &bc;
	pbc->normal_func();
	pbc->virtual_func();*/
	
	pbc = &dc1;
	pbc->normal_func();
	pbc->virtual_func();


	pbc = &dc2;
	pbc->normal_func();
	pbc->virtual_func();


	return 0;
}
