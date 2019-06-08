/*************************************************************************
    > File Name: isascii_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	do
	{
		ch = getchar();
		if(isascii(ch))
		{
			printf("%c is ASCII code, %d \n", ch, ch);
		}
	}while(ch!=27);
	return 0;
}
