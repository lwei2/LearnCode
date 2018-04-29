/*************************************************************************
    > File Name: String_operator+.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string name("John");
	std::string family("Smith");
	name +=" K. ";
	name +=family;
	name +='\n';
	cout<<name<<endl;
	return 0;
}
