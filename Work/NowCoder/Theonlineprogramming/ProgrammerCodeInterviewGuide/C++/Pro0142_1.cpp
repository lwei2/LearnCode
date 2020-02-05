/*************************************************************************
    > File Name: Pro0142_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	cin>>a>>b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout<<a<<' '<<b<<endl;
	return 0;
}
