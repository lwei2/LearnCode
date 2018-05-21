/*************************************************************************
    > File Name: vector_front.cpp
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
	myvector.push_back(58);
	myvector.push_back(18);
	myvector.front() -= myvector.back();
	cout<<myvector.front()<<endl;

	return 0;
}
