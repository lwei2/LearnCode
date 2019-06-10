/*************************************************************************
    > File Name: string_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str("12345678");
	string str1 = str;
	str1.resize(5);
	cout<<str1.size()<<endl;
	cout<<str1.length()<<endl;
	cout<<str1.max_size()<<endl;
	cout<<str1.capacity()<<endl;
	return 0;
}
