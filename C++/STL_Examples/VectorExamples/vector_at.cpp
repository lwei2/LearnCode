/*************************************************************************
    > File Name: vector_at.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	std::vector<int> vec(10);
	for(unsigned i = 0; i < vec.size(); i++)
	  vec.at(i) = i;
	std::cout<<"vector contans:";
	for(unsigned i = 0; i < vec.size(); i++)
	  cout<<' '<< vec.at(i);
	cout<<endl;

	return 0;
}
