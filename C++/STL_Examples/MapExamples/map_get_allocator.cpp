/*************************************************************************
    > File Name: map_get_allocator.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(void)
{
	int psize;
	map<char,int>mymap;
	pair<const char,int>*p;
	p = mymap.get_allocator().allocate(5);
	psize = sizeof(map<char,int>::value_type)*5;
	cout<<"The allocated array has a size of"<<psize<<"bytes"<<endl;
	mymap.get_allocator().deallocate(p,5);
	return 0;
}
