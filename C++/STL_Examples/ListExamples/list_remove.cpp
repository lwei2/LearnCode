/*************************************************************************
    > File Name: list_remove.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	int myints[] = {17,89,7,14};
	list<int>mylist(myints,myints+4);
	mylist.remove(89);
	for(list<int>::iterator it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
