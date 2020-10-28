/*************************************************************************
    > File Name: system_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int res = system("ls -a");
	if(res == -1)
	{
		printf("system error\n");		
	}
	return 0;
}

