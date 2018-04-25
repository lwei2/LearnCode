/*************************************************************************
    > File Name: String_erase.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("This is an example sentence.");
	str.erase(10,8);
	cout<<str<<endl;

	str.erase(str.begin()+9);
	cout<<str<<endl;

	str.erase(str.begin()+5,str.end()-9);
	cout<<str<<endl;

	return 0;
}

