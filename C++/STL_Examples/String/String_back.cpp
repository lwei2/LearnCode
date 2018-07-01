/*************************************************************************
    > File Name: String_back.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member functions 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("Hello World.");
	str.back() = '!';
	cout<<str<<endl;
	return 0;
}
