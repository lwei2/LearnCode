/*************************************************************************
    > File Name: list_front.cpp
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
	mylist.push_back(77);
	mylist.push_back(22);
	mylist.front() -= mylist.back();
	cout<<"mylist front:"<<mylist.front()<<endl;

	return 0;
}
