/*************************************************************************
    > File Name: setw_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	char *str = "hello";
	cout<<setw(10)<<setiosflags(ios::left)<<setfill('@')<<str<<endl;
	cout<<setw(10)<<setiosflags(ios::right)<<setfill('@')<<str<<endl;
	cout<<setw(10)<<setfill('@')<<str<<endl;
	return 0;
}
