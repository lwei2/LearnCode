/*************************************************************************
    > File Name: LastWordLength_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	string str;
	int count = 0;

	while(getline(cin,str))
	{
		int i = 0;
		while(str[i] != '\0')
		{
			if(str[i] == ' ')
				count = 0;
			else 
				count++;
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}
