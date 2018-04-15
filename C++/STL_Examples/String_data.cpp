/*************************************************************************
    > File Name: String_data.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(void)
{
  	string str ="Test string";
	int length;
	char *cstr="Test string";
	if(str.length() == strlen(cstr) )
	{
		cout<<"str and cstr have the same length"<<endl;
		cout<<str.data()<<endl;
		if(memcmp(cstr, str.data(),str.length()) == 0)
		{
			cout<<"str and cstr have the same content."<<endl;
		}
	}
	return 0;
}

