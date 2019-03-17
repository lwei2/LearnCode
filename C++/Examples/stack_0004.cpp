/*************************************************************************
    > File Name: stack_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

struct Node
{
	int a,b;
	Node(int x, int y)
	{
		a = x;
		b = y;
	}
};
int main(void)
{
	stack<Node> mystack;
	mystack.emplace(1,2);
	Node p = mystack.top();
	cout<<p.a<<" "<<p.b<<endl;
	stack<Node> mystack1;
	mystack1.swap(mystack);
	cout<<mystack.size()<<" "<<mystack1.size()<<endl;
	return 0;
}
