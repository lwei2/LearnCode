/*************************************************************************
    > File Name: printf_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	printf("%d\n",5);
	printf("-%10s-\n","hello");
	printf("-%-10s-\n","hello");
	printf("%#x\n",0xff);
	printf("%p\n",main);
	printf("%%\n");

	return 0;
}
