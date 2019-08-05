/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int day, x1, x2;
	day = 9;
	x2 = 1;
	while(day > 0)
	{
		x1 = (x2 + 1)*2;
		x2 = x1;
		day--;
	}
	printf("the total is %d\n",x1);
	return 0;
}
