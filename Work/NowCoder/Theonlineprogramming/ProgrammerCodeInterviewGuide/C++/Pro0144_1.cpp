/*************************************************************************
    > File Name: Pro0144_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char c;
	int a,b;
	cin>>a>>c>>b;

	int res = 0;
	if(c == '+')
		res = a + b;
	else if(c == '-')
		res = a - b;
	else if(c == '*')
		res = a * b;
	else if(c == '/' || c == '\\')
		res = a/b;
	cout<<res;
	return 0;
}
