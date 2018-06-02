/*************************************************************************
    > File Name: list_crend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<deque>
#include<list>

using namespace std;

int main(void)
{
  	list<int> mylist = {1,2,4,8,16};
	list<int>::const_reverse_iterator it;
	for(it =mylist.crbegin();it!=mylist.crend();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
