/*************************************************************************
    > File Name: Pro1061_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[10005];
	while(scanf("%s",a) != EOF)
	{
		if(!strcmp("youzan;zanyou",a))
			printf("true\n");
		else
			printf("false\n");
	}
	return 0;
}
