/*************************************************************************
    > File Name: vector_max_size.cpp
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
	for(int i = 0; i < 100; i++)
	  myvector.push_back(i);
	cout<<"size:"<<myvector.size()<<endl;
	cout<<"capacity:"<<myvector.capacity()<<endl;
	cout<<"max_size:"<<myvector.max_size()<<endl;

	return 0;
}
