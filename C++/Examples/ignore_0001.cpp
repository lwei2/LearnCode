/*************************************************************************
    > File Name: ignore_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char str[10];
	cout<<"Type str:";
	cin.ignore(5,'c');
	cin>>str;
	cout<<str;
	cout<<endl;
	return 0;
}
