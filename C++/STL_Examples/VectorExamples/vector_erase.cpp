/*************************************************************************
    > File Name: vector_erase.cpp
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
	for(int i = 1; i <= 10; ++i)
	  myvector.push_back(i);
	myvector.erase(myvector.begin()+5);
	myvector.erase(myvector.begin(),myvector.begin()+3);
	for(int i = 0; i < myvector.size(); ++i)
	  cout<<' '<<myvector[i];
	cout<<endl;

	return 0;
}
