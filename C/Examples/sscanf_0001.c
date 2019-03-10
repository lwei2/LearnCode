/*************************************************************************
    > File Name: sscanf_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	char buf[1024];
	sscanf("123456","%s",buf);
	printf("buf:%s\n",buf);

	char buf1[1024];
	sscanf("123456","%4s",buf1);
	printf("buf1:%s\n",buf1);

	char buf2[1024];
	sscanf("hello world", "%s",buf2);
	printf("buf2:%s\n",buf2);



	return 0;
}
