/*************************************************************************
    > File Name: ftell_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int flen;
	char *p;
	if((fp = fopen("test.txt","r")) == NULL)
	{
		printf("\nfile open error\n");
		exit(0);
	}
	fseek(fp,0L, SEEK_END);
	flen = ftell(fp);
	p = (char*)malloc(flen+1);
	if(p == NULL)
	{
		fclose(fp);
		return 0;
	}
	fseek(fp, 0L, SEEK_END);
	fread(p, flen, 1, fp);
	p[flen] = '\0';
	printf("%s",p);
	fclose(fp);
	free(p);
	return 0;
}
