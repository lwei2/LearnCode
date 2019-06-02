/*************************************************************************
    > File Name: fwrite_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	FILE *pFile = NULL;
	char buffer[] = {'x', 'y', 'z'};
	pFile = fopen("myfile.bin", "wb");
	if(NULL == pFile)
	{
		printf("open the file failed!\n");
		return -1;
	}
	fwrite(buffer, sizeof(char), sizeof(buffer), pFile);
	fclose(pFile);
	return 0;
}
