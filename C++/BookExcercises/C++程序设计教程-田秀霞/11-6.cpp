/*************************************************************************
    > File Name: 11-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char ch[5];
	cin>>ch;
	for(int i = 4; i >= 0; i--)
		cout.put(ch[i]);
	return 0;
}
