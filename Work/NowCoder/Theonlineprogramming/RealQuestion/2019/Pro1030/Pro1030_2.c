/*************************************************************************
    > File Name: Pro1030_2.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int count = 1;
	char c,x;
	x = getchar();
	while((c = getchar())!='\n')
	{
		if(c == x)
			count++;
		else
		{
			printf("%d%c",count,x);
			count = 1;
			x = c;
		}
	}
	printf("%d%c",count, x);
	return 0;
}
