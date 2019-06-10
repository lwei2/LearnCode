/*************************************************************************
    > File Name: fputs_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[102];
	char strTemp[100];
	memset(str, 0, sizeof(str));
	memset(strTemp, 0, sizeof(strTemp));
	FILE *fp = fopen("./test.txt", "at++");
	if(NULL == fp)
	{
		puts("failed to puts the file!");
		exit(0);
	}
	printf("Input a string:");
	gets(strTemp);
	strcat(str,"\n");
	strcat(str, strTemp);
	fputs(str, fp);
	fclose(fp);

	return 0;
}

