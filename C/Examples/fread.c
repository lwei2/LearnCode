/*************************************************************************
    > File Name: fread.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp = NULL;
	char msg[] = "this is a test";
	char buf[20];
	if((fp = fopen("a.txt", "w+"))==NULL)
	{
		fprintf(stderr, "Can not open output file.\n");
		return 0;
	}
	fwrite(msg, 1, strlen(msg)+1,fp);
	fseek(fp,0,SEEK_SET);
	fread(buf,strlen(msg)+1,1,fp);
	printf("buf:%s\n",buf);
	fclose(fp);
	return 0;
}
