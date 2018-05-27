/*************************************************************************
    > File Name: vector_shrink_to_fit.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int>myvector(100);
	cout<<"capacity of myvector:"<<myvector.capacity()<<endl;
	myvector.resize(10);
	cout<<"capacity of myvector:"<<myvector.capacity()<<endl;
	myvector.shrink_to_fit();
	cout<<"capacity of myvector:"<<myvector.capacity()<<endl;

	return 0;
}
