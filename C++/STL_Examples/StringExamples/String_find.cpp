/*************************************************************************
    > File Name: String_find.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("There are two needles in this haystack with needles.");
	string str2("needles");

	std::size_t found = str.find(str2);
	if(found!=std::string::npos)
	{
		cout<<"first 'needle' found at:"<<found<<endl;
	}
	found=str.find("needles are small",found+1, 6);
	if(found!=std::string::npos)
	{
			cout<<"second 'needles' found at:"<<found<<endl;
	}
	found = str.find("haystack");
	if(found!=std::string::npos)
	{
		cout<<"haystack' also found at:"<<found<<endl;
	}
	found = str.find(".");
	if(found!=std::string::npos)
	{
		cout<<"Period found at:"<<found<<endl;
	}
	str.replace(str.find(str2),str2.length(),"preposition");
	cout<<str<<endl;

  	return 0;
}
