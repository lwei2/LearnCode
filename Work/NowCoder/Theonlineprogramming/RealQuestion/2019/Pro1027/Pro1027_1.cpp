/*************************************************************************
    > File Name: Pro1027_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1, str2;
	while(cin>>str1>>str2)
	{
		if(str1.find(str2) != string::npos || str2.find(str1) != string::npos)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
