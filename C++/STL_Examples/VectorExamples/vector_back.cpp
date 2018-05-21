/*************************************************************************
    > File Name: vector_back.cpp
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
	myvector.push_back(10);
	while(myvector.back()!=0)
	{
		myvector.push_back(myvector.back()-1);
	}
	std::cout<<"myvector contains:";
	for(unsigned i = 0; i<myvector.size();i++)
	  std::cout<<' '<<myvector[i];
	std::cout<<std::endl;

	return 0;
}

