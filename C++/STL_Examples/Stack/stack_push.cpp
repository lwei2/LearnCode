/*************************************************************************
    > File Name: stack_push.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>

using namespace std;


int main(void)
{
	std::stack<int> mystack;
	for(int i = 0; i < 5; i++)
		mystack.push(i);
	std::cout<<"Poping out elements:";
	while(!mystack.empty())
	{
		std::cout<<" "<<mystack.top();
		mystack.pop();
	}
	std::cout<<'\n';
	return 0;
}
