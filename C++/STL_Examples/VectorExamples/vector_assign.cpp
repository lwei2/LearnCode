/*************************************************************************
    > File Name: vector_assign.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> first;
	vector<int> second;
	vector<int> third;

	first.assign(7,100);
	vector<int>::iterator iter;
	iter = first.begin() + 1;
	second.assign(iter,first.end() - 1);

	int myints[]={1776,7,4};
	third.assign(myints,myints+3);

	cout<<"size of first:"<<int(first.size())<<endl;
	cout<<"size of second:"<<int(second.size())<<endl;
	cout<<"size of third:"<<int(third.size())<<endl;


	return 0;
}
