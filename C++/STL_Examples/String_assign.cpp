/*************************************************************************                                                          
     > File Name: String_assign.cpp
     > Author: lwei2
     > Mail: lwei2@IT.com 
     > The Description:String member functions assign 
************************************************************************/


#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str;
	string base =" The quick brown fox jumps over a lazy dog.";

	str.assign(base);
	cout<<str<<endl;

	str.assign(base,10,9);
	cout<<str<<endl;

	str.assign("pangrams are cool",7);
	cout<<str<<endl;

	str.assign("c-string");
	cout<<str<<endl;

	str.assign(10,'*');
	cout<<str<<endl;

	str.assign<int>(10,0x2D);
	cout<<str<<endl;

	str.assign(base.begin()+16,base.end()-12);
	cout<<str<<endl;

	return 0;
}
