/*************************************************************************
    > File Name: fseek_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("a.txt","r+");
	if(NULL == fp)
	{
		printf("file open error!\n");
		exit(1);
	}
	fseek(fp, 2, SEEK_SET);
	char buf[] = "I love you!";
	fwrite(buf, sizeof(char), sizeof(buf), fp);
	fclose(fp);
	return 0;
}
