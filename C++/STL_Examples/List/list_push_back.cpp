/*************************************************************************
    > File Name: list_push_back.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
	int myint;

	list<int> mylist;
	do{
		cin>>myint;
		mylist.push_back(myint);
	}while(myint);
	cout<<"mylist stores:"<<mylist.size()<< "numbers."<<endl;

	return 0;
}
