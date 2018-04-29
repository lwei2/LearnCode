/*************************************************************************
    > File Name: String_substr.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str="We think in generalities,but we live in detail.";
	std::string str2=str.substr(3,5);
	std::size_t pos=str.find("live");
	std::string str3 = str.substr(pos);
	std::cout<<str2<<' '<<str3<<endl;

	return 0;
}
