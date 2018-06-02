/*************************************************************************
    > File Name: list_cend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
	list<int> mylist = {5,10,15,20};
	list<int>::const_iterator it;
	for(it = mylist.cbegin();it!=mylist.end();++it)
  		cout<<' '<<*it;
	cout<<endl;
		
	return 0;
}
