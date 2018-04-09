/*************************************************************************
    > File Name: String.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string s0("Initial string");
	cout<<"s0:"<<s0<<endl;

	string s1(s0);
	cout<<"s1:"<<s1<<endl;

	string s2(s0, 8, 3);
	cout<<"s2:"<<s2<<endl;

	string s3("A character sequence");
	cout<<"s3:"<<s3<<endl;

	string s4("Another character sequence", 12);
	cout<<"s4:"<<s4<<endl;

	string s5(10, 'X');
	cout<<"s5:"<<s5<<endl;

	string s6(10,42);
	cout<<"s6:"<<s6<<endl;

	string s7(s0.begin(), s0.begin() + 7);
	cout<<"s7:"<<s7<<endl;


	return 0;
}

