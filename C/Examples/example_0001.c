/*************************************************************************
    > File Name: example_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入十进制，输出十六进制
 ************************************************************************/

#include <stdio.h>


int main(void)
{
	int i;
	printf("please input decimalism number:\n");
	scanf("%d",&i);
	printf("the hex number is %x\n",i);
	return 0;
}
