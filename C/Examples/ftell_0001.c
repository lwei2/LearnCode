/*************************************************************************
    > File Name: ftell_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *stream;
	stream = fopen("test.txt", "w+");
	fprintf(stream, "This is a test");
	printf("The file pointer is at byte %ld\n",ftell(stream));
	fclose(stream);
	return 0;
}
