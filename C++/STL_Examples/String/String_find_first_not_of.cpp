/*************************************************************************
    > File Name: String_find_first_not_of.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(int argc,char *argv[])
{
  	string str("look for non-alphabetic characters...");
	std::size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
	if(found!=std::string::npos)
	{
		std::cout<<"The first non-alphabetic character is"<<str[found];
		std::cout<<"at position"<<found<<endl;
	}
	return 0;
}
