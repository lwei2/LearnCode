/*************************************************************************
    > File Name: vector_reserve.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int>::size_type  sz;
	vector<int> foo;
	sz = foo.capacity();
	for(int i = 0 ;i <100; ++i)
	{  	foo.push_back(i);
		if(sz!=foo.capacity())
		{
			sz=foo.capacity();
			cout<<"capacity changed:"<<sz<<endl;
		}
	}
	vector<int>bar;
	sz=bar.capacity();
	bar.reserve(100);
	for(int i=0;i<100;i++)
	{
		bar.push_back(i);
		if(sz!=bar.capacity())
		{
			sz=bar.capacity();
			cout<<"capacity changed:"<<sz<<endl;
		}
	}
	return 0;
}
