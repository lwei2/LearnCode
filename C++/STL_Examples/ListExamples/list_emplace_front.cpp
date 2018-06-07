/*************************************************************************
    > File Name: list_emplace_front.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<pair<int,char>>mylist;
	mylist.emplace_front(10,'a');
	mylist.emplace_front(20,'b');
	mylist.emplace_front(30,'c');
	for(auto& x:mylist)
	  cout<<"("<<x.first<<","<<x.second<<")";
	cout<<endl;

	return 0;
}

