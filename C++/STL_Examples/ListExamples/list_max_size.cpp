/*************************************************************************
    > File Name: list_max_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	unsigned int i;
	list<int>mylist;
	cin>>i;
	if(i<mylist.max_size())
	  mylist.resize(i);
	else
	  cout<<"That size exceeds the limit."<<endl;

	return 0;
}
