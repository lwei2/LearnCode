/*************************************************************************
    > File Name: stack_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	std::stack<int> myints;
	std::cout<<"0. size: "<<myints.size()<<endl;
	for(int i = 0; i < 5; i++)
		myints.push(i);
	std::cout<<"1. size: "<<myints.size()<<endl;
	myints.pop();
	std::cout<<"2. size: "<<myints.size()<<endl;

	return 0;
}

