/*************************************************************************
    > File Name: fgetc_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE *fp = fopen("./test.txt", "r+");
	if(NULL == fp)
	{
		puts("failed to open the file!");
		exit(0);
	}
	while((ch = fgetc(fp))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}

