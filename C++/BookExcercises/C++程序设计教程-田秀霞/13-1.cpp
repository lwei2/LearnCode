/*************************************************************************
    > File Name: 13-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

template<typename Type>
void swap(Type &a, Type &b)
{
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	int a = 4, b = 6;
	double x = 4.5, y = 7.8;
	char ch1 = 'A', ch2 = 'Y';
	swap(a, b);
	swap(x,y);
	swap(ch1, ch2);
	std::cout<<"a="<<a<<",b="<<b<<std::endl;
	std::cout<<"x="<<x<<",y="<<y<<std::endl;
	std::cout<<"ch1="<<ch1<<",ch2="<<ch2<<std::endl;
	return 0;
}
