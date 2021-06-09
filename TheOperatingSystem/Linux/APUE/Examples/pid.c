/*************************************************************************
    > File Name: pid.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int a = 18;
int b;

int main(void)
{
	static int c = 20;
	char *ps = "hello world";
	int a = 10;
	pid_t pid = fork();
	if(pid < 0)
	{
		perror("fork error\n");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0)
	{
		a++;
	}
	else
	{
		sleep(1);
	}
	printf("ppid :%d\t pid:%d\t, a:%d\n",getppid(), getpid(), a);
	return 0;
}

