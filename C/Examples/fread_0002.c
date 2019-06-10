/*************************************************************************
    > File Name: fread_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void)
{
	int a[N], b[N];
	FILE *fp = fopen("./test.txt", "rb+");
	if(NULL == fp)
	{
		puts("failed to the file!");
		exit(0);
	}
	for(int i = 0; i < N; i++)
		scanf("%d",&a[i]);
	fwrite(a, sizeof(int), N, fp);

	rewind(fp);

	fread(b, sizeof(int), N, fp);
	for(int i = 0; i < N; i++)
		printf("%d ", b[i]);
	printf("\n");
	fclose(fp);
	return 0;
}
