/*************************************************************************
    > File Name: stack_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stack>
#include<vector>
#include<deque>
using namespace std;

int main(void)
{
	stack<int> first;
	deque<int> mydeque(3,100);
	stack<int> second(mydeque);
	stack<int, vector<int> > third;
	vector<int> myvector(2,200);
	stack<int,vector<int> > fourth(myvector);

	cout<<"size of first:"<<first.size()<<endl;
	cout<<"size of second:"<<second.size()<<endl;
	cout<<"size of third:"<<third.size()<<endl;
	cout<<"size of fourth:"<<fourth.size()<<endl;

	return 0;
}

