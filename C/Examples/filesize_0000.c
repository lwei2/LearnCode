
#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("./filesize_0000.c","r");
	if(fp == NULL)
		return -1;
	fseek(fp, 0L, SEEK_END);
	long size = ftell(fp);
	printf("%d\n",size);
	fclose(fp);
	return 0;
}
