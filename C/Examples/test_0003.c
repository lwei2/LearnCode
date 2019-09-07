/*************************************************************************
    > File Name: test_0003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int a[5][5];
	int (*p)[4];
	p = a;
	printf("%d, %p\n",&p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
