/*************************************************************************
    > File Name: String_operator[].cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("test string");
	for(int i=0;i<str.length();++i)
	{
		cout<<str[i];
	}
	return 0;
}
