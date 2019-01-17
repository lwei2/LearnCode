/*************************************************************************
    > File Name: shared_ptr_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<memory>
using namespace std;

class A
{
	public:
		int i;
		A(int n):i(n)
		{
		
		}
		~A()
		{
			cout<<i<<" "<<"destruction"<<endl;
		}
};
int main(void)
{
	shared_ptr<A> ptr1(new A(2));
	shared_ptr<A> ptr2(ptr1);
	shared_ptr<A> ptr3;
	ptr3 = ptr2;
	cout<<ptr1->i<<","<<ptr2->i<<","<<ptr3->i<<endl;
	A*p = ptr3.get();
	cout<<p->i<<endl;
	ptr1.reset(new A(3));
	ptr2.reset(new A(4));
	cout<<ptr1->i<<endl;
	ptr3.reset(new A(5));
		
	cout<<endl;
	return 0;
}
