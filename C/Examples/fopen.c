/*************************************************************************
    > File Name: fopen.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("./fork.c", "r");
	if(NULL == fp)
	{
		printf("fopen error\n");
		return -1;
	}
	printf("fopen success\n");
	fclose(fp);
	fp = NULL;
	return 0;
}
