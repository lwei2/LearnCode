/*************************************************************************
    > File Name: String_replace.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string base="this is a test string.";
	string str2="n example";
	string str3="sample phrase";
	string str4="userful.";

	string str=base;
	str.replace(9,5,str2);
	str.replace(19,6,str3,7,6);
	str.replace(8,10,"just a");
	str.replace(8,6,"a shorty",7);
	str.replace(22,1,3,'!');
	str.replace(str.begin(),str.end()-3,str3);
	str.replace(str.begin(),str.begin()+6,"replace");
	str.replace(str.begin()+8,str.begin()+14,"is coolness",7);
	str.replace(str.begin()+12,str.end()-4,4,'0');
	str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());
	std::cout<<str<<endl;

	return 0;
}
