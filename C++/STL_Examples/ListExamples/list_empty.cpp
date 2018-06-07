/*************************************************************************
    > File Name: list_empty.cpp
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
	int sum = 0;
	for(int i = 1; i <= 10; ++i)
	  mylist.push_back(i);
	while(!mylist.empty())
	{
		sum += mylist.front();
		mylist.pop_front();
	}
	cout<<"total:"<<sum<<endl;

	return 0;
}
