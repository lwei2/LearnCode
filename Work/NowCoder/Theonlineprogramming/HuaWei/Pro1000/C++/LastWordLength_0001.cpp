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
	string line;
	int len = 0;
	int num = 0;
	getline(cin,line);
	len = line.length() - 1;
	while(len >= 0)
	{
		if(line[len] == ' ')
		{
			len--;
			continue;
		}
		else
			break;
	}
	while(line[len] != ' ')
	{
		len--;
		num++;
		if(len < 0)
			break;
	}
	cout<<num<<endl;

	return 0;
}
