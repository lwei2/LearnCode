/*************************************************************************
    > File Name: list_push_front.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int>mylist(2,100);
	mylist.push_back(200);
	mylist.push_back(300);

	list<int>::iterator it;
	for(it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
