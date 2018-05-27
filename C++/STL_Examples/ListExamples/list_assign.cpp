/*************************************************************************
    > File Name: list_assign.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int> first;
	list<int> second;
	first.assign(7,100);
	second.assign(first.begin(),first.end());

	int myints[]={1776,7,4};
	first.assign(myints,myints+2);
	cout<<"size of first:"<<int(first.size())<<endl;
	cout<<"size of second:"<<int(second.size())<<endl;

	return 0;
}
