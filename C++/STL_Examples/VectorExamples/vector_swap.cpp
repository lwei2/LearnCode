/*************************************************************************
    > File Name: vector_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	vector<int>foo(3,100);
	vector<int>bar(5,100);
	foo.swap(bar);
	for(unsigned int i = 0; i < foo.size(); i++)
	  cout<<' '<<foo[i];
	cout<<endl;
	for(unsigned int i = 0; i < bar.size(); i++)
	  cout<<' '<<bar[i];
	cout<<endl;

	return 0;
}
