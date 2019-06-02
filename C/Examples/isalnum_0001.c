/*************************************************************************
    > File Name: isalnum_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[] = "123kal*(0-#10";
	int i;
	for(i = 0; str[i]!='\0';i++)
	{
		if(isalnum(str[i]))
			printf("%c ", str[i]);
	}
	printf("is a-z or number\n");
	return 0;
}
