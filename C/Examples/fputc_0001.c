/*************************************************************************
    > File Name: fputc_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("./test.txt", "wt++");
	char ch;
	if(NULL == fp)
	{
		puts("failed to open the file!");
		exit(0);
	}
	printf("Input a string:\n");
	while((ch = getchar())!='\n')
	{
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}

