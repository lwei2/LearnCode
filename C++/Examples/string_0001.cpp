/*************************************************************************
    > File Name: string_0001.cpp
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
	char ch[] = "abcdefgh";
	string str1;
	string str2(str);
	string str3(str, 2,5);
	string str4(ch, 5);
	string str5(5,'X');
	string str6(str.begin(), str.end());
	cout<<str<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;
	cout<<str4<<endl;
	cout<<str5<<endl;
	cout<<str6<<endl;
}
