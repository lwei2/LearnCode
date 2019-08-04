/*************************************************************************
    > File Name: clearerr_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("test.txt", "r");
	if(fp == NULL)
		perror("Error opening file");
	else
	{
		fputc('x',fp);
		if(ferror(fp))
		{
			printf("Error Writing to myfile txt\n");
			clearerr(fp);
		}
		fgetc(fp);
		if(!ferror(fp))
		{
			printf("No errors reading myfile\n");
		}
		fclose(fp);
	}
	return 0;
}
