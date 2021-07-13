/*************************************************************************
    > File Name: remove_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int ret;
	FILE *fp = NULL;
	char filename[] = "test.txt";
	fp = fopen(filename, "w");
	fprintf(fp, "%s", "runoob.com");
	fclose(fp);

	ret = remove(filename);
	if(ret == 0)
		fprintf(stderr, "remove the file:%s\n", filename);
	else
		fprintf(stderr, "remove the file failed!\n");
	return 0;
}
