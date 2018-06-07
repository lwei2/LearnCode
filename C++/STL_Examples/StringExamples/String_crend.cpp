/*************************************************************************
    > File Name: String_crend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<string>
#include<iostream>

using namespace std;

int main(void)
{
  	string str("Test string..");
	string ::const_reverse_iterator iter;
	for(iter=str.crbegin();iter!=str.crend();iter++)
	  cout<<*iter<<endl;

	return 0;
}
