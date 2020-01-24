/*************************************************************************
    > File Name: 2-14.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class A
{
	public:
		int i;
};

class B
{
	public:
		char ch;
};

class C
{
	public:
		int i;
		short j;
};

class D
{
	public:
		int i;
		short j;
		char ch;
};

class E
{
	public:
		int i;
		int ii;
		short j;
		char ch;
		char chr;
};

class F
{
	public:
		int i;
		int ii;
		int iii;
		short j;
		char ch;
		char chr;

};


int main(void)
{
	cout<<sizeof(int)<<endl;
	cout<<sizeof(short)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<endl;
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
	cout<<sizeof(D)<<endl;
	cout<<sizeof(E)<<endl;
	cout<<sizeof(F)<<endl;
	return 0;
}
