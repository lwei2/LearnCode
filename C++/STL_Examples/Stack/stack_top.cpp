/*************************************************************************
    > File Name: stack_top.cpp
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
	mystack.push(10);
	mystack.push(20);

	mystack.top() -= 5;
	cout<<"the top elements is :"<<mystack.top()<<endl;


	return 0;
}

