/*************************************************************************
    > File Name: stack_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;


int main(void)
{
	stack<double>s;
	for(int i = 0; i < 10; i++)
		s.push(i);
	cout<<"before size:"<<s.size()<<endl;
	while(!s.empty())
	{
		printf("%lf\n",s.top());
		s.pop();
	}
	cout<<"after size:"<<s.size()<<endl;
	return 0;
}
