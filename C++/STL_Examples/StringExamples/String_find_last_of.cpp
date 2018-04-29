/*************************************************************************
    > File Name: String_find_last_of.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

void SplitFilename(const std::string &str)
{
  	std::cout<<"Splitting:"<<str<<endl;
	std::size_t found =str.find_last_of("/\\");
	std::cout<<"path:"<<str.substr(0,found)<<endl;
	std::cout<<"file:"<<str.substr(found+1)<<endl;
	return;
}
int main(void)
{
	std::string str1("/usr/bin/man");
	std::string str2("c:\\windows\\winhelp.exe");
	SplitFilename(str1);
	SplitFilename(str2);
	return 0;
}
