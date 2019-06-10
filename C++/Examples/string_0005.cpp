/*************************************************************************
    > File Name: string_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1("aBcdef");
	string str2("AbcdEf");
	string str3("123456");
	string str4("123dfg");

	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	cout<<"str3:"<<str3<<endl;
	cout<<"str4:"<<str4<<endl;

	int m = str1.compare(str2);
	int n = str1.compare(1,5, str2);
	int p = str1.compare(1,5, str2, 4,2);
	int q = str3.compare(0,3,str4,0,3);

	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
	cout<<"p="<<p<<endl;
	cout<<"q="<<q<<endl;

	return 0;
}

