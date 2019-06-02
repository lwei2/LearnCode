/*************************************************************************
    > File Name: isdigit_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[] = "123kal*(0-#";
	int i;
	for(i = 0; str[i]!='\0'; i++)
	{
		if(isdigit(str[i]))
			printf("%c is number\n", str[i]);
	}
	return 0;
}
