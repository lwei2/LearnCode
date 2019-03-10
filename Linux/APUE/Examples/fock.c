/*************************************************************************
    > File Name: fock.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
	int a = 10;
	pid_t pid = fork();
	if(pid<0)
	{
		perror("fork err\n");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0)
	{
		printf("child 1 \n");
		sleep(1);
		printf("child 2 \n");
	}
	else
	{
		sleep(1);
		printf("parent 1 \n");
		sleep(2);
		printf("parent 2 \n");
	}
	return 0;
}
