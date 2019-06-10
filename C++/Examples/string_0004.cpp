/*************************************************************************
    > File Name: string_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s("abcdef");
	cout<<s<<endl;
	char &r = s[2];
	char *p = &s[3];
	r = 'X';
	*p = 'Y';
	cout<<s<<endl;
	s = "12345678";
	r = 'X';
	*p = 'Y';
	cout<<s<<endl;
	return 0;
}

