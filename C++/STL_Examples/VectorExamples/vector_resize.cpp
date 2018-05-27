/*************************************************************************
    > File Name: vector_resize.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int>myvector;
	for(int i = 1;i<10;i++)
	  myvector.push_back(i);

	myvector.resize(5);
	myvector.resize(8,100);
	myvector.resize(12);

	for(int i=0;i<myvector.size();i++)
	  cout<<' '<<myvector[i];
	cout<<endl;

	return 0;
}
