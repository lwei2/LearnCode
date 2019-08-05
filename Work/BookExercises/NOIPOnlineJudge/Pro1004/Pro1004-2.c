/*************************************************************************
    > File Name: Pro1004-2.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	char ch = getchar();
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j <=(5-i); j++)
			putchar(' ');
		for(int j = 0; j <= 2*i; j++)
			putchar(ch);
		putchar('\n');
	}
	return 0;
}
