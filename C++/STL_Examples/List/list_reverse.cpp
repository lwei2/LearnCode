/*************************************************************************
    > File Name: list_reverse.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int> mylist;
	for(int i = 1; i < 10; ++i)
	  mylist.push_back(i);
	mylist.reverse();
	for(list<int>::iterator it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
