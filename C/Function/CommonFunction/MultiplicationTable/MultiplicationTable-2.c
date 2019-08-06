/*************************************************************************
    > File Name: MultiplicationTable-2.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%2d\t",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
