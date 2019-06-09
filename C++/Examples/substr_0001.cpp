/*************************************************************************
    > File Name: substr_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s("12345asdf");
	string t = s.substr(0,5);
	cout<<t<<endl;
	return 0;
}
