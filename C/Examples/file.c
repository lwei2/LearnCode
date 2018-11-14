/*************************************************************************
    > File Name: file.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *stream;
	char msg[] = "this is a test";
	char buf[20];
	if((stream = fopen("/work/DUMMY.FIL","w+")) == NULL)
	{
		fprintf(stderr, "Can not open output file.\n");
		return 0;
	}
	fwrite(msg,1,strlen(msg)+1,stream);
	fseek(stream, 0, SEEK_SET);
	fread(buf,strlen(msg)+1,1,stream);
	printf("%s\n",buf);
	fclose(stream);
	return 0;
}
