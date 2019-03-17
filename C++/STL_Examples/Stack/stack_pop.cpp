/*************************************************************************
    > File Name: stack_pop.cpp
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
	for(int i = 0; i < 5; i++)
		mystack.push(i);
	cout<<"Poping out elements:";
	while(!mystack.empty())
	{
		cout<<' '<<mystack.top();
		mystack.pop();
	}
	cout<<endl;
	return 0;
}
