/*************************************************************************
    > File Name: String_append.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member functions append 
 ************************************************************************/
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str;
	string str1 = "Writing";
	string str2 = "print 10 and then 5 more";

	str.append(str1);
	str.append(str2,6,3);
	str.append("dots are cool", 5);
	str.append("here:");
	str.append(10u,'.');
	str.append(str2.begin()+8,str2.end());
	str.append<int>(5,0x2E);
	cout<<str<<'\n';

	return 0;
}

