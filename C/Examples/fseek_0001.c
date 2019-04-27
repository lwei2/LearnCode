/*************************************************************************
    > File Name: fseek_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("HelloWorld.c", "rb");
	long int len = 0;
	fseek(fp,0,SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("%ld\n",len);
	return 0;
}
