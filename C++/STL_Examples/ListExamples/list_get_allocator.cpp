/*************************************************************************
    > File Name: list_get_allocator.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int>mylist;
	int *p;
	p = mylist.get_allocator().allocate(5);
	for(int i = 0; i < 5; i++)
	  p[i] = i;
	for(int i = 0; i < 5; ++i)
	  cout<<' '<<p[i];
	cout<<endl;
	mylist.get_allocator().deallocate(p,5);

	return 0;
}
