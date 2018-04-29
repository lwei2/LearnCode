/*************************************************************************
    > File Name: String_shrink_to_fit.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str(100,'x');
	std::cout<<"1.capacity of str:"<<str.capacity()<<endl;
	str.resize(10);
	std::cout<<"2.capacity of str:"<<str.capacity()<<endl;
	str.shrink_to_fit();
	std::cout<<"3.capacity of str:"<<str.capacity()<<endl;

	return 0;
}
