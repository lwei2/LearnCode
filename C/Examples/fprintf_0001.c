/*************************************************************************
    > File Name: fprintf_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int a,b;
	int sum;
	fprintf(stdout, "Input two numbers:");
	fscanf(stdin, "%d %d", &a, &b);
	sum = a + b;
	fprintf(stdout, "sum = %d\n", sum);
	return 0;
}
