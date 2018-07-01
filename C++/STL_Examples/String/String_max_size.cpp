/*************************************************************************
    > File Name: String_max_size.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("Test string");
	cout<<"size:"<<str.size()<<endl;
	cout<<"length:"<<str.size()<<endl;
	cout<<"capacity:"<<str.capacity()<<endl;
	cout<<"max_size:"<<str.max_size()<<endl;

	return 0;
}

