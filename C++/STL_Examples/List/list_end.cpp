/*************************************************************************
    > File Name: list_end.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	int myints[] = {75,23,65,42,13};
	list<int> mylist(myints,myints+5);
	list<int>::iterator it;
	for(it=mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
