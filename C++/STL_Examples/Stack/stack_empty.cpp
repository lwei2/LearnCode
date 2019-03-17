/*************************************************************************
    > File Name: stack_empty.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	stack<int> mystack;
	int sum(0);
	for(int i = 1; i <= 10; i++)
		mystack.push(i);
	while(!mystack.empty())
	{
		sum += mystack.top();
		mystack.pop();
	}
	cout<<"total:"<<sum<<endl;
	return 0;
}
