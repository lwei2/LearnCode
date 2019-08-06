/*************************************************************************
    > File Name: MultiplicationTable-4.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 9; i++)
	{
		for(int n = 1; n <= 9-i; n++)
			printf("     ");
		for(int j = 1; j <= i; j++)
			printf("%d*%d=%2d  ",i,j,i*j);
		printf("\n");
	}
	return 0;
}
