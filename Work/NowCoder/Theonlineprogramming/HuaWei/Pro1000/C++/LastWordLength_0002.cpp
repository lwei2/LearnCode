/*************************************************************************
    > File Name: LastWordLength_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int len = 0;
	int num = 0;
	string line;
	
	getline(cin,line);
	len = line.length() - 1;
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
