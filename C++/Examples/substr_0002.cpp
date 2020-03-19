/*************************************************************************
    > File Name: substr_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1("Heteroalogical paradoxes are persistent.");
	cout<<"The original string str1 is:"<<endl;
	cout<<str1<<endl;
	basic_string<char> str2 = str1.substr(6,7);
	cout<<"The substring str2 copied is:"<<str2<<endl;
	basic_string<char> str3 = str1.substr();
	cout<<"The default substring str3 is:"<<endl;
	cout<<str3<<endl;
	cout<<"which is the entire original string."<<endl;
	return 0;
}
