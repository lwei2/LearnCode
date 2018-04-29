/*************************************************************************
    > File Name: String_operator=.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str,str1,str2;
	str = "Test string:";
	str1 = 'x';
	str2 = str + str1;
	cout<<str2<<endl;

	return 0;
}

