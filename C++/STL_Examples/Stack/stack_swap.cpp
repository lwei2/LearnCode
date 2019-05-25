/*************************************************************************
    > File Name: stack_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	std::stack<int> foo, bar;
	foo.push(10);
	foo.push(20);
	foo.push(30);
	bar.push(111);
	bar.push(222);
	foo.swap(bar);
	std::cout<<"size of foo: "<<foo.size()<<endl;
	std::cout<<"size of bar: "<<bar.size()<<endl;

	return 0;
}
