/*************************************************************************
    > File Name: list_pop_back.cpp
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
	mylist.push_back(100);
	mylist.push_back(200);
	mylist.push_back(300);
	while(!mylist.empty())
	{
		sum+=mylist.back();
		mylist.pop_back();
	}
	cout<<"The elements of mylist sum:"<<sum<<endl;
	return 0;
}
