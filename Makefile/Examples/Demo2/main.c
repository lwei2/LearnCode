/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(void)
{
	int x = 1;
	int y = 1;
	int sum = add(x,y);
	printf("sum=%d\n",sum);
	int ret = sub(x,y);
	printf("ret=%d\n",ret);
	return 0;
}
