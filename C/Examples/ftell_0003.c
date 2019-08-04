/*************************************************************************
    > File Name: ftell_0003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	long f1;
	fp = fopen("test.txt","rb");
	fseek(fp, 0, SEEK_END);
	f1 = ftell(fp);
	fclose(fp);
	printf("%d\n",f1);
	return 0;
}
