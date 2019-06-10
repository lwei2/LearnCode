/*************************************************************************
    > File Name: string_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	const string str1("c++.biancheng.net");
	string str2("abcde");
	cout<<str2[2]<<endl;
	cout<<str2[str2.length()]<<endl;
	cout<<str1[str1.length()]<<endl;
	cout<<str2.at(str2.length())<<endl;
	cout<<str1.at(str1.length())<<endl;
	return 0;
}
