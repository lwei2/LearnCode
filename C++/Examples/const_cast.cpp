/*************************************************************************
    > File Name: const_cast.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
  	const int a = 10;
	const int *p = &a;
	int *q;
	q = const_cast<int*>(p);
	*q = 20;
	cout<<a<<" "<<*p<<" "<<*q<<endl;
	cout<<&a<<" "<<p<<" "<<q<<endl;

  	return 0;
}
