/*************************************************************************
    > File Name: String_end.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str("Test string");
	for(string::iterator iter = str.begin();iter!=str.end();++iter)
	  	cout<<*iter<<endl;
	return 0;

}
