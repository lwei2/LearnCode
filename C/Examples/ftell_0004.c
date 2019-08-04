/*************************************************************************
    > File Name: ftell_0004.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	int len;
	fp =  fopen("file.txt","r");
	if(NULL == fp)
	{
		perror("open the file error");
		return -1;
	}
	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("file sum = %d bytes\n",len);
	return 0;
}
