/*************************************************************************
    > File Name: vfork.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int b = 20;

int main(void)
{
	pid_t pid = vfork();
	int a = 10;
	if(pid<0)
	{
		perror("vfork error!\n");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0)
	{
		a++;
		b++;
		printf("a:%d , b:%d\n",a,b);
		_exit(0);
	}
	else
	{
		;
	}
	printf("a: %d\n",a);
	printf("b: %d\n",b);
	return 0;
}
