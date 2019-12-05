/*************************************************************************
    > File Name: 1-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int value = 0;

void printvalue()
{
	printf("value = %d\n", value);
}

int main(void)
{
	int value = 0;
	value = 1;
	printf("value = %d\n", value);

	::value = 2;
	printvalue();
	return 0;
}
