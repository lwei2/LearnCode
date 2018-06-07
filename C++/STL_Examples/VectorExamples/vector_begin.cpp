/*************************************************************************
    > File Name: vector_begin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	std::vector<int> myvector;
	for(int i=1;i<=5;i++)
	  myvector.push_back(i);
	cout<<"myvector contains:";
	vector<int>::iterator it;
	for(it=myvector.begin();it!=myvector.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
