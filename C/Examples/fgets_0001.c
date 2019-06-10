/*************************************************************************
    > File Name: fgets_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(void)
{
	char str[N+1];
	FILE *fp = fopen("./test.txt", "rt");
	if(NULL == fp)
	{
		puts("failed to open the file!");
		exit(0);
	}
	while(fgets(str, N, fp)!=NULL)
	{
		printf("%s\n",str);
	}
	fclose(fp);
	return 0;
}

