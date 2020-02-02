/*************************************************************************
    > File Name: Pro0117_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	string str;
	cin>>n>>str;
	if(n < str.length())
		cout<<str.substr(n,str.size() - n) + str.substr(0,n)<<endl;
	else
		cout<<str<<endl;
	return 0;
}
