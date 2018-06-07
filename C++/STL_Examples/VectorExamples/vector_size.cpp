/*************************************************************************
    > File Name: vector_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int>myints;
	cout<<"size:"<<myints.size()<<endl;
	for(int i = 0; i < 10; i++)
	  myints.push_back(i);
	cout<<"size:"<<myints.size()<<endl;
	myints.insert(myints.end(),10,100);
	cout<<"size:"<<myints.size()<<endl;
	myints.pop_back();
	cout<<"size:"<<myints.size()<<endl;

	return 0;
}
