/*************************************************************************
    > File Name: list_clear.cpp
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
	list<int>::iterator it;

	mylist.push_back(100);
	mylist.push_back(200);
	mylist.push_back(300);

	for(it=mylist.begin();it!=mylist.end();++it)
	  	cout<<' '<<*it;
	cout<<endl;
	mylist.clear();
	mylist.push_back(1101);
	mylist.push_back(2202);
	for(it=mylist.begin();it!=mylist.end();++it)
	  	cout<<' '<<*it;
	cout<<endl;

  	return 0;
}	
