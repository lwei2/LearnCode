/*************************************************************************
    > File Name: ferror_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	if((fp = fopen("./test.txt", "rt")) == NULL)
	{
		puts("failed to open the file!");
		exit(0);
	}
	while((ch = fgetc(fp))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	if(ferror(fp))
		puts("read the file error");
	else
		puts("read the file ok");
	fclose(fp);
	return 0;
	
}
