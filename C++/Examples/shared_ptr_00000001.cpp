/*************************************************************************
    > File Name: shared_ptr.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 智能指针shared_ptr的使用
 ************************************************************************/

#include <iostream>
#include <memory>

using namespace std;

class Person
{
public:
	Person(int v)
	{
		value = v;
		cout<<"Person()"<<",value="<<value<<endl;
	}
	~Person()
	{
		cout<<"~Person()"<<",value="<<value<<endl;
	}
	int value;
};
int main(void)
{
	shared_ptr<Person> p1(new Person(1));		
	shared_ptr<Person> p2 = make_shared<Person>(2);
	
	p1.reset(new Person(3));
	shared_ptr<Person> p3 = p1;
	p1.reset();
	p3.reset();
	return 0;
}
