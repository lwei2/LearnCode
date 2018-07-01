/*************************************************************************
    > File Name: list_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int>first(3,100);
	list<int>second(5,200);
	first.swap(second);
	for(list<int>::iterator it = first.begin();it!=first.end();++it)
	  cout<<' '<<*it;
	cout<<endl;
	for(list<int>::iterator it = second.begin(); it!=second.end();++it)
	  cout<<' '<<*it;
	cout<<endl;
	
	return 0;
}
