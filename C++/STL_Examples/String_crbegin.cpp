/*************************************************************************
    > File Name: String_crbegin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("lorem ipsum");
	string::const_reverse_iterator iter;
	for(iter = str.crbegin();iter !=str.crend();++iter)
	  	cout<<*iter;
	cout<<endl;
	return 0;
}

