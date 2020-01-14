/*************************************************************************
    > File Name: 2-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	const int x = 1;
	int b = 10;
	int c = 20;
	const int *a1 = &b;
	int *const a2 = &b;
	const int *const a3 = &b;
	x = 2;
	a1 = &c;
	*a1 = 1;
	a2=&c;
	*a2=1;
	a3=&c;
	*a3=1;
	return 0;
}
