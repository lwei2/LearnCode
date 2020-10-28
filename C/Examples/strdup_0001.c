/*************************************************************************
    > File Name: strdup_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p = "helloworld";
	char *t;
	t = strdup(p);
	printf("%s\n", t);
	free(t);
	return 0;
}
