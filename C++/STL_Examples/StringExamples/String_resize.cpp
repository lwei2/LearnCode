/*************************************************************************
    > File Name: String_resize.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("I like to code in C");
	cout<<str<<endl;
	unsigned sz=str.size();
	str.resize(sz+2,'+');
	cout<<str<<endl;
	str.resize(14);
	cout<<str<<endl;

	return 0;
}

