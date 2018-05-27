/*************************************************************************
    > File Name: vector_pop_back.cpp
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
	int sum = 0;
	myvector.push_back(100);
	myvector.push_back(200);
	myvector.push_back(300);

	while(!myvector.empty())
	{
		sum+=myvector.back();
		myvector.pop_back();
	}
	cout<<"the elements of myvector add up to"<<sum<<endl;

	return 0;
}
