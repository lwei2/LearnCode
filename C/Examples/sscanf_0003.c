/*************************************************************************
    > File Name: sscanf_0003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	char buf[1024];
	sscanf("lwei2vip@linuxblogs.cn","%*[^@]@%[^.]",buf);
	printf("buf:%s\n",buf);

	char buf1[1024];
	sscanf("hello, world", "%*s%s",buf1);
	printf("buf1:%s\n",buf1);

	char buf2[1024];
	sscanf("ABCabcAB=","%*[A-Z]%*[a-z]%[^a-z=]",buf2);
	printf("buf2:%s\n",buf2);

	char buf3[1024];
	sscanf("201*1b_-cdZA&","%[0-9|_|--|a-z|A-Z|&|*]",buf3);
	printf("buf3:%s\n",buf3);

	return 0;
}
