/*************************************************************************
    > File Name: 1-12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void fn1(void);
void fn2(void);


int main(void)
{
	atexit(fn1);
	atexit(fn2);
	printf("main exit...\n");
	return 0;
}

void fn1()
{
	printf("calling fn1() ...\n");
}

void fn2()
{
	printf("calling fn2() ...\n");
}
