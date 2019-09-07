/*************************************************************************
    > File Name: test_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct string
{
	char *p;
	int length;
};

int main(void)
{
	struct string str1;
	str1.length = 10;
	str1.p = (char*)malloc(sizeof(char)*10);
	strcpy(str1.p, "hello");


	struct string str2;
	str2.length = str1.length;
	str2.p = (char*)malloc(sizeof(char)*10);
	strcpy(str2.p, str1.p);
	printf("str1:%s\n",str1.p);
	printf("str2:%s\n",str2.p);
	getchar();
	return 0;
}

