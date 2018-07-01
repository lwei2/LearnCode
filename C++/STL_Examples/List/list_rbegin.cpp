/*************************************************************************
    > File Name: list_rbegin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int>mylist;
	for(int i = 1; i <= 5; ++i)
	  mylist.push_back(i);
	list<int>::reverse_iterator it;
	for(it=mylist.rbegin();it!=mylist.rend();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
