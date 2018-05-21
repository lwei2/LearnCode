/*************************************************************************
    > File Name: vector_capacity.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector;
	int i;
	for(i=0;i<100;i++)
	  myvector.push_back(i);
	cout<<"size:"<<(int)myvector.size()<<endl;
	cout<<"capacity:"<<(int)myvector.capacity()<<endl;
	cout<<"max_size:"<<(int)myvector.max_size()<<endl;

	return 0;
}
