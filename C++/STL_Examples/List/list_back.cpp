/*************************************************************************
    > File Name: list_back.cpp
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
	mylist.push_back(10);
	while(mylist.back()!=0)
	{
		mylist.push_back(mylist.back()-1);
	}
	cout<<"mylist contains:";
	for(list<int>::iterator it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;
	return 0;
}
