/*************************************************************************
    > File Name: 1-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int i = 0;
	int x = 0;
	i++;
	++i;
	x = i++;
	x = ++i;
	cout<<"i:"<<i<<endl;
	cout<<"x:"<<x<<endl;
	return 0;
}
