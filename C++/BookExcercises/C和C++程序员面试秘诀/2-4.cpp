/*************************************************************************
    > File Name: 2-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

#define STR(s) #s
#define CONS(a,b) (int)(a##e##b)
using namespace std;

int main(void)
{
	printf(STR(vck));
	printf("\n");
	printf("%d\n", CONS(2,3));
	return 0;
}
