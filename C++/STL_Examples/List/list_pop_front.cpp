/*************************************************************************
    > File Name: list_pop_front.cpp
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
	mylist.push_back(100);
	mylist.push_back(200);
	mylist.push_back(300);
	while(!mylist.empty())
	{
		cout<<' '<<mylist.front();
		mylist.pop_front();
	}
	cout<<"\nFinal size of mylist is"<<mylist.size()<<endl;

	return 0;
}
