/*************************************************************************
    > File Name: 11-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char ch;
	cout<<"EOF="<<EOF<<endl;
	cout<<"Enter the string:";
	while((ch=cin.get())!=EOF)
	{
		cout<<ch;
	}
	return 0;
}
