/************************************************************************
    > File Name: String_front.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("test string");
	str.front() = 'T';
	std::cout<<str<<endl;

	return 0;
}
