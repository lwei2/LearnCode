/*************************************************************************
    > File Name: list_resize.cpp
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
	for(int i = 1; i < 10; ++i)
	  mylist.push_back(i);
	mylist.resize(5);
	mylist.resize(8,100);
	mylist.resize(12);
	list<int>::iterator it ;
	for(it=mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
