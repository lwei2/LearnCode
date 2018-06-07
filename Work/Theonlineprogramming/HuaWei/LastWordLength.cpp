/*************************************************************************
    > File Name: LastWordLength.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str;
	char ch;
	int i, count = 0;
	getline(cin,str);
	cin>>ch;
	for(i = 0; i <str.length(); ++i)
	{
#if METHOD1
		str[i] = tolower(str[i]);
#else
		if(str[i] >= 'A' && str[i] <= 'Z')
		  str[i] += 'a' -'A';
		else
		  continue;
	}
	for(i = 0; i < str.length(); ++i)
	{
		if(str[i] == ch)
		  count++;
	}

  	cout<<num<<endl;
	return 0;
}
