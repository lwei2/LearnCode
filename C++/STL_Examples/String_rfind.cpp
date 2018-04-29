/*************************************************************************
    > File Name: String_rfind.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstddef>
using namespace std;

int main(void)
{
  	std::string str("The sixth sick sheik's sixth sheep's sick:");
	std::string key("sixth");
	std::size_t found = str.rfind(key);
	if(found!=std::string::npos);
	str.replace(found,key.length(),"seventh");
	std::cout<<str<<std::endl;

	return 0;
}
