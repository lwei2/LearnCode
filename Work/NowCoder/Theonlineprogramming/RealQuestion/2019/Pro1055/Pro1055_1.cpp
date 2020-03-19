/*************************************************************************
    > File Name: Pro1055_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	string str;
	cin>>str>>n;
	if(n > str.length())
		cout<<"-1"<<endl;
	else
	{
		cout<<str.substr(0,n);
		for(int i = 1; i + n <= str.length(); ++i)
			cout<<' '<<str.substr(i,n);
		cout<<endl;
	}
	return 0;
}
