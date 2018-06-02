/*************************************************************************
    > File Name: list_oprator=.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<int> first(3);
	list<int> second(5);
	second = first;
	first = list<int>();
	cout<<"size of first:"<<int(first.size())<<endl;
	cout<<"size of second:"<<int(second.size())<<endl;
	return 0;
}
