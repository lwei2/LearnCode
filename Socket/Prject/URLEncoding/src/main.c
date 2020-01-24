/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include "url.h"

int main(void)
{
	char *a = malloc(480000);
	strcat(a,"#~&/:;=?@asd2%<>[]{}|\\136g%$%^$%^uyf,");
	urlencode(a);
	printf("encode result is %s\n", a);

	urldecode(a);
	printf("decode result is %s\n", a);
	free(a);
	return 0;
}
