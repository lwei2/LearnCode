/*************************************************************************
    > File Name: ppid.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main(void)
{
	while(1)
	{
		sleep(1);
		pid_t pid = getpid();
		pid_t ppid = getppid();
		printf("pid:%d\n", pid);
		printf("ppid:%d\n",ppid);
	}
	return 0;
}
