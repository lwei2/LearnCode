/*************************************************************************
    > File Name: template_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template <class T1, class T2>
class A
{
	T1 v1;
	T2 v2;
};

template <class T1, class T2>
class B : public A<T2,T1>
{
	T1 v3;
	T2 v4;
};

template <class T>
class C: public B<T,T>
{
	T v5;
};

int main(void)
{
	B<int, double>obj1;
	C<int> obj2;
	return 0;
}
