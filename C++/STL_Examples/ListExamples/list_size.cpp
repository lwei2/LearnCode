/*************************************************************************
    > File Name: list_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
	list<int>myints;
	cout<<"0.size:"<<myints.size()<<endl;
	for(int i = 0; i < 10; i++)
	  myints.push_back(i);
	cout<<"1.size:"<<myints.size()<<endl;
	myints.insert(myints.begin(),10,100);
	cout<<"2.size:"<<myints.size()<<endl;
	myints.pop_back();
	cout<<"3.size:"<<myints.size()<<endl;
	return 0;
}
