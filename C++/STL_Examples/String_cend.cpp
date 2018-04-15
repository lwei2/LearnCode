/*************************************************************************
    > File Name: String_cend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member function cend 
 ************************************************************************/


#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Lorem ipsum");
	string::const_iterator iter;
	for(iter = str.cbegin();iter!=str.cend();iter++)
	  	cout<<*iter<<endl;

	return 0;
}

