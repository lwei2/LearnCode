/*************************************************************************
    > File Name: stack_emplace.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	std::stack<string> mystack;
	mystack.emplace("First sentence");
	mystack.emplace("Second sentence");
	std::cout<<"mystack contains:"<<endl;
	while(!mystack.empty())
	{
		std::cout<<mystack.top()<<endl;
		mystack.pop();
	}
	return 0;
}
