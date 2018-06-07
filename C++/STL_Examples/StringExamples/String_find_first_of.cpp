/*************************************************************************
    > File Name: String_find_first_of.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("Please, replace sthe vowels in this sentence by asterisks.");
	std::size_t found = str.find_first_of("aeiou");
	while(found!=std::string::npos)
	{
		str[found]='@';
		found = str.find_first_of("aeiou", found+1);
	}
	std::cout<<str<<endl;

	return 0;
}
