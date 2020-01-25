/*************************************************************************
    > File Name: 2-16.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class A
{

};

class B
{
	
};

class C: public A, public B
{

};

class D : virtual public A
{

};

class E : virtual public A, virtual public B
{

};

class F
{
	public:
		int a;
		static int b;
};

int F::b = 10;


int main(void)
{
	cout<<"sizeof(A)="<<sizeof(A)<<endl;
	cout<<"sizeof(B)="<<sizeof(B)<<endl;
	cout<<"sizeof(C)="<<sizeof(C)<<endl;
	cout<<"sizeof(D)="<<sizeof(D)<<endl;
	cout<<"sizeof(E)="<<sizeof(E)<<endl;
	cout<<"sizeof(F)="<<sizeof(F)<<endl;

	return 0;
}
