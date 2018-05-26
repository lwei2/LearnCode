/*************************************************************************
    > File Name: vector_get_allocator.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  	vector<int> myvector;
	int *p;
	unsigned int i;
	p = myvector.get_allocator().allocate(5);
	for(i=0;i<5;i++)
	  myvector.get_allocator().construct(&p[i],i);
	cout<<"The allocated array contains:";
	for(i=0;i<5;i++)
	  cout<<' '<<p[i];
	cout<<'\n';
	//for(i=0;i<5;i++)
	//  myvector.get_allocator.destroy(&p[i]);
	//myvector.get_allocator.deallocate(p,5);

  	return 0;
}
