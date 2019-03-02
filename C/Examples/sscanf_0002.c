/*************************************************************************
    > File Name: sscanf_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	char buf[1024];
	sscanf("123456#abcdef","%[^#]", buf);
	printf("buf:%s\n",buf);

	char buf2[1024];
	sscanf("123456abcdefABCDEF","%[1-9a-z]",buf2);
	printf("buf2:%s\n",buf2);


	char buf3[1024];
	sscanf("123456abcABCDEF","%[^A-Z]",buf3);
	printf("buf3:%s\n",buf3);

	return 0;
}
