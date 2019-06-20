/*************************************************************************
    > File Name: ignore_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin.ignore(1,'\n');
	cin>>a;
	cout<<a<<endl;

	int b;
	cin.ignore(2,'\n');
	cin>>b;
	cout<<b<<endl;

	int c;
	cin.ignore(2,'\n');
	cin>>c;
	cout<<c<<endl;
	return 0;
}
