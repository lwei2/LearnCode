/*************************************************************************
    > File Name: vector_0008.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	std::cout<<"V.size() == "<<v.size()<<",V.capacity() =="<<v.capacity()<<endl;
	v.reserve(10);
	std::cout<<"V.size() == "<<v.size()<<",V.capacity() =="<<v.capacity()<<endl;
	v.resize(10);
	v.push_back(0);
	std::cout<<"V.size() == "<<v.size()<<",V.capacity() =="<<v.capacity()<<endl;
	return 0;
}
