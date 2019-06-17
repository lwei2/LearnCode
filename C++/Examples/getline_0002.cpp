/*************************************************************************
    > File Name: getline_0002.cpp
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
	while(getline(cin,str));
	{
		cout<<str<<endl;
	}
	return 0;
}
