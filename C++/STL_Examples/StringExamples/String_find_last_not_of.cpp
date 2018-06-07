/*************************************************************************
    > File Name: String_find_last_not_of.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("Please, erase trailing white-spaces  \n");
	std::string whitespace("\t\f\v\n\r");
	std::size_t found = str.find_last_not_of(whitespace);
	if(found!=std::string::npos)
	{	
		str.erase(found+1);
	}	  
	else
	{
		str.clear();
	}
	std::cout<<"["<<str<<"]"<<endl;

	return 0;
}
