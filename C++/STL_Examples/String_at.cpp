/*************************************************************************
    > File Name: String_at.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Test string");
	for(unsigned i = 0; i<str.length();++i)
	{
		cout<<str.at(i)<<endl;
	}
	return 0;	
}
