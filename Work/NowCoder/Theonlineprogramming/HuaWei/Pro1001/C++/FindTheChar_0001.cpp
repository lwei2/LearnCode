/*************************************************************************
    > File Name: FindTheChar_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	char ch;
	string str;

	getline(cin,str);
	cin>>ch;
	int count = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		else
			continue;
	}
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == ch)
			count++;
	}
	cout<<count;
	return 0;
}
