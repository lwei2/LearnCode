/*************************************************************************
    > File Name: 2-13.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char str[] = "Hello";
	char *p = str;
	int n = 10;
	
	void *p1 = malloc(100);

	cout<<sizeof(str)<<endl;
	cout<<sizeof(p)<<endl;
	cout<<sizeof(n)<<endl;
	cout<<sizeof(p1)<<endl;
	return 0;
}
