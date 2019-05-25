/*************************************************************************
    > File Name: vector_emplace_back.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  	vector<int> myvector = {10,20,30};
	myvector.emplace_back(100);
	myvector.emplace_back(200);
	cout<<"myvector contains:";
#if 0
	vector<int>::iterator iter;
	for(iter=myvector.begin();iter!=myvector.end();iter++)
	  	cout<<*iter<<'\t';
	cout<<endl;
#else
	for(auto& x : myvector)
		std::cout<<" "<<x;
	cout<<endl;
#endif
	return 0;
}

