/*************************************************************************
    > File Name: const_cast_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	const string s="HelloWorld";
	string& p = const_cast<string&>(s);
	cout<<s<<endl;
	cout<<p<<endl;

	return 0;
}
